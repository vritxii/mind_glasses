#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include <iostream>
#include <QtNetwork>
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

class ServerThread : public QThread
{
    Q_OBJECT
public:
    ServerThread(int16_t);
    ~ServerThread();
    void setMessage(QString message);
    void stop();

protected:
    void run();
    void printMessage();
private:
    QString messageStr;
    volatile bool stopped;
    QTcpServer server;
    QTcpSocket* client;
signals:
    void sentMsg(QString);
public slots:
    void getMsg(QString);
    void acceptConnection();
    void startRead();
};

#endif // THREAD_H
