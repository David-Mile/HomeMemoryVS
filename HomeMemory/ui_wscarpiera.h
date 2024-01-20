/********************************************************************************
** Form generated from reading UI file 'wscarpiera.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WSCARPIERA_H
#define UI_WSCARPIERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WScarpiera
{
public:
    QPushButton *scafMBtn;
    QPushButton *scafLBtn;
    QPushButton *allObjsBtn;
    QPushButton *antaLBtn;
    QPushButton *scafHBtn;
    QPushButton *backBtrn;
    QPushButton *antaHBtn;

    void setupUi(QWidget *WScarpiera)
    {
        if (WScarpiera->objectName().isEmpty())
            WScarpiera->setObjectName(QString::fromUtf8("WScarpiera"));
        WScarpiera->resize(983, 643);
        scafMBtn = new QPushButton(WScarpiera);
        scafMBtn->setObjectName(QString::fromUtf8("scafMBtn"));
        scafMBtn->setGeometry(QRect(370, 260, 71, 91));
        scafLBtn = new QPushButton(WScarpiera);
        scafLBtn->setObjectName(QString::fromUtf8("scafLBtn"));
        scafLBtn->setGeometry(QRect(370, 350, 71, 91));
        allObjsBtn = new QPushButton(WScarpiera);
        allObjsBtn->setObjectName(QString::fromUtf8("allObjsBtn"));
        allObjsBtn->setGeometry(QRect(250, 70, 80, 24));
        antaLBtn = new QPushButton(WScarpiera);
        antaLBtn->setObjectName(QString::fromUtf8("antaLBtn"));
        antaLBtn->setGeometry(QRect(440, 320, 241, 121));
        scafHBtn = new QPushButton(WScarpiera);
        scafHBtn->setObjectName(QString::fromUtf8("scafHBtn"));
        scafHBtn->setGeometry(QRect(370, 170, 71, 91));
        backBtrn = new QPushButton(WScarpiera);
        backBtrn->setObjectName(QString::fromUtf8("backBtrn"));
        backBtrn->setGeometry(QRect(89, 70, 111, 24));
        antaHBtn = new QPushButton(WScarpiera);
        antaHBtn->setObjectName(QString::fromUtf8("antaHBtn"));
        antaHBtn->setGeometry(QRect(440, 200, 241, 121));

        retranslateUi(WScarpiera);

        QMetaObject::connectSlotsByName(WScarpiera);
    } // setupUi

    void retranslateUi(QWidget *WScarpiera)
    {
        WScarpiera->setWindowTitle(QCoreApplication::translate("WScarpiera", "Form", nullptr));
        scafMBtn->setText(QCoreApplication::translate("WScarpiera", "ScafM", nullptr));
        scafLBtn->setText(QCoreApplication::translate("WScarpiera", "scafL", nullptr));
        allObjsBtn->setText(QCoreApplication::translate("WScarpiera", "All Objects", nullptr));
        antaLBtn->setText(QCoreApplication::translate("WScarpiera", "AntaL", nullptr));
        scafHBtn->setText(QCoreApplication::translate("WScarpiera", "ScafH", nullptr));
        backBtrn->setText(QCoreApplication::translate("WScarpiera", "Back to OpenSpace", nullptr));
        antaHBtn->setText(QCoreApplication::translate("WScarpiera", "AntaH", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WScarpiera: public Ui_WScarpiera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WSCARPIERA_H
