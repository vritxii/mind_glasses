//
// Created by vrit on 4/5/17.
//

#ifndef MIND_GLASSES_WEIGHT_HPP
#define MIND_GLASSES_WEIGHT_HPP

#endif //MIND_GLASSES_WEIGHT_HPP

#include <QtWidgets/QWidget>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QStackedLayout>
#include <phonon4qt5/phonon/Phonon/MediaObject>
#include <phonon4qt5/phonon/Phonon/AudioOutput>
#include <QtMultimedia/QCamera>
#include <QtMultimedia/QCameraImageCapture>
#include <QtMultimediaWidgets/QCameraViewfinder>
#include <QtGui/QImage>
#include <QtCore/QTimer>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "ui_glasses-gui.h"
#include "subthread/ServerThread.hpp"
#include "subthread/TransThread.hpp"
#include "subthread/OCRThread.hpp"
#include "subthread/OIThread.hpp"

class Form : public QWidget {
Q_OBJECT
public:
    explicit Form(QWidget* parent = 0);
    ~Form();
signals:
    void display(int number);
    void sentWord(QString);
    void sentPicPath(QString);
    void sentObjPath(QString);
private slots:
    void openPic();
    void Phonation(QString);
    void openCamera();      // 打开摄像头
    void readFarme();       // 读取当前帧信息
    void closeCamera();     // 关闭摄像头。
    void takingPictures();  // 拍照
    void translate();
    void getMsg(QString);
    void drawTrans(QString);
    void tasks(QString);
    void showInfo(QString);
    void chatInfo(QString);
    QImage cvMat2QImage(const cv::Mat& mat);
    cv::Mat QImage2cvMat(QImage image);
private:
    Ui::Form ui;
    Phonon::MediaObject *media = new Phonon::MediaObject;
    QImage Mat2QImage(cv::Mat cvImg);
    QTimer    *timer;
    QImage    *imag;
    ServerThread *st = new ServerThread(8888);
    ServerThread *ct = new ServerThread(8889);
    TransThread tt;
    OCRThread ocr;
    OIThread obj;
    cv::VideoCapture cap;// 视频获取结构， 用来作为视频获取函数的一个参数
    cv::Mat frame;//Mat类型，每一帧存放地址
    cv::Mat capframe;//Mat类型，每一帧存放地址
    QStackedLayout *stackLayout;
    QString picPath="";
    int ready=1;
};