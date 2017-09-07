//
// Created by vrit on 4/5/17.
//
#include "Main_gui.hpp"
#include <python2.7/Python.h>
#include <sqltypes.h>

Form::Form(QWidget *parent)
        : QWidget(parent) {
    ui.setupUi(this);
    //this->setWindowState(Qt::WindowMaximized);
    //this->setWindowFlags(Qt::FramelessWindowHint);
    //this->setWindowOpacity(0.95);
    //ui.picShow->setScaledContents(true);
    Py_Initialize();
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('./')");
    //tt.start();
    //ocr.start();
    //obj.start();
    connect(ui.openPic, SIGNAL(clicked()), this, SLOT(openPic()));
    //connect(ui.trans,SIGNAL(clicked()),this, SLOT(submodule()));
    connect(st, SIGNAL(sentMsg(QString)), this, SLOT(tasks(QString)));
    connect(ct, SIGNAL(sentMsg(QString)), this, SLOT(chatInfo(QString)));
    connect(this, SIGNAL(sentWord(QString)), &tt, SLOT(getWord(QString)));
    connect(&tt, SIGNAL(sentTrans(QString)), this, SLOT(getMsg(QString)));
    connect(ui.trans, SIGNAL(clicked()), this, SLOT(translate()));
    connect(this, SIGNAL(sentPicPath(QString)), &ocr, SLOT(getPicPath(QString)));
    connect(&ocr, SIGNAL(sentInfo(QString)), this, SLOT(drawTrans(QString)));
    connect(this, SIGNAL(sentObjPath(QString)), &obj, SLOT(getPicPath(QString)));
    connect(&obj, SIGNAL(sentObjInfo(QString)), this, SLOT(showInfo(QString)));
    timer = new QTimer(this);
    imag = new QImage();         // 初始化
    /*信号和槽*/
    connect(timer, SIGNAL(timeout()), this, SLOT(readFarme()));  // 时间到，读取当前摄像头
    connect(ui.openCam, SIGNAL(clicked()), this, SLOT(openCamera()));
    connect(ui.takePic, SIGNAL(clicked()), this, SLOT(takingPictures()));
    connect(ui.closeCam, SIGNAL(clicked()), this, SLOT(closeCamera()));
    //emit sentPicPath("pic/w.jpg");
}

Form::~Form() {}


void Form::chatInfo(QString robotWord) {
    //robotWord = "\u4f60\u597d";
    //robotWord = robotWord.replace("\\\\\\\\","");
    //qDebug() << robotWord.split("\\");
    QTextCodec *codec = QTextCodec::codecForName("utf-8");
    auto res = robotWord.toStdString();
    ui.chat->append(codec->toUnicode(robotWord.toStdString().c_str()));
    ui.chat->append(robotWord);
}
void Form::tasks(QString a) {
    int i = a.toInt();
    emit ui.takePic->clicked(true);
    qDebug() << "ready?" << ready;
    if(ready) {
        qDebug() << "choose";
        switch (i) {
            case 2:
                picPath = "pic/eng.jpg";
                emit sentPicPath(picPath);
                ready = 0;
                break;
            case 3:
                picPath = "pic/1.jpg";
                emit sentObjPath(picPath);
                ready = 0;
                break;
            default:
                qDebug() << a;
                break;
        }
    }
}
void Form::translate() {
    auto wordInfo = ui.word->text();
    qDebug() << wordInfo;
    //Phonation("");
    emit sentWord(wordInfo);
}

#include "submodule/OcrWords.hpp"

void Form::drawTrans(QString resJson) {
    auto v = getWords(resJson.toStdString());
    QString words = "";
    ui.result->clear();
    capframe = cv::imread(picPath.toStdString());
    for (auto iter = v.begin(); iter != v.end(); iter++) {
        //qDebug() << "Trans is ready?";
        //qDebug() << tt.getStatus();
        //auto rec = cv::Rect((iter->left,iter->top),(iter->left+iter->width, iter->top+iter->height));
        cv::Rect rect1(iter->left, iter->top, iter->width, iter->height);
        cv::rectangle(capframe, rect1, (255, 0, 0));
        words += (QString::fromStdString(iter->word) + "\n");
        //tt.setStatus();
        //emit sentWord(QString::fromStdString(iter->word));
        //qDebug() << "This"+QString::fromStdString(iter->word);
        //sleep(1.5);
    }
    qDebug() << "words: ";
    qDebug() << words;
    emit sentWord(words);
    ui.picShow->setPixmap(QPixmap::fromImage(cvMat2QImage(capframe)));
    ready = 1;
    //remove(picPath.toStdString().c_str());
    picPath = "";
}

void Form::getMsg(QString str) {
    qDebug() << tt.isRunning();
    ui.result->setText(str);
    //tt.setStatus();
}

