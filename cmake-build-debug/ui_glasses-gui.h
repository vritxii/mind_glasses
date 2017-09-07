/********************************************************************************
** Form generated from reading UI file 'glasses-gui.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLASSES_2D_GUI_H
#define UI_GLASSES_2D_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *word;
    QPushButton *trans;
    QLineEdit *picPath;
    QPushButton *openPic;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout;
    QTextBrowser *result;
    QPushButton *openCam;
    QPushButton *takePic;
    QPushButton *closeCam;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *VideoView;
    QLabel *picShow;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *chat;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(2104, 1195);
        Form->setLayoutDirection(Qt::LeftToRight);
        verticalLayoutWidget_3 = new QWidget(Form);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 700, 381, 271));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        word = new QLineEdit(verticalLayoutWidget_3);
        word->setObjectName(QStringLiteral("word"));
        word->setReadOnly(false);

        verticalLayout_2->addWidget(word);

        trans = new QPushButton(verticalLayoutWidget_3);
        trans->setObjectName(QStringLiteral("trans"));

        verticalLayout_2->addWidget(trans);

        picPath = new QLineEdit(verticalLayoutWidget_3);
        picPath->setObjectName(QStringLiteral("picPath"));
        picPath->setReadOnly(true);

        verticalLayout_2->addWidget(picPath);

        openPic = new QPushButton(verticalLayoutWidget_3);
        openPic->setObjectName(QStringLiteral("openPic"));

        verticalLayout_2->addWidget(openPic);

        verticalLayoutWidget_2 = new QWidget(Form);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(390, 690, 431, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        result = new QTextBrowser(verticalLayoutWidget_2);
        result->setObjectName(QStringLiteral("result"));

        verticalLayout->addWidget(result);

        openCam = new QPushButton(verticalLayoutWidget_2);
        openCam->setObjectName(QStringLiteral("openCam"));

        verticalLayout->addWidget(openCam);

        takePic = new QPushButton(verticalLayoutWidget_2);
        takePic->setObjectName(QStringLiteral("takePic"));

        verticalLayout->addWidget(takePic);

        closeCam = new QPushButton(verticalLayoutWidget_2);
        closeCam->setObjectName(QStringLiteral("closeCam"));

        verticalLayout->addWidget(closeCam);

        layoutWidget = new QWidget(Form);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(-10, 0, 1661, 691));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        VideoView = new QLabel(layoutWidget);
        VideoView->setObjectName(QStringLiteral("VideoView"));
        VideoView->setScaledContents(true);

        horizontalLayout->addWidget(VideoView);

        picShow = new QLabel(layoutWidget);
        picShow->setObjectName(QStringLiteral("picShow"));

        horizontalLayout->addWidget(picShow);

        verticalLayoutWidget = new QWidget(Form);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(889, 690, 341, 321));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        chat = new QTextBrowser(verticalLayoutWidget);
        chat->setObjectName(QStringLiteral("chat"));

        verticalLayout_3->addWidget(chat);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", Q_NULLPTR));
        trans->setText(QApplication::translate("Form", "translate", Q_NULLPTR));
        openPic->setText(QApplication::translate("Form", "OpenPic", Q_NULLPTR));
        openCam->setText(QApplication::translate("Form", "OpenCam", Q_NULLPTR));
        takePic->setText(QApplication::translate("Form", "TakePic", Q_NULLPTR));
        closeCam->setText(QApplication::translate("Form", "CloseCam", Q_NULLPTR));
        VideoView->setText(QApplication::translate("Form", "Video", Q_NULLPTR));
        picShow->setText(QApplication::translate("Form", "Capture", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLASSES_2D_GUI_H
