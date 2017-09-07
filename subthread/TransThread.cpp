#include "TransThread.hpp"
#include <QDebug>
#include "../submodule/translate.hpp"

TransThread::TransThread(){}
TransThread::~TransThread() {}

bool TransThread::getStatus(){
    return status;
}

void TransThread::setStatus() {
    status = !status;
}

using  namespace std;
vector<QString> split(string str,string pattern)
{
     string::size_type pos;
     vector<QString> result;
     str+=pattern;//扩展字符串以方便操作
     int size=str.size();

     for(int i=0; i<size; i++)
     {
         pos=str.find(pattern,i);
         if(pos<size) {
             string s=str.substr(i,pos-i);
             result.push_back(QString::fromStdString(s));
             i=pos+pattern.size()-1;
         }
     }
     return result;
}

void TransThread::run(){
   QString tmpWord = "";
    /**
    while (true){
        if(tmpWord.compare(word)!=0){
            try {
                auto words = split(word.toStdString(), "\n");
                QString trans = "";
                for(auto iter = words.begin();iter!=words.end();iter++) {
                    trans += ("word: " + word + "\n" +QString::fromStdString(testTranslate(word.toStdString())));
                }
                emit sentTrans(trans);
                tmpWord = word;
            }catch (...){
                qDebug() << "Error...";
            }
        }
        sleep(0.5);
    }
     **/
    try {
        auto words = split(word.toStdString(), "\n");
        QString trans = "";
        auto iter = words.begin();
        for(auto i = 1;i<words.size();i++) {
            trans += ("word: " + *iter + "\n" +QString::fromStdString(testTranslate(iter->toStdString())))+"\n";
            iter++;
        }
        emit sentTrans(trans);
        tmpWord = word;
    }catch (...){
        qDebug() << "Error...";
    }
}

void TransThread::getWord(QString word){
   this->word = word;
    this->start();
}
