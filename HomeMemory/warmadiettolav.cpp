#include "warmadiettolav.h"
#include "ui_warmadiettolav.h"

WArmadiettoLav::WArmadiettoLav(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WArmadiettoLav)
{
    ui->setupUi(this);

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->antaAryBtn,SIGNAL(released()),this,SLOT(antaArySlot()));
    connect(ui->antaDaviBtn,SIGNAL(released()),this,SLOT(antaDaviSlot()));
    connect(ui->scafLavBtn,SIGNAL(released()),this,SLOT(scafLavSlot()));

}

WArmadiettoLav::~WArmadiettoLav()
{
    delete ui;
}

void WArmadiettoLav::allObjsEmitter()
{
    emit positionSignal(0,7);
}
void WArmadiettoLav::antaArySlot()
{
    emit positionSignal(48,7);
}
void WArmadiettoLav::antaDaviSlot()
{
    emit positionSignal(49,7);
}
void WArmadiettoLav::scafLavSlot()
{
    emit positionSignal(50,7);
}
