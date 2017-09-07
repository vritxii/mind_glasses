//
// Created by vrit on 30/05/17.
//

#include "OIThread.hpp"
#include <iostream>
OIThread::OIThread() {}
OIThread::~OIThread() {}
#include <python2.7/Python.h>
#include <qdebug.h>
using  namespace std;

void OIThread::run() {
    cout << "OI" << endl;
    QString tmpPath = "";
    /**
    while (true) {
        if (tmpPath.compare(picPath) != 0) {
            try {
                PyObject *pModule = NULL;
                PyObject *pFunc = NULL;
                cout << "test" << endl;
                pModule = PyImport_ImportModule("recoplate");      //Test001:Python文件名
                cout << "test" << endl;
                pFunc = PyObject_GetAttrString(pModule, "baidu_stu_lookup");  //Add:Python文件中的函数名
                //pFunc = PyObject_GetAttrString(pModule, "ADD");  //Add:Python文件中的函数名
                //创建参数:
                PyObject *pArgs = PyTuple_New(1);               //函数调用的参数传递均是以元组的形式打包的,2表示参数个数
                PyTuple_SetItem(pArgs, 0, Py_BuildValue("s", picPath.toStdString().c_str()));//0---序号  i表示创建int型变量
                //返回值
                PyObject *pReturn = NULL;
                pReturn = PyEval_CallObject(pFunc, pArgs);      //调用函数
                cout << "3" << endl;
                //将返回值转换为int类型
                char *res;
                PyArg_Parse(pReturn, "s", &res);
                //cout << 3 << PyUnicode_Check(pReturn) << endl;
                //auto res = PyString_AsString(pReturn);    //i表示转换成int型变量
                //Py_Finalize();
                std::cout << res << std::endl;
                emit sentObjInfo(QString::fromStdString(res));
                tmpPath = picPath;
            }catch (...){
                qDebug() << "Error...";
            }
        }
        sleep(1);
    }
     **/
    try {
        PyObject *pModule = NULL;
        PyObject *pFunc = NULL;
        cout << "test" << endl;
        pModule = PyImport_ImportModule("recoplate");      //Test001:Python文件名
        cout << "test" << endl;
        pFunc = PyObject_GetAttrString(pModule, "getInfo");  //Add:Python文件中的函数名
        //pFunc = PyObject_GetAttrString(pModule, "ADD");  //Add:Python文件中的函数名
        //创建参数:
        PyObject *pArgs = PyTuple_New(1);               //函数调用的参数传递均是以元组的形式打包的,2表示参数个数
        PyTuple_SetItem(pArgs, 0, Py_BuildValue("s", picPath.toStdString().c_str()));//0---序号  i表示创建int型变量
        //返回值
        PyObject *pReturn = NULL;
        pReturn = PyEval_CallObject(pFunc, pArgs);      //调用函数
        cout << "3" << endl;
        //将返回值转换为int类型
        char *res;
        PyArg_Parse(pReturn, "s", &res);
        //cout << 3 << PyUnicode_Check(pReturn) << endl;
        //auto res = PyString_AsString(pReturn);    //i表示转换成int型变量
        //Py_Finalize();
        std::cout << res << std::endl;
        emit sentObjInfo(QString::fromStdString(res));
        tmpPath = picPath;
    }catch (...){
        qDebug() << "Error...";
    }
}

/**
string OIThread::PyObjectInfo(){
    Py_Initialize();
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('./')");
    PyObject *pModule = NULL;
    PyObject *pFunc = NULL;
    cout << "test" << endl;
    pModule = PyImport_ImportModule("recoplate");      //Test001:Python文件名
    cout << "test" << endl;
    pFunc = PyObject_GetAttrString(pModule, "baidu_stu_lookup");  //Add:Python文件中的函数名
    //pFunc = PyObject_GetAttrString(pModule, "ADD");  //Add:Python文件中的函数名
    cout << picPath << endl;
    //创建参数:
    PyObject *pArgs = PyTuple_New(1);               //函数调用的参数传递均是以元组的形式打包的,2表示参数个数
    PyTuple_SetItem(pArgs, 0, Py_BuildValue("s", picPath.c_str()));//0---序号  i表示创建int型变量
    //返回值
    PyObject *pReturn = NULL;
    pReturn = PyEval_CallObject(pFunc, pArgs);      //调用函数
    cout << "3" << endl;
    //将返回值转换为int类型
    char *res;
    PyArg_Parse(pReturn, "s", &res);
    //cout << 3 << PyUnicode_Check(pReturn) << endl;
    //auto res = PyString_AsString(pReturn);    //i表示转换成int型变量
    Py_Finalize();
    std::cout << res << std::endl;
    return string(res);
}
 **/
void OIThread::getPicPath(QString str){
    picPath = str;
    this->start();
}