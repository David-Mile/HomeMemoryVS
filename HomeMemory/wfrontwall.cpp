#include "wfrontwall.h"
#include "ui_wfrontwall.h"

WFrontWall::WFrontWall(Global *global, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WFrontWall)
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
    m_positionBtnList->push_back(ui->bottomBtn);
    m_positionBtnList->push_back(ui->floorBtn);

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->topBtn,SIGNAL(released()),this,SLOT(topSlot()));
    connect(ui->scaf1Btn,SIGNAL(released()),this,SLOT(scaf1Slot()));
    connect(ui->scaf2Btn,SIGNAL(released()),this,SLOT(scaf2Slot()));
    connect(ui->scaf3Btn,SIGNAL(released()),this,SLOT(scaf3Slot()));
    connect(ui->scaf4Btn,SIGNAL(released()),this,SLOT(scaf4Slot()));
    connect(ui->bottomBtn,SIGNAL(released()),this,SLOT(bottomSlot()));
    connect(ui->floorBtn,SIGNAL(released()),this,SLOT(floorSlot()));
}

WFrontWall::~WFrontWall()
{
    delete ui;
}

void WFrontWall::allObjsEmitter()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->allObjsBtn);
    emit positionSignal(0,12);
}
void WFrontWall::topSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->topBtn);
    emit positionSignal(99,12);
}
void WFrontWall::scaf1Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf1Btn);
    emit positionSignal(100,12);
}
void WFrontWall::scaf2Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf2Btn);
    emit positionSignal(101,12);
}
void WFrontWall::scaf3Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf3Btn);
    emit positionSignal(102,12);
}
void WFrontWall::scaf4Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf4Btn);
    emit positionSignal(103,12);
}
void WFrontWall::bottomSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->bottomBtn);
    emit positionSignal(104,12);
}
void WFrontWall::floorSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->floorBtn);
    emit positionSignal(105,12);
}
