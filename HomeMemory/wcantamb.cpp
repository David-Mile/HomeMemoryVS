#include "wcantamb.h"

WCantAmb::WCantAmb(QWidget *parent)
    : QWidget{parent}
{
    stack = new QStackedLayout(this);
    cantina = new WCantina(this);
    scrollCantina = new QScrollArea(this);
    scrollCantina->setWidget(cantina);
    stack->addWidget(scrollCantina);
    leftWall = new WLeftWall(this);
    scrollLeftWall = new QScrollArea(this);
    scrollLeftWall->setWidget(leftWall);
    stack->addWidget(scrollLeftWall);
    frontWall = new WFrontWall(this);
    scrollFrontWall = new QScrollArea;
    scrollFrontWall->setWidget(frontWall);
    stack->addWidget(scrollFrontWall);

    resize(1900,967);

}

void WCantAmb::setCantina()
{
    stack->setCurrentWidget(scrollCantina);
}

void WCantAmb::setLeftWall()
{
    stack->setCurrentWidget(scrollLeftWall);
}

void WCantAmb::setFrontWall()
{
    stack->setCurrentWidget(scrollFrontWall);
}
