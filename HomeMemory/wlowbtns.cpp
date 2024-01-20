#include "wlowbtns.h"

WLowBtns::WLowBtns(QWidget *parent)
    : QWidget{parent}
{
    //Size Policy hide the risizing cursor when inside a DockWidget
    setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    //Buttons for main ambients access, settings and search
    casaBtn = new QPushButton(this);
    boxBtn = new QPushButton(this);
    cantBtn = new QPushButton(this);
    settingsBtn = new QPushButton(this);
    searchBtn = new QPushButton(this);
    hbox = new QHBoxLayout(this);

    // Impose button size (this dimension could be loaded from a config file)
    const QSize sizeBtn = QSize(140,24);
    const QSize sizeSet = QSize(24,24);

    casaBtn->setText("Casa");
    casaBtn->setFixedSize(sizeBtn);
    boxBtn->setText("Box");
    boxBtn->setFixedSize(sizeBtn);
    cantBtn->setText("Cantina");
    cantBtn->setFixedSize(sizeBtn);
    settingsBtn->setIcon(QIcon(qApp->applicationDirPath() + "/img/settingsBtn-icon.jpg")); //"D:/documenti/GitHub/Repository/HomeMemory/img/settingsBtn-icon.jpg" //"C:/Users/miglio/OneDrive - TXT e-solutions S.p.A/Documents/GitHub/Repository/HomeMemory/img/settingsBtn-icon.jpg"
    settingsBtn->setFixedSize(sizeSet);
    searchBtn->setText("Search");
    searchBtn->setFixedSize(sizeBtn);
    hbox->addWidget(casaBtn);
    hbox->addWidget(boxBtn);
    hbox->addWidget(cantBtn);
    hbox->addStretch();
    hbox->addWidget(settingsBtn, Qt::AlignRight);
    hbox->addWidget(searchBtn, Qt::AlignRight);

}
