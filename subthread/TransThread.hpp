#ifndef TRANSTHREAD_HPP
#define TRANSTHREAD_HPP

#include <QThread>
#include <iostream>

class TransThread : public QThread
{
    Q_OBJECT
public:
    TransThread();
    ~TransThread();
    bool getStatus();
    void setStatus();
protected:
    void run();
private:
    QString word;
    bool status = true;
signals:
    void sentTrans(QString);
public slots:
    void getWord(QString);
};

#endif // TRANSTHREAD_HPP