void Form::openPic() {
    QString filename;
    QFileDialog(this).setDirectory("/home/vrit/Desktop");
    filename = QFileDialog::getOpenFileName(this,
                                            tr("选择图像"),
                                            "",
                                            tr("Images (*.png *.bmp *.jpg *.tif *.GIF )"));
    if (filename.isEmpty()) {
        return;
    } else {
        QImage *img = new QImage;

        if (!(img->load(filename))) //加载图像
        {
            QMessageBox::information(this,
                                     tr("打开图像失败"),
                                     tr("打开图像失败!"));
            delete img;
            return;
        }
        //ui.picShow->setPixmap(QPixmap::fromImage(*img));
        capframe = QImage2cvMat(*img);
    }
    ui.picPath->setText(filename);
    emit sentPicPath(filename);
}

void Form::Phonation(QString audioPath = "") {
    ui.picPath->setText(audioPath);
    if (audioPath.isEmpty()) {
        return;
    } else {
        Phonon::AudioOutput *audioOutput = new Phonon::AudioOutput(this);

        this->media->setCurrentSource(Phonon::MediaSource(audioPath));

        Phonon::createPath(this->media, audioOutput);
    }
}

void Form::openCamera() {
    //cap = NULL;
    //cv::VideoCapture cap(0);
    //cap = cv::VideoCapture(0);
    cap.open(0);
    if (!cap.isOpened()) {
        printf("frame is empty\n");
    }
    timer->start(33);
}

void Form::readFarme() {
    cap >> frame;// 从摄像头中抓取并返回每一帧
    // 将抓取到的帧，转换为QImage格式。QImage::Format_RGB888不同的摄像头用不同的格式。
    QImage imag = cvMat2QImage(frame);
    ui.VideoView->setPixmap(QPixmap::fromImage(imag));  // 将图片显示到label上
}



void Form::showInfo(QString info) {
    ui.result->setText(info);
    ready = 1;
    ui.picShow->setPixmap(QPixmap::fromImage(QImage(picPath)));
    picPath = "";
    //remove(picPath.toStdString().c_str());
}

void Form::takingPictures() {
    cap >> frame;// 从摄像头中抓取并返回每一帧
    time_t currtime = time(NULL);
    tm *p = localtime(&currtime);
    char pp[100] = {0};
    sprintf(pp, "pic/%d%02d%02d%02d%02d%02d.jpg", p->tm_year + 1900, p->tm_mon + 1, p->tm_mday, p->tm_hour,
            p->tm_min, p->tm_sec);
    picPath = QString::fromStdString(pp);
    imwrite(picPath.toStdString(), frame);
    //string plateInfo = PyObjectInfo("pic/1.jpg");
    //string plateInfo = "test";
    //ui.result->setText(QString::fromStdString(plateInfo));
    // 将抓取到的帧，转换为QImage格式。QImage::Format_RGB888不同的摄像头用不同的格式。
    //QImage imag = cvMat2QImage(frame);
    //ui.picShow->setPixmap(QPixmap::fromImage(imag));  // 将图片显示到label上
    //emit sentObjPath(QString::fromStdString("pic/1.jpg"));
}

void Form::closeCamera() {
    timer->stop();         // 停止读取数据。
    cap.release();
}


QImage Form::cvMat2QImage(const cv::Mat &mat) {
    // 8-bits unsigned, NO. OF CHANNELS = 1
    if (mat.type() == CV_8UC1) {
        QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
        // Set the color table (used to submodule colour indexes to qRgb values)
        image.setColorCount(256);
        for (int i = 0; i < 256; i++) {
            image.setColor(i, qRgb(i, i, i));
        }
        // Copy input Mat
        uchar *pSrc = mat.data;
        for (int row = 0; row < mat.rows; row++) {
            uchar *pDest = image.scanLine(row);
            memcpy(pDest, pSrc, mat.cols);
            pSrc += mat.step;
        }
        return image;
    }
        // 8-bits unsigned, NO. OF CHANNELS = 3
    else if (mat.type() == CV_8UC3) {
        // Copy input Mat
        const uchar *pSrc = (const uchar *) mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
        return image.rgbSwapped();
    } else if (mat.type() == CV_8UC4) {
        qDebug() << "CV_8UC4";
        // Copy input Mat
        const uchar *pSrc = (const uchar *) mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
        return image.copy();
    } else {
        qDebug() << "ERROR: Mat could not be converted to QImage.";
        return QImage();
    }
}

cv::Mat Form::QImage2cvMat(QImage image) {
    cv::Mat mat;
    qDebug() << image.format();
    switch (image.format()) {
        case QImage::Format_ARGB32:
        case QImage::Format_RGB32:
        case QImage::Format_ARGB32_Premultiplied:
            mat = cv::Mat(image.height(), image.width(), CV_8UC4, (void *) image.constBits(), image.bytesPerLine());
            break;
        case QImage::Format_RGB888:
            mat = cv::Mat(image.height(), image.width(), CV_8UC3, (void *) image.constBits(), image.bytesPerLine());
            cv::cvtColor(mat, mat, CV_BGR2RGB);
            break;
        case QImage::Format_Indexed8:
            mat = cv::Mat(image.height(), image.width(), CV_8UC1, (void *) image.constBits(), image.bytesPerLine());
            break;
    }
    return mat;
}

