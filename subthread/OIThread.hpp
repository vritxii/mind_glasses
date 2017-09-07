//
// Created by vrit on 30/05/17.
//

#ifndef MIND_GLASSES_OBJECTINFO_HPP
#define MIND_GLASSES_OBJECTINFO_HPP
#include <QThread>
class OIThread : public QThread
{
Q_OBJECT
public:
    OIThread();
    ~OIThread();
protected:
    void run();
private:
    QString picPath = "";
signals:
    void sentObjInfo(QString);
public slots:
    void getPicPath(QString);
    //std::string PyObjectInfo();
};

#endif //MIND_GLASSES_OBJECTINFO_HPP
