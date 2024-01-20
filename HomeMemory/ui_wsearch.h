/********************************************************************************
** Form generated from reading UI file 'wsearch.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WSEARCH_H
#define UI_WSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WSearch
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *addMatBtn;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *objLine;
    QPushButton *rmTypeBtn;
    QTableWidget *tableWidget;
    QPushButton *rmColorBtn;
    QPushButton *addColorBtn;
    QLabel *label_4;
    QPushButton *rmMatBtn;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QComboBox *typeCombo;
    QComboBox *colorCombo;
    QComboBox *matCombo;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *clearBtn;
    QPushButton *searchBtn;
    QLabel *label_5;
    QLabel *label_9;
    QPushButton *addTypeBtn;
    QLabel *label_6;
    QHBoxLayout *hLayColors;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *hLayTypes;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *hLayMats;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *WSearch)
    {
        if (WSearch->objectName().isEmpty())
            WSearch->setObjectName(QString::fromUtf8("WSearch"));
        WSearch->resize(975, 508);
        gridLayout_2 = new QGridLayout(WSearch);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        addMatBtn = new QPushButton(WSearch);
        addMatBtn->setObjectName(QString::fromUtf8("addMatBtn"));

        gridLayout->addWidget(addMatBtn, 5, 2, 1, 1);

        label = new QLabel(WSearch);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 9, 1);

        objLine = new QLineEdit(WSearch);
        objLine->setObjectName(QString::fromUtf8("objLine"));

        gridLayout->addWidget(objLine, 0, 1, 1, 1);

        rmTypeBtn = new QPushButton(WSearch);
        rmTypeBtn->setObjectName(QString::fromUtf8("rmTypeBtn"));

        gridLayout->addWidget(rmTypeBtn, 2, 2, 1, 1);

        tableWidget = new QTableWidget(WSearch);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 4, 9, 1);

        rmColorBtn = new QPushButton(WSearch);
        rmColorBtn->setObjectName(QString::fromUtf8("rmColorBtn"));

        gridLayout->addWidget(rmColorBtn, 4, 2, 1, 1);

        addColorBtn = new QPushButton(WSearch);
        addColorBtn->setObjectName(QString::fromUtf8("addColorBtn"));

        gridLayout->addWidget(addColorBtn, 3, 2, 1, 1);

        label_4 = new QLabel(WSearch);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        rmMatBtn = new QPushButton(WSearch);
        rmMatBtn->setObjectName(QString::fromUtf8("rmMatBtn"));

        gridLayout->addWidget(rmMatBtn, 6, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 1);

        label_2 = new QLabel(WSearch);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        typeCombo = new QComboBox(WSearch);
        typeCombo->setObjectName(QString::fromUtf8("typeCombo"));

        gridLayout->addWidget(typeCombo, 1, 1, 1, 1);

        colorCombo = new QComboBox(WSearch);
        colorCombo->setObjectName(QString::fromUtf8("colorCombo"));

        gridLayout->addWidget(colorCombo, 3, 1, 1, 1);

        matCombo = new QComboBox(WSearch);
        matCombo->setObjectName(QString::fromUtf8("matCombo"));

        gridLayout->addWidget(matCombo, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 2);

        label_3 = new QLabel(WSearch);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        clearBtn = new QPushButton(WSearch);
        clearBtn->setObjectName(QString::fromUtf8("clearBtn"));

        horizontalLayout_2->addWidget(clearBtn);

        searchBtn = new QPushButton(WSearch);
        searchBtn->setObjectName(QString::fromUtf8("searchBtn"));
        searchBtn->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(searchBtn);


        gridLayout->addLayout(horizontalLayout_2, 7, 1, 1, 1);

        label_5 = new QLabel(WSearch);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_9 = new QLabel(WSearch);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        addTypeBtn = new QPushButton(WSearch);
        addTypeBtn->setObjectName(QString::fromUtf8("addTypeBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addTypeBtn->sizePolicy().hasHeightForWidth());
        addTypeBtn->setSizePolicy(sizePolicy);

        gridLayout->addWidget(addTypeBtn, 1, 2, 1, 1);

        label_6 = new QLabel(WSearch);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        hLayColors = new QHBoxLayout();
        hLayColors->setObjectName(QString::fromUtf8("hLayColors"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayColors->addItem(horizontalSpacer_4);


        gridLayout->addLayout(hLayColors, 4, 1, 1, 1);

        hLayTypes = new QHBoxLayout();
        hLayTypes->setObjectName(QString::fromUtf8("hLayTypes"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayTypes->addItem(horizontalSpacer_6);


        gridLayout->addLayout(hLayTypes, 2, 1, 1, 1);

        hLayMats = new QHBoxLayout();
        hLayMats->setObjectName(QString::fromUtf8("hLayMats"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayMats->addItem(horizontalSpacer_5);


        gridLayout->addLayout(hLayMats, 6, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);


        retranslateUi(WSearch);

        QMetaObject::connectSlotsByName(WSearch);
    } // setupUi

    void retranslateUi(QWidget *WSearch)
    {
        WSearch->setWindowTitle(QCoreApplication::translate("WSearch", "Form", nullptr));
        addMatBtn->setText(QString());
        label->setText(QCoreApplication::translate("WSearch", "<b>Object:</b>", nullptr));
        rmTypeBtn->setText(QString());
        rmColorBtn->setText(QString());
        addColorBtn->setText(QString());
        label_4->setText(QCoreApplication::translate("WSearch", "<b>Selected Colors:</b>", nullptr));
        rmMatBtn->setText(QString());
        label_2->setText(QCoreApplication::translate("WSearch", "<b>Type:</b>", nullptr));
        label_3->setText(QCoreApplication::translate("WSearch", "<b>Color:</b>", nullptr));
        clearBtn->setText(QCoreApplication::translate("WSearch", "Clear", nullptr));
        searchBtn->setText(QCoreApplication::translate("WSearch", "Search", nullptr));
        label_5->setText(QCoreApplication::translate("WSearch", "<b>Material:</b>", nullptr));
        label_9->setText(QCoreApplication::translate("WSearch", "<b>Selected Types:</b>", nullptr));
        addTypeBtn->setText(QString());
        label_6->setText(QCoreApplication::translate("WSearch", "<b>Selected Materials:</b>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WSearch: public Ui_WSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WSEARCH_H
