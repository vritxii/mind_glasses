#include "ServerThread.hpp"

ServerThread::ServerThread(int16_t port){
    stopped = false;
    connect(&server, SIGNAL(newConnection()),
            this, SLOT(acceptConnection()));
    qDebug() << port;
    server.listen(QHostAddress::Any, port);
}

ServerThread::~ServerThread()
{
    server.close();
}

void ServerThread::run(){
    /**
    int i = 0;
    while (!stopped) {
        printMessage();
        i++;
        emit sentMsg("hello");
    }
     **/
    stopped = false;
}

void ServerThread::stop(){
    stopped = true;
}

void ServerThread::setMessage(QString message){
    messageStr = message;
}

void ServerThread::printMessage(){
    qDebug()<<messageStr;
    sleep(1);
}

void ServerThread::getMsg(QString a){
    qDebug() << a;
    emit sentMsg(a);
}

void ServerThread::acceptConnection()
{
    client = server.nextPendingConnection();
    connect(client, SIGNAL(readyRead()),
            this, SLOT(startRead()));
    /**
    while (client->isReadable()){
        startRead();
    }
     **/
}

void ServerThread::startRead()
{
    char buffer[1024] = {0};
    client->read(buffer, client->bytesAvailable());
    QString str = QString(QLatin1String(buffer));
    qDebug() << str;
    messageStr = str;
    emit sentMsg(messageStr);
    //client->close();
}