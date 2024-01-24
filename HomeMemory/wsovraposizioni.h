#ifndef WSOVRAPOSIZIONI_H
#define WSOVRAPOSIZIONI_H

#include "global.h"
#include "wlibuni.h"
#include "wsalotto.h"
#include "wcucina.h"
#include "wscarpiera.h"
#include "wobjmanager.h"
#include "wripostiglio.h"
#include "warmadiobagno.h"
#include "warmadiettolav.h"
#include "wbalcone.h"
#include "warmadiocassettiera.h"
#include "wscrivaniacomodino.h"

#include <QMainWindow>
#include <QStackedLayout>
#include <QHBoxLayout>
#include <QScrollArea>
#include <QTableWidget>
#include <QHeaderView>
#include <QSizePolicy>
#include <QWidgetItem>


class WSovraPosizioni : public QWidget
{
    Q_OBJECT
public:
    explicit WSovraPosizioni(Global *global, QWidget *parent = nullptr);
    WLibUni *libuni;
    WSalotto *salotto;
    WCucina *cucina;
    WScarpiera *scarpiera;
    WRipostiglio *ripostiglio;
    WObjManager *objmanager;
    WArmadioBagno *armadioBagno;
    WArmadiettoLav *armadiettoLav;
    WBalcone *balcone;
    WArmadioCassettiera *armadioCassettiera;
    WScrivaniaComodino *scrivaniaComodino;

public slots:
    void setLibUni();
    void setSalotto();
    void setCucina();
    void setScarpiera();
    void setRipostiglio();
    void setArmadioBagno();
    void setArmadiettoLav();
    void setBalcone();
    void setArmadioCassettiera();
    void setScrivaniaComodino();

private:
    Global* g;
    QHBoxLayout *horLayout;
    QTableWidget *table;
    QStackedLayout *stack;
    QScrollArea *scrollLibUni;
    QScrollArea *scrollSalotto;
    QScrollArea *scrollCucina;
    QScrollArea *scrollScarpiera;
    QScrollArea *scrollRipostiglio;
    QScrollArea *scrollArmadioBagno;
    QScrollArea *scrollArmadiettoLav;
    QScrollArea *scrollBalcone;
    QScrollArea *scrollArmadioCassettiera;
    QScrollArea *scrollScrivaniaComodino;

};

#endif // WSOVRAPOSIZIONI_H
