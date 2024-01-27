#include "wripostiglio.h"
#include "ui_wripostiglio.h"

WRipostiglio::WRipostiglio(Global *global, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WRipostiglio)
{
    ui->setupUi(this);

    g = global;

    m_positionBtnList = new QList<QPushButton*>;
    m_positionBtnList->push_back(ui->allObjsBtn);
    m_positionBtnList->push_back(ui->scaf1Btn);
    m_positionBtnList->push_back(ui->scaf2Btn);
    m_positionBtnList->push_back(ui->scaf3Btn);
    m_positionBtnList->push_back(ui->scaf4Btn);
    m_positionBtnList->push_back(ui->scaf5Btn);
    m_positionBtnList->push_back(ui->scaf6Btn);
    m_positionBtnList->push_back(ui->scaf7Btn);
    m_positionBtnList->push_back(ui->scaf8Btn);
    m_positionBtnList->push_back(ui->scaf9Btn);
    m_positionBtnList->push_back(ui->floorBtn);

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->scaf1Btn,SIGNAL(released()),this,SLOT(scaf1Slot()));
    connect(ui->scaf2Btn,SIGNAL(released()),this,SLOT(scaf2Slot()));
    connect(ui->scaf3Btn,SIGNAL(released()),this,SLOT(scaf3Slot()));
    connect(ui->scaf4Btn,SIGNAL(released()),this,SLOT(scaf4Slot()));
    connect(ui->scaf5Btn,SIGNAL(released()),this,SLOT(scaf5Slot()));
    connect(ui->scaf6Btn,SIGNAL(released()),this,SLOT(scaf6Slot()));
    connect(ui->scaf7Btn,SIGNAL(released()),this,SLOT(scaf7Slot()));
    connect(ui->scaf8Btn,SIGNAL(released()),this,SLOT(scaf8Slot()));
    connect(ui->scaf9Btn,SIGNAL(released()),this,SLOT(scaf9Slot()));
    connect(ui->floorBtn,SIGNAL(released()),this,SLOT(floorSlot()));
}

WRipostiglio::~WRipostiglio()
{
    delete ui;
}

void WRipostiglio::allObjsEmitter()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->allObjsBtn);
    emit positionSignal(0,5);
}
void WRipostiglio::scaf1Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf1Btn);
    emit positionSignal(32,5);
}
void WRipostiglio::scaf2Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf2Btn);
    emit positionSignal(33,5);
}
void WRipostiglio::scaf3Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf3Btn);
    emit positionSignal(34,5);
}
void WRipostiglio::scaf4Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf4Btn);
    emit positionSignal(35,5);
}
void WRipostiglio::scaf5Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf5Btn);
    emit positionSignal(36,5);
}
void WRipostiglio::scaf6Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf6Btn);
    emit positionSignal(37,5);
}
void WRipostiglio::scaf7Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf7Btn);
    emit positionSignal(38,5);
}
void WRipostiglio::scaf8Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf8Btn);
    emit positionSignal(39,5);
}
void WRipostiglio::scaf9Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf9Btn);
    emit positionSignal(40,5);
}
void WRipostiglio::floorSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->floorBtn);
    emit positionSignal(41,5);
}
