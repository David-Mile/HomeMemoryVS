#include "wscarpiera.h"
#include "ui_wscarpiera.h"

WScarpiera::WScarpiera(Global *global, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WScarpiera)
{
    ui->setupUi(this);

    g = global;

    m_positionBtnList = new QList<QPushButton*>;
    m_positionBtnList->push_back(ui->allObjsBtn);
    m_positionBtnList->push_back(ui->scafLBtn);
    m_positionBtnList->push_back(ui->scafMBtn);
    m_positionBtnList->push_back(ui->scafHBtn);
    m_positionBtnList->push_back(ui->antaLBtn);
    m_positionBtnList->push_back(ui->antaHBtn);


    connect(ui->backBtrn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->scafLBtn,SIGNAL(released()),this,SLOT(scafLSlot()));
    connect(ui->scafMBtn,SIGNAL(released()),this,SLOT(scafMSlot()));
    connect(ui->scafHBtn,SIGNAL(released()),this,SLOT(scafHSlot()));
    connect(ui->antaLBtn,SIGNAL(released()),this,SLOT(antaLSlot()));
    connect(ui->antaHBtn,SIGNAL(released()),this,SLOT(antaHSlot()));
}

WScarpiera::~WScarpiera()
{
    delete ui;
}

void WScarpiera::allObjsEmitter()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->allObjsBtn);
    emit positionSignal(0,4);
}
void WScarpiera::scafLSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafLBtn);
    emit positionSignal(27,4);
}
void WScarpiera::scafMSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafMBtn);
    emit positionSignal(28,4);
}
void WScarpiera::scafHSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafHBtn);
    emit positionSignal(29,4);
}
void WScarpiera::antaLSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->antaLBtn);
    emit positionSignal(30,4);
}
void WScarpiera::antaHSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->antaHBtn);
    emit positionSignal(31,4);
}


