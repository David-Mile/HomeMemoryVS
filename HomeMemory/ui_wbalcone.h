/********************************************************************************
** Form generated from reading UI file 'wbalcone.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBALCONE_H
#define UI_WBALCONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WBalcone
{
public:
    QPushButton *cameraBtn;
    QPushButton *cassapancaBtn;
    QPushButton *openSpaceBtn;
    QPushButton *floorLeftBtn;
    QPushButton *scafRight1Btn;
    QPushButton *scafLeft1Btn;
    QPushButton *scafLeft2Btn;
    QPushButton *scafLeft3Btn;
    QPushButton *scafLeft4Btn;
    QPushButton *scafRight2Btn;
    QPushButton *scafRight3Btn;
    QPushButton *scafRight4Btn;
    QPushButton *allObjsBtn;

    void setupUi(QWidget *WBalcone)
    {
        if (WBalcone->objectName().isEmpty())
            WBalcone->setObjectName(QString::fromUtf8("WBalcone"));
        WBalcone->resize(1154, 669);
        cameraBtn = new QPushButton(WBalcone);
        cameraBtn->setObjectName(QString::fromUtf8("cameraBtn"));
        cameraBtn->setGeometry(QRect(100, 190, 101, 131));
        cassapancaBtn = new QPushButton(WBalcone);
        cassapancaBtn->setObjectName(QString::fromUtf8("cassapancaBtn"));
        cassapancaBtn->setGeometry(QRect(240, 380, 191, 51));
        openSpaceBtn = new QPushButton(WBalcone);
        openSpaceBtn->setObjectName(QString::fromUtf8("openSpaceBtn"));
        openSpaceBtn->setGeometry(QRect(430, 190, 91, 191));
        floorLeftBtn = new QPushButton(WBalcone);
        floorLeftBtn->setObjectName(QString::fromUtf8("floorLeftBtn"));
        floorLeftBtn->setGeometry(QRect(750, 210, 81, 281));
        scafRight1Btn = new QPushButton(WBalcone);
        scafRight1Btn->setObjectName(QString::fromUtf8("scafRight1Btn"));
        scafRight1Btn->setGeometry(QRect(850, 210, 141, 71));
        scafLeft1Btn = new QPushButton(WBalcone);
        scafLeft1Btn->setObjectName(QString::fromUtf8("scafLeft1Btn"));
        scafLeft1Btn->setGeometry(QRect(670, 210, 81, 71));
        scafLeft2Btn = new QPushButton(WBalcone);
        scafLeft2Btn->setObjectName(QString::fromUtf8("scafLeft2Btn"));
        scafLeft2Btn->setGeometry(QRect(670, 280, 81, 71));
        scafLeft3Btn = new QPushButton(WBalcone);
        scafLeft3Btn->setObjectName(QString::fromUtf8("scafLeft3Btn"));
        scafLeft3Btn->setGeometry(QRect(670, 350, 80, 71));
        scafLeft4Btn = new QPushButton(WBalcone);
        scafLeft4Btn->setObjectName(QString::fromUtf8("scafLeft4Btn"));
        scafLeft4Btn->setGeometry(QRect(670, 420, 80, 71));
        scafRight2Btn = new QPushButton(WBalcone);
        scafRight2Btn->setObjectName(QString::fromUtf8("scafRight2Btn"));
        scafRight2Btn->setGeometry(QRect(850, 280, 141, 71));
        scafRight3Btn = new QPushButton(WBalcone);
        scafRight3Btn->setObjectName(QString::fromUtf8("scafRight3Btn"));
        scafRight3Btn->setGeometry(QRect(850, 350, 141, 71));
        scafRight4Btn = new QPushButton(WBalcone);
        scafRight4Btn->setObjectName(QString::fromUtf8("scafRight4Btn"));
        scafRight4Btn->setGeometry(QRect(850, 420, 141, 71));
        allObjsBtn = new QPushButton(WBalcone);
        allObjsBtn->setObjectName(QString::fromUtf8("allObjsBtn"));
        allObjsBtn->setGeometry(QRect(60, 40, 80, 24));

        retranslateUi(WBalcone);

        QMetaObject::connectSlotsByName(WBalcone);
    } // setupUi

    void retranslateUi(QWidget *WBalcone)
    {
        WBalcone->setWindowTitle(QCoreApplication::translate("WBalcone", "Form", nullptr));
        cameraBtn->setText(QCoreApplication::translate("WBalcone", "Camera", nullptr));
        cassapancaBtn->setText(QCoreApplication::translate("WBalcone", "Cassapanca", nullptr));
        openSpaceBtn->setText(QCoreApplication::translate("WBalcone", "OpenSpace", nullptr));
        floorLeftBtn->setText(QCoreApplication::translate("WBalcone", "FloorLeft", nullptr));
        scafRight1Btn->setText(QCoreApplication::translate("WBalcone", "ScafRight1", nullptr));
        scafLeft1Btn->setText(QCoreApplication::translate("WBalcone", "ScafLeft1", nullptr));
        scafLeft2Btn->setText(QCoreApplication::translate("WBalcone", "ScafLeft2", nullptr));
        scafLeft3Btn->setText(QCoreApplication::translate("WBalcone", "ScafLeft3", nullptr));
        scafLeft4Btn->setText(QCoreApplication::translate("WBalcone", "ScafLeft4", nullptr));
        scafRight2Btn->setText(QCoreApplication::translate("WBalcone", "ScafRight2", nullptr));
        scafRight3Btn->setText(QCoreApplication::translate("WBalcone", "ScafRight3", nullptr));
        scafRight4Btn->setText(QCoreApplication::translate("WBalcone", "ScafRight4", nullptr));
        allObjsBtn->setText(QCoreApplication::translate("WBalcone", "All Objects", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WBalcone: public Ui_WBalcone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBALCONE_H
