#include "wsovraposizioni.h"



WSovraPosizioni::WSovraPosizioni(Global *global, QWidget *parent)
    : QWidget(parent)
{
    g = global;
    horLayout = new QHBoxLayout(this);
    stack = new QStackedLayout(this);
    libuni = new WLibUni(g);
    scrollLibUni = new QScrollArea(this);
    scrollLibUni->setWidget(libuni);
    salotto = new WSalotto(g);
    scrollSalotto = new QScrollArea(this);
    scrollSalotto->setWidget(salotto);
    cucina = new WCucina(g);
    scrollCucina = new QScrollArea(this);
    scrollCucina->setWidget(cucina);
    scarpiera = new WScarpiera(this);
    scrollScarpiera = new QScrollArea(this);
    scrollScarpiera->setWidget(scarpiera);
    ripostiglio = new WRipostiglio(this);
    scrollRipostiglio = new QScrollArea(this);
    scrollRipostiglio->setWidget(ripostiglio);
    armadioBagno = new WArmadioBagno(this);
    scrollArmadioBagno = new QScrollArea(this);
    scrollArmadioBagno->setWidget(armadioBagno);
    armadiettoLav = new WArmadiettoLav(this);
    scrollArmadiettoLav = new QScrollArea(this);
    scrollArmadiettoLav->setWidget(armadiettoLav);
    balcone = new WBalcone(this);
    scrollBalcone = new QScrollArea(this);
    scrollBalcone->setWidget(balcone);
    armadioCassettiera = new WArmadioCassettiera(this);
    scrollArmadioCassettiera = new QScrollArea(this);
    scrollArmadioCassettiera->setWidget(armadioCassettiera);
    scrivaniaComodino = new WScrivaniaComodino(this);
    scrollScrivaniaComodino = new QScrollArea(this);
    scrollScrivaniaComodino->setWidget(scrivaniaComodino);
    stack->addWidget(scrollLibUni);
    stack->addWidget(scrollSalotto);
    stack->addWidget(scrollCucina);
    stack->addWidget(scrollScarpiera);
    stack->addWidget(scrollRipostiglio);
    stack->addWidget(scrollArmadioBagno);
    stack->addWidget(scrollArmadiettoLav);
    stack->addWidget(scrollBalcone);
    stack->addWidget(scrollArmadioCassettiera);
    stack->addWidget(scrollScrivaniaComodino);
    horLayout->addLayout(stack);
    //Set margin to have sovraposizioni and objmanager at the same level
    horLayout->setContentsMargins(9,9,9,0);
}

void WSovraPosizioni::setLibUni()
{
    stack->setCurrentWidget(scrollLibUni);
    libuni->allObjsEmitter();
}

void WSovraPosizioni::setSalotto()
{
    stack->setCurrentWidget(scrollSalotto);
    salotto->allObjsEmitter();
}

void WSovraPosizioni::setCucina()
{
    stack->setCurrentWidget(scrollCucina);
    cucina->allObjsEmitter();
}

void WSovraPosizioni::setScarpiera()
{
    stack->setCurrentWidget(scrollScarpiera);
}

void WSovraPosizioni::setRipostiglio()
{
    stack->setCurrentWidget(scrollRipostiglio);
}

void WSovraPosizioni::setArmadioBagno()
{
    stack->setCurrentWidget(scrollArmadioBagno);
}

void WSovraPosizioni::setArmadiettoLav()
{
    stack->setCurrentWidget(scrollArmadiettoLav);
}

void WSovraPosizioni::setBalcone()
{
    stack->setCurrentWidget(scrollBalcone);
}

void WSovraPosizioni::setArmadioCassettiera()
{
    stack->setCurrentWidget(scrollArmadioCassettiera);
}

void WSovraPosizioni::setScrivaniaComodino()
{
    stack->setCurrentWidget(scrollScrivaniaComodino);
}
