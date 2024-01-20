/********************************************************************************
** Form generated from reading UI file 'wanticamera.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WANTICAMERA_H
#define UI_WANTICAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WAnticamera
{
public:
    QPushButton *bagnoBtn;
    QPushButton *ripostiglioBtn;
    QPushButton *cameraBtn;
    QPushButton *openSpaceBtn;

    void setupUi(QWidget *WAnticamera)
    {
        if (WAnticamera->objectName().isEmpty())
            WAnticamera->setObjectName(QString::fromUtf8("WAnticamera"));
        WAnticamera->resize(905, 667);
        bagnoBtn = new QPushButton(WAnticamera);
        bagnoBtn->setObjectName(QString::fromUtf8("bagnoBtn"));
        bagnoBtn->setGeometry(QRect(460, 150, 91, 41));
        ripostiglioBtn = new QPushButton(WAnticamera);
        ripostiglioBtn->setObjectName(QString::fromUtf8("ripostiglioBtn"));
        ripostiglioBtn->setGeometry(QRect(520, 320, 91, 41));
        cameraBtn = new QPushButton(WAnticamera);
        cameraBtn->setObjectName(QString::fromUtf8("cameraBtn"));
        cameraBtn->setGeometry(QRect(230, 220, 101, 41));
        openSpaceBtn = new QPushButton(WAnticamera);
        openSpaceBtn->setObjectName(QString::fromUtf8("openSpaceBtn"));
        openSpaceBtn->setGeometry(QRect(340, 350, 111, 41));

        retranslateUi(WAnticamera);

        QMetaObject::connectSlotsByName(WAnticamera);
    } // setupUi

    void retranslateUi(QWidget *WAnticamera)
    {
        WAnticamera->setWindowTitle(QCoreApplication::translate("WAnticamera", "Form", nullptr));
        bagnoBtn->setText(QCoreApplication::translate("WAnticamera", "Bagno", nullptr));
        ripostiglioBtn->setText(QCoreApplication::translate("WAnticamera", "Ripostiglio", nullptr));
        cameraBtn->setText(QCoreApplication::translate("WAnticamera", "Camera da Letto", nullptr));
        openSpaceBtn->setText(QCoreApplication::translate("WAnticamera", "OpenSpace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WAnticamera: public Ui_WAnticamera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WANTICAMERA_H
