//
// Created by vrit on 4/3/17.
//

#ifndef MIND_GLASSES_TRANSLATE_HPP
#define MIND_GLASSES_TRANSLATE_HPP

#endif //MIND_GLASSES_TRANSLATE_HPP
/*
 2     Filename: submodule.cc
 3     Author: BerlinSun
 4 */
#include <iostream>
#include <stdio.h>
#include "curl/curl.h"
#include "jsoncpp/json/json.h"
#include "../xml2json.hpp"
using namespace std;

int writer(char *data, size_t size, size_t nmemb, string *writerData) {
    if (writerData == NULL)
        return 0;
    int len = size * nmemb;
    writerData->append(data, len);
    return len;
}


string youdao_translate(string word) {
    string buffer;
    string translate_url = "http://fanyi.youdao.com/openapi.do?keyfrom=mindglasses&key=413736808&type=data&doctype=json&version=1.1&q=";
    //string translate_url = "http://dict-co.iciba.com/api/dictionary.php?w=" + word + "&key=2471167CFD38C7F5EB364AC91D21C87F";
    translate_url += word;
    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, translate_url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writer);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &buffer);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }
    if (buffer.empty()) {
        cout << "The server return NULL!" << endl;
        exit(0);
    }
    cout << buffer.c_str() << endl;

    Json::Value root;
    Json::Reader reader;
    bool parsingSuccessful = reader.parse(buffer, root);

    if (!parsingSuccessful) {
        cout << "Failed to parse the data!" << endl;
        exit(0);
    }
    cout << "youdao: " << root["translation"][0].asString() << endl;
    try {
        const Json::Value basic = root["basic"];
        const Json::Value phonetic = basic["phonetic"];
        //const Json::Value explains = basic["explains"];
        cout << "Provided by Youdao dictionary!" << endl;
        cout << "-----------------------------" << endl;
        cout << word << "\t英[" << phonetic.asString() << "]" << endl;
        string trans = "";
        trans.append("translate:").append(root["translation"][0].asString())+="\n";
        if(phonetic.asString().compare("")!=0)
            trans.append("pronounce: [").append(phonetic.asString())+="]";
        //for (int i = 0; i < explains.size(); ++i)
        //    cout << explains[i].asString() << endl;
        cout << trans << endl;
        return trans;
    } catch (...) {
        cout << "" << endl;
    }
    return "";
}

vector<char *> splite(string str="", string delim="") {
    auto s =(char *) str.c_str();
    const char *d = delim.c_str();
    char *p;
    p = strtok(s, d);
    vector<char *> strs;
    while (p) {
        //printf("%s\n", p);
        strs.push_back(p);
        p = strtok(NULL, d);
    }

    return strs;
}

void playVoice(string voice_url) {
    string get_cmd = "wget " + voice_url;
    system(get_cmd.c_str());
    string delim = "/";
    auto strs = splite(get_cmd, "/");
    string file_name = (string) strs.at(strs.size() - 1);
    //cout << file_name << endl;
    system(("play " + file_name).c_str());
    system(("rm -f  " + file_name).c_str());
}


string jinshan_translate(string word) {
    //string result;
    //cout << run_py_module("ocr_space", "ocr_space_file", "filename='/home/vrit/test.jpg', overlay=False, api_key='10d2c910ca88957', language='eng'", result);
    //cout << result << endl;

    string buffer;
    string translate_url =
            "http://dict-co.iciba.com/api/dictionary.php?w=" + word + "&key=2471167CFD38C7F5EB364AC91D21C87F";
    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, translate_url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writer);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &buffer);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }
    //cout << buffer << endl;
    bool b = (buffer.find("pron") < buffer.size() && buffer.find("acceptation") < buffer.size() && buffer.find("sent") < buffer.size());
    //cout << (buffer.find("pron") < buffer.size()) << endl;
    if(b){
        rapidxml::xml_document<char> doc;
        doc.parse<0>(const_cast<char *>(buffer.c_str()));
        auto node = doc.first_node("dict");
        //cout << "voice:" << node->first_node("pron")->value() << endl;
        playVoice((string) node->first_node("pron")->value());
        cout << "translate:" << node->first_node("acceptation")->value() << endl;
        cout << "pronounce: <" << node->first_node("ps")->value() << ">" << endl;
        string trans = "";
        trans.append("translate:").append(node->first_node("acceptation")->value());
        if(node->first_node("ps")->value()!="")
            trans.append("pronounce: [").append(node->first_node("ps")->value())+="]";
        cout << trans << endl;
        /**
        cout << "example:" << node->first_node("sent")->first_node("orig")->value()
             << node->first_node("sent")->first_node("trans")->value() << endl;
             **/
        return trans;
    }
    else {
        return "";
    }
}

void str_trim_crlf(string &str) //去除\r\n
{
    /*
    string::size_type pos = 0;
    while ((pos=str.find('\n', pos)) != string::npos || (pos=str.find('\r', pos)) != string::npos) {
        str.replace(pos, 1, "");
    }
    */
    string tmp="";
    for(auto iter = str.begin(); iter!=str.end(); iter++){
        if (*iter=='\n' || *iter=='\r')
            *iter = '\0';
        else
            tmp += *iter;
    }
    str = tmp;
    str.erase(0,str.find_first_not_of(" "));
    str.erase(str.find_last_not_of(" ") + 1);
}

string testTranslate(string word){
    //string word = TestPy();
    //string word = "how are you";
    //cout << "\nword:\n" << word.size() << endl;
    // cout << "***************" << endl;
    str_trim_crlf(word);
    //cout << "word:\n" << word.size() << endl;
    //cout << "***************" << endl;

    //string word = "is there correct use of transition words";
    //word = "how are you";
    auto tmp = jinshan_translate(word);
    if (0==tmp.compare(""))
        return youdao_translate(word);
    return tmp;
    //youdao_translate(word);
    /**
    if(!jinshan_translate(word)){
        cout << "Can't use Jinshanciba" << endl;
        try {
            youdao_translate(word);
        }catch (...){
            cout << "Can't translate!" << endl;
        }
    }
    **/
    //string str = "how are you";

}

#include "openssl/md5.h"
string GetMD5(const string &str)
{
    unsigned char md[16];
    char temp[3] = {'\0'};
    string ans = "";
    MD5((unsigned char*)(str.c_str()), str.size(), md);
    for(int i=0; i<16; i++)
    {
        sprintf(temp, "%02x", md[i]);
        ans += temp;
    }
    return ans;
}