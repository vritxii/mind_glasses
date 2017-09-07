#include "OCRThread.hpp"
//#include "../py_instance.h"
#include <python2.7/Python.h>
#include <iostream>
#include <QDebug>
using namespace std;
OCRThread::OCRThread() {}
OCRThread::~OCRThread() {}
void OCRThread::run() {
    //Py_Initialize();
    //PyRun_SimpleString("import sys");
    //PyRun_SimpleString("sys.path.append('./')");
    cout << "OCR" << endl;
    PyObject *pModule = NULL;
    PyObject *pFunc = NULL;
    cout << "test" << endl;
    pModule = PyImport_ImportModule("Extract_Image");      //Test001:Python文件名
    cout << "test" << endl;
    pFunc = PyObject_GetAttrString(pModule, "extract_img");  //Add:Python文件中的函数名
    //pFunc = PyObject_GetAttrString(pModule, "ADD");  //Add:Python文件中的函数名
    cout << "test" << endl;
    //创建参数:
    PyObject *pArgs = PyTuple_New(1);               //函数调用的参数传递均是以元组的形式打包的,2表示参数个数
    QString tmpPath = "";
    /**
    while (true) {
        if(tmpPath.compare(picPath)!=0) {
            try {
                qDebug() << tmpPath;

                PyTuple_SetItem(pArgs, 0, Py_BuildValue("s", picPath.toStdString().c_str()));//0---序号  i表示创建int型变量
                //返回值
                qDebug() << "test";
                PyObject *pReturn = NULL;
                pReturn = PyEval_CallObject(pFunc, pArgs);      //调用函数
                cout << "3" << endl;
                //将返回值转换为int类型
                char *res;
                PyArg_Parse(pReturn, "s", &res);
                cout << 3 << PyUnicode_Check(pReturn) << endl;
                //auto res = PyString_AsString(pReturn);    //i表示转换成int型变量

                std::cout << res << std::endl;
                emit sentInfo(res);
                tmpPath = picPath;
            }catch (...){
                qDebug() << "Error...";
            }
        }
        sleep(1);
    }
     **/
    try {
        qDebug() << tmpPath;

        PyTuple_SetItem(pArgs, 0, Py_BuildValue("s", picPath.toStdString().c_str()));//0---序号  i表示创建int型变量
        //返回值
        qDebug() << "test";
        PyObject *pReturn = NULL;
        pReturn = PyEval_CallObject(pFunc, pArgs);      //调用函数
        cout << "3" << endl;
        //将返回值转换为int类型
        char *res;
        PyArg_Parse(pReturn, "s", &res);
        cout << 3 << PyUnicode_Check(pReturn) << endl;
        //auto res = PyString_AsString(pReturn);    //i表示转换成int型变量

        std::cout << res << std::endl;
        emit sentInfo(res);
        tmpPath = picPath;
    }catch (...){
        qDebug() << "Error...";
    }
}

void OCRThread::getPicPath(QString str){
    picPath = str;
    qDebug() << picPath;
    this->start();
}
