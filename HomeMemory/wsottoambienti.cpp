#include "wsottoambienti.h"

WSottoAmbienti::WSottoAmbienti(QWidget *parent)
    : QWidget{parent}
{
    stack = new QStackedLayout(this);
    openspace = new WOpenSpace(this);
    scrollOpenSpace = new QScrollArea(this);
    scrollOpenSpace->setWidget(openspace);
    anticamera = new WAnticamera(this);
    scrollAnticamera = new QScrollArea(this);
    scrollAnticamera->setWidget(anticamera);
    bagno = new WBagno(this);
    scrollBagno = new QScrollArea(this);
    scrollBagno->setWidget(bagno);
    camera = new WCamera(this);
    ScrollCamera = new QScrollArea(this);
    ScrollCamera->setWidget(camera);
    stack->addWidget(scrollOpenSpace);
    stack->addWidget(scrollAnticamera);
    stack->addWidget(scrollBagno);
    stack->addWidget(ScrollCamera);
}

void WSottoAmbienti::setOpenSpace()
{
    stack->setCurrentWidget(scrollOpenSpace);
}

void WSottoAmbienti::setAnticamera()
{
    stack->setCurrentWidget(scrollAnticamera);
}

void WSottoAmbienti::setBagno()
{
    stack->setCurrentWidget(scrollBagno);
}

void WSottoAmbienti::setCamera()
{
    stack->setCurrentWidget(ScrollCamera);
}

