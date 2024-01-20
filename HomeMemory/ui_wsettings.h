/********************************************************************************
** Form generated from reading UI file 'wsettings.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WSETTINGS_H
#define UI_WSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WSettings
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioDark;
    QRadioButton *radioLight;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *colorBtn;
    QPushButton *matBtn;
    QPushButton *typeBtn;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_4;
    QPushButton *removeBtn;
    QComboBox *comboMain;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *addBtn;
    QPushButton *clearBtn;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WSettings)
    {
        if (WSettings->objectName().isEmpty())
            WSettings->setObjectName(QString::fromUtf8("WSettings"));
        WSettings->setEnabled(true);
        WSettings->resize(500, 214);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WSettings->sizePolicy().hasHeightForWidth());
        WSettings->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(WSettings);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioDark = new QRadioButton(WSettings);
        radioDark->setObjectName(QString::fromUtf8("radioDark"));
        radioDark->setChecked(false);

        horizontalLayout->addWidget(radioDark);

        radioLight = new QRadioButton(WSettings);
        radioLight->setObjectName(QString::fromUtf8("radioLight"));
        radioLight->setChecked(true);

        horizontalLayout->addWidget(radioLight);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        colorBtn = new QPushButton(WSettings);
        colorBtn->setObjectName(QString::fromUtf8("colorBtn"));

        horizontalLayout_9->addWidget(colorBtn);

        matBtn = new QPushButton(WSettings);
        matBtn->setObjectName(QString::fromUtf8("matBtn"));

        horizontalLayout_9->addWidget(matBtn);

        typeBtn = new QPushButton(WSettings);
        typeBtn->setObjectName(QString::fromUtf8("typeBtn"));

        horizontalLayout_9->addWidget(typeBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_9);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        removeBtn = new QPushButton(WSettings);
        removeBtn->setObjectName(QString::fromUtf8("removeBtn"));

        gridLayout_4->addWidget(removeBtn, 1, 2, 1, 1);

        comboMain = new QComboBox(WSettings);
        comboMain->setObjectName(QString::fromUtf8("comboMain"));

        gridLayout_4->addWidget(comboMain, 1, 1, 1, 1);

        lineEdit = new QLineEdit(WSettings);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_4->addWidget(lineEdit, 0, 1, 1, 1);

        label = new QLabel(WSettings);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(WSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(50, 0));

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        addBtn = new QPushButton(WSettings);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));

        gridLayout_4->addWidget(addBtn, 0, 2, 1, 1);

        clearBtn = new QPushButton(WSettings);
        clearBtn->setObjectName(QString::fromUtf8("clearBtn"));

        gridLayout_4->addWidget(clearBtn, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(WSettings);

        QMetaObject::connectSlotsByName(WSettings);
    } // setupUi

    void retranslateUi(QWidget *WSettings)
    {
        WSettings->setWindowTitle(QCoreApplication::translate("WSettings", "Form", nullptr));
        radioDark->setText(QCoreApplication::translate("WSettings", "Dark Theme", nullptr));
        radioLight->setText(QCoreApplication::translate("WSettings", "Light Theme", nullptr));
        colorBtn->setText(QCoreApplication::translate("WSettings", "Color", nullptr));
        matBtn->setText(QCoreApplication::translate("WSettings", "Material", nullptr));
        typeBtn->setText(QCoreApplication::translate("WSettings", "Type", nullptr));
        removeBtn->setText(QCoreApplication::translate("WSettings", "Remove", nullptr));
        label->setText(QCoreApplication::translate("WSettings", "New", nullptr));
        label_2->setText(QCoreApplication::translate("WSettings", "Actual", nullptr));
        addBtn->setText(QCoreApplication::translate("WSettings", "Add", nullptr));
        clearBtn->setText(QCoreApplication::translate("WSettings", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WSettings: public Ui_WSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WSETTINGS_H
