/********************************************************************************
** Form generated from reading UI file 'wsalotto.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WSALOTTO_H
#define UI_WSALOTTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WSalotto
{
public:
    QPushButton *scafCuboLBtn;
    QPushButton *scafCuboHBtn;
    QPushButton *scafLBtn;
    QPushButton *scafHBtn;
    QPushButton *scafLib3Btn;
    QPushButton *scafLib2Btn;
    QPushButton *scafLib1Btn;
    QPushButton *cassettoSxBtn;
    QPushButton *cassettoDxBtn;
    QPushButton *backBtn;
    QPushButton *allObjsBtn;

    void setupUi(QWidget *WSalotto)
    {
        if (WSalotto->objectName().isEmpty())
            WSalotto->setObjectName(QString::fromUtf8("WSalotto"));
        WSalotto->resize(799, 598);
        scafCuboLBtn = new QPushButton(WSalotto);
        scafCuboLBtn->setObjectName(QString::fromUtf8("scafCuboLBtn"));
        scafCuboLBtn->setGeometry(QRect(79, 153, 91, 71));
        scafCuboHBtn = new QPushButton(WSalotto);
        scafCuboHBtn->setObjectName(QString::fromUtf8("scafCuboHBtn"));
        scafCuboHBtn->setGeometry(QRect(169, 83, 81, 71));
        scafLBtn = new QPushButton(WSalotto);
        scafLBtn->setObjectName(QString::fromUtf8("scafLBtn"));
        scafLBtn->setGeometry(QRect(170, 204, 501, 20));
        scafHBtn = new QPushButton(WSalotto);
        scafHBtn->setObjectName(QString::fromUtf8("scafHBtn"));
        scafHBtn->setGeometry(QRect(330, 134, 341, 20));
        scafLib3Btn = new QPushButton(WSalotto);
        scafLib3Btn->setObjectName(QString::fromUtf8("scafLib3Btn"));
        scafLib3Btn->setGeometry(QRect(670, 80, 71, 71));
        scafLib2Btn = new QPushButton(WSalotto);
        scafLib2Btn->setObjectName(QString::fromUtf8("scafLib2Btn"));
        scafLib2Btn->setGeometry(QRect(670, 150, 71, 71));
        scafLib1Btn = new QPushButton(WSalotto);
        scafLib1Btn->setObjectName(QString::fromUtf8("scafLib1Btn"));
        scafLib1Btn->setGeometry(QRect(670, 220, 71, 71));
        cassettoSxBtn = new QPushButton(WSalotto);
        cassettoSxBtn->setObjectName(QString::fromUtf8("cassettoSxBtn"));
        cassettoSxBtn->setGeometry(QRect(90, 370, 261, 81));
        cassettoDxBtn = new QPushButton(WSalotto);
        cassettoDxBtn->setObjectName(QString::fromUtf8("cassettoDxBtn"));
        cassettoDxBtn->setGeometry(QRect(350, 370, 341, 81));
        backBtn = new QPushButton(WSalotto);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(20, 20, 111, 24));
        allObjsBtn = new QPushButton(WSalotto);
        allObjsBtn->setObjectName(QString::fromUtf8("allObjsBtn"));
        allObjsBtn->setGeometry(QRect(150, 20, 80, 24));

        retranslateUi(WSalotto);

        QMetaObject::connectSlotsByName(WSalotto);
    } // setupUi

    void retranslateUi(QWidget *WSalotto)
    {
        WSalotto->setWindowTitle(QCoreApplication::translate("WSalotto", "Form", nullptr));
        scafCuboLBtn->setText(QCoreApplication::translate("WSalotto", "scafCuboL", nullptr));
        scafCuboHBtn->setText(QCoreApplication::translate("WSalotto", "scafCuboH", nullptr));
        scafLBtn->setText(QCoreApplication::translate("WSalotto", "scafL", nullptr));
        scafHBtn->setText(QCoreApplication::translate("WSalotto", "scafH", nullptr));
        scafLib3Btn->setText(QCoreApplication::translate("WSalotto", "scafLib3", nullptr));
        scafLib2Btn->setText(QCoreApplication::translate("WSalotto", "scafLib2", nullptr));
        scafLib1Btn->setText(QCoreApplication::translate("WSalotto", "scafLib1", nullptr));
        cassettoSxBtn->setText(QCoreApplication::translate("WSalotto", "CassettoSx", nullptr));
        cassettoDxBtn->setText(QCoreApplication::translate("WSalotto", "CassettoDx", nullptr));
        backBtn->setText(QCoreApplication::translate("WSalotto", "Back to OpenSpae", nullptr));
        allObjsBtn->setText(QCoreApplication::translate("WSalotto", "All Objects", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WSalotto: public Ui_WSalotto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WSALOTTO_H
