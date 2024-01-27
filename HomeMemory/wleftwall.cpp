#include "wleftwall.h"
#include "ui_wleftwall.h"

WLeftWall::WLeftWall(Global *global, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WLeftWall)
{
    ui->setupUi(this);

    g = global;

    m_positionBtnList = new QList<QPushButton*>;
    m_positionBtnList->push_back(ui->allObjsBtn);
    m_positionBtnList->push_back(ui->topBtn);
    m_positionBtnList->push_back(ui->scaf1Btn);
    m_positionBtnList->push_back(ui->scaf2Btn);
    m_positionBtnList->push_back(ui->scaf3Btn);
    m_positionBtnList->push_back(ui->scaf4Btn);
    m_positionBtnList->push_back(ui->scaf5Btn);
    m_positionBtnList->push_back(ui->scaf6Btn);
    m_positionBtnList->push_back(ui->scaf7Btn);
    m_positionBtnList->push_back(ui->scaf8Btn);
    m_positionBtnList->push_back(ui->floorBtn);

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->topBtn,SIGNAL(released()),this,SLOT(topSlot()));
    connect(ui->scaf1Btn,SIGNAL(released()),this,SLOT(scaf1Slot()));
    connect(ui->scaf2Btn,SIGNAL(released()),this,SLOT(scaf2Slot()));
    connect(ui->scaf3Btn,SIGNAL(released()),this,SLOT(scaf3Slot()));
    connect(ui->scaf4Btn,SIGNAL(released()),this,SLOT(scaf4Slot()));
    connect(ui->scaf5Btn,SIGNAL(released()),this,SLOT(scaf5Slot()));
    connect(ui->scaf6Btn,SIGNAL(released()),this,SLOT(scaf6Slot()));
    connect(ui->scaf7Btn,SIGNAL(released()),this,SLOT(scaf7Slot()));
    connect(ui->scaf8Btn,SIGNAL(released()),this,SLOT(scaf8Slot()));
    connect(ui->floorBtn,SIGNAL(released()),this,SLOT(floorSlot()));
}

WLeftWall::~WLeftWall()
{
    delete ui;
}

void WLeftWall::allObjsEmitter()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->allObjsBtn);
    emit positionSignal(0,11);
}
void WLeftWall::topSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->topBtn);
    emit positionSignal(89,11);
}
void WLeftWall::scaf1Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf1Btn);
    emit positionSignal(90,11);
}
void WLeftWall::scaf2Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf2Btn);
    emit positionSignal(91,11);
}
void WLeftWall::scaf3Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf3Btn);
    emit positionSignal(92,11);
}
void WLeftWall::scaf4Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf4Btn);
    emit positionSignal(93,11);
}
void WLeftWall::scaf5Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf5Btn);
    emit positionSignal(94,11);
}
void WLeftWall::scaf6Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf6Btn);
    emit positionSignal(95,11);
}
void WLeftWall::scaf7Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf7Btn);
    emit positionSignal(96,11);
}
void WLeftWall::scaf8Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf8Btn);
    emit positionSignal(97,11);
}
void WLeftWall::floorSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->floorBtn);
    emit positionSignal(98,11);
}
