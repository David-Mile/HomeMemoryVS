/********************************************************************************
** Form generated from reading UI file 'wcamera.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WCAMERA_H
#define UI_WCAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WCamera
{
public:
    QPushButton *anticameraBtn;
    QPushButton *balconeBtn;
    QPushButton *ArmadioCassettieraBtn;
    QPushButton *ScrivaniaComodinoBtn;

    void setupUi(QWidget *WCamera)
    {
        if (WCamera->objectName().isEmpty())
            WCamera->setObjectName(QString::fromUtf8("WCamera"));
        WCamera->resize(829, 639);
        anticameraBtn = new QPushButton(WCamera);
        anticameraBtn->setObjectName(QString::fromUtf8("anticameraBtn"));
        anticameraBtn->setGeometry(QRect(270, 90, 80, 24));
        balconeBtn = new QPushButton(WCamera);
        balconeBtn->setObjectName(QString::fromUtf8("balconeBtn"));
        balconeBtn->setGeometry(QRect(500, 90, 80, 24));
        ArmadioCassettieraBtn = new QPushButton(WCamera);
        ArmadioCassettieraBtn->setObjectName(QString::fromUtf8("ArmadioCassettieraBtn"));
        ArmadioCassettieraBtn->setGeometry(QRect(200, 230, 141, 121));
        ScrivaniaComodinoBtn = new QPushButton(WCamera);
        ScrivaniaComodinoBtn->setObjectName(QString::fromUtf8("ScrivaniaComodinoBtn"));
        ScrivaniaComodinoBtn->setGeometry(QRect(510, 230, 141, 121));

        retranslateUi(WCamera);

        QMetaObject::connectSlotsByName(WCamera);
    } // setupUi

    void retranslateUi(QWidget *WCamera)
    {
        WCamera->setWindowTitle(QCoreApplication::translate("WCamera", "Form", nullptr));
        anticameraBtn->setText(QCoreApplication::translate("WCamera", "Anticamera", nullptr));
        balconeBtn->setText(QCoreApplication::translate("WCamera", "Balcone", nullptr));
        ArmadioCassettieraBtn->setText(QCoreApplication::translate("WCamera", "Armadio e Cassettiera", nullptr));
        ScrivaniaComodinoBtn->setText(QCoreApplication::translate("WCamera", "Scrivania e Comodino", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WCamera: public Ui_WCamera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WCAMERA_H
