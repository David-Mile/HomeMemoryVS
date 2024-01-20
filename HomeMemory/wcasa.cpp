#include "wcasa.h"




WCasa::WCasa(QWidget *parent)
    : QWidget{parent}
{
    stack = new QStackedLayout(this);
    sottoambienti = new WSottoAmbienti(this);
    sovraposizioni = new WSovraPosizioni(this);
    stack->insertWidget(1,sottoambienti);
    stack->insertWidget(2,sovraposizioni);
    resize(1900,967);

}

void WCasa::setSovraposizioni()
{
    stack->setCurrentWidget(sovraposizioni);
}

void WCasa::setSottoAmbienti()
{
    stack->setCurrentWidget(sottoambienti);
}
