#include "wambienti.h"



WAmbienti::WAmbienti(QWidget *parent)
    : QWidget{parent}
{
    stack = new QStackedLayout(this);

    logo = new WLogo(this);
    scrollLogo = new QScrollArea(this);
    scrollLogo->setWidget(logo);
    stack->addWidget(scrollLogo);

    casa = new WCasa(this);
    stack->addWidget(casa);

    cantAmb = new WCantAmb(this);
    stack->addWidget(cantAmb);

    box = new WBox(this);
    scrollBox = new QScrollArea(this);
    scrollBox->setWidget(box);
    stack->addWidget(scrollBox);

    stack->setCurrentWidget(scrollLogo);

}

void WAmbienti::casaBtnSlot()
{
    stack->setCurrentWidget(casa);
}

void WAmbienti::cantBtnSlot()
{
    stack->setCurrentWidget(cantAmb);
}

void WAmbienti::boxBtnSlot()
{
    stack->setCurrentWidget(scrollBox);
}
