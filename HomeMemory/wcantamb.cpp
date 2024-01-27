#include "wcantamb.h"

WCantAmb::WCantAmb(Global *global, QWidget *parent)
    : QWidget{parent}
{
    g = global;
    stack = new QStackedLayout(this);
    cantina = new WCantina(this);
    scrollCantina = new QScrollArea(this);
    scrollCantina->setWidget(cantina);
    stack->addWidget(scrollCantina);
    leftWall = new WLeftWall(g);
    scrollLeftWall = new QScrollArea(this);
    scrollLeftWall->setWidget(leftWall);
    stack->addWidget(scrollLeftWall);
    frontWall = new WFrontWall(g);
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
    leftWall->allObjsEmitter();
}

void WCantAmb::setFrontWall()
{
    stack->setCurrentWidget(scrollFrontWall);
    frontWall->allObjsEmitter();
}
