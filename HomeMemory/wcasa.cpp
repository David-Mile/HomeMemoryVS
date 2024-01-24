#include "wcasa.h"




WCasa::WCasa(Global *global, QWidget *parent)
    : QWidget{parent}
{
    g = global;
    stack = new QStackedLayout(this);
    sottoambienti = new WSottoAmbienti(this);
    sovraposizioni = new WSovraPosizioni(g, this);
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
