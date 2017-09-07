#ifndef _OCRTHREAD_HPP_
#define _OCRTHREAD_HPP_

#include <QThread>
//#include "py_instance.h"
class OCRThread : public QThread
{
    Q_OBJECT
public:
    OCRThread();
    ~OCRThread();
protected:
    void run();
private:
    QString picPath;
signals:
    void sentInfo(QString);
public slots:
    void getPicPath(QString);
};

#endif // THREAD_H
