#ifndef WCASA_H
#define WCASA_H

#include <QWidget>
#include <QStackedLayout>

#include "wsottoambienti.h"
#include "wsovraposizioni.h"

class WCasa : public QWidget
{
    Q_OBJECT
public:
    explicit WCasa(QWidget *parent = nullptr);
    WSottoAmbienti *sottoambienti;
    WSovraPosizioni *sovraposizioni;
    QStackedLayout *stack;

public slots:
    void setSovraposizioni();
    void setSottoAmbienti();

};

#endif // WCASA_H
