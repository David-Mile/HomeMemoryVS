#include "warmadiettolav.h"
#include "ui_warmadiettolav.h"

WArmadiettoLav::WArmadiettoLav(Global *global, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WArmadiettoLav)
{
    ui->setupUi(this);

    g = global;

    m_positionBtnList = new QList<QPushButton*>;
    m_positionBtnList->push_back(ui->allObjsBtn);
    m_positionBtnList->push_back(ui->antaAryBtn);
    m_positionBtnList->push_back(ui->antaDaviBtn);
    m_positionBtnList->push_back(ui->scafLavBtn);

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
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->allObjsBtn);
    emit positionSignal(0,7);
}
void WArmadiettoLav::antaArySlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->antaAryBtn);
    emit positionSignal(48,7);
}
void WArmadiettoLav::antaDaviSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->antaDaviBtn);
    emit positionSignal(49,7);
}
void WArmadiettoLav::scafLavSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafLavBtn);
    emit positionSignal(50,7);
}
