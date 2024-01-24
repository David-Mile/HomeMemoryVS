#include "wlibuni.h"
#include "ui_wlibuni.h"

WLibUni::WLibUni(Global *global, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WLibUni)
{
    ui->setupUi(this);

    g = global;

    m_positionBtnList = new QList<QPushButton*>;
    m_positionBtnList->push_back(ui->allObjsBtn);
    m_positionBtnList->push_back(ui->scaf1Btn);
    m_positionBtnList->push_back(ui->scaf2Btn);
    m_positionBtnList->push_back(ui->scaf3Btn);
    m_positionBtnList->push_back(ui->ant1Btn);
    m_positionBtnList->push_back(ui->ant2Btn);
    m_positionBtnList->push_back(ui->ant3Btn);

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->scaf1Btn,SIGNAL(released()),this,SLOT(scaf1Slot()));
    connect(ui->scaf2Btn,SIGNAL(released()),this,SLOT(scaf2Slot()));
    connect(ui->scaf3Btn,SIGNAL(released()),this,SLOT(scaf3Slot()));
    connect(ui->ant1Btn,SIGNAL(released()),this,SLOT(ant1Slot()));
    connect(ui->ant2Btn,SIGNAL(released()),this,SLOT(ant2Slot()));
    connect(ui->ant3Btn,SIGNAL(released()),this,SLOT(ant3Slot()));
}

WLibUni::~WLibUni()
{
    delete ui;
}

void WLibUni::allObjsEmitter()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->allObjsBtn);
    emit positionSignal(0,1);
}


void WLibUni::scaf1Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf1Btn);
    emit positionSignal(1,1);
}

void WLibUni::ant1Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->ant1Btn);
    emit positionSignal(2,1);
}

void WLibUni::scaf2Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf2Btn);
    emit positionSignal(3,1);
}

void WLibUni::scaf3Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf3Btn);
    emit positionSignal(4,1);
}

void WLibUni::ant2Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->ant2Btn);
    emit positionSignal(5,1);
}

void WLibUni::ant3Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->ant3Btn);
    emit positionSignal(6,1);
}