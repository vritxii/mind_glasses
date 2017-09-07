//
// Created by vrit on 29/05/17.
//

#ifndef MIND_GLASSES_OCRWORDS_HPP
#define MIND_GLASSES_OCRWORDS_HPP
#include <rapidjson/document.h>
#include <rapidjson/prettywriter.h>
#include <rapidjson/stringbuffer.h>
#include <vector>
using namespace rapidjson;
using namespace std;

struct OcrWords {
    int width,top,left,height;
    string word;
};

vector<OcrWords> getWords(string resJson){
    vector<OcrWords> v;
    Document document;
    document.Parse<0>(resJson.c_str());
    assert(document.HasMember("words_result"));
    assert(document.HasMember("words_result_num"));
    int n = document["words_result_num"].GetInt();
    for(int i=0;i<n;i++){
        OcrWords ow;
        ow.word = document["words_result"][i]["words"].GetString();
        ow.width = document["words_result"][i]["location"]["width"].GetInt();
        ow.top = document["words_result"][i]["location"]["top"].GetInt();
        ow.left = document["words_result"][i]["location"]["left"].GetInt();
        ow.height = document["words_result"][i]["location"]["height"].GetInt();
        v.push_back(ow);
    }
    return v;
}
#endif //MIND_GLASSES_OCRWORDS_HPP
