#include "wbalcone.h"
#include "ui_wbalcone.h"

WBalcone::WBalcone(Global *global, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WBalcone)
{
    ui->setupUi(this);

    g = global;

    m_positionBtnList = new QList<QPushButton*>;
    m_positionBtnList->push_back(ui->allObjsBtn);
    m_positionBtnList->push_back(ui->cassapancaBtn);
    m_positionBtnList->push_back(ui->scafLeft1Btn);
    m_positionBtnList->push_back(ui->scafLeft2Btn);
    m_positionBtnList->push_back(ui->scafLeft3Btn);
    m_positionBtnList->push_back(ui->scafLeft4Btn);
    m_positionBtnList->push_back(ui->floorLeftBtn);
    m_positionBtnList->push_back(ui->scafRight1Btn);
    m_positionBtnList->push_back(ui->scafRight2Btn);
    m_positionBtnList->push_back(ui->scafRight3Btn);
    m_positionBtnList->push_back(ui->scafRight4Btn);


    connect(ui->cameraBtn,SIGNAL(released()),this,SIGNAL(cameraSignal()));
    connect(ui->openSpaceBtn,SIGNAL(released()),this,SIGNAL(openSpaceSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->cassapancaBtn,SIGNAL(released()),this,SLOT(cassapancaSlot()));
    connect(ui->scafLeft1Btn,SIGNAL(released()),this,SLOT(scafLeft1Slot()));
    connect(ui->scafLeft2Btn,SIGNAL(released()),this,SLOT(scafLeft2Slot()));
    connect(ui->scafLeft3Btn,SIGNAL(released()),this,SLOT(scafLeft3Slot()));
    connect(ui->scafLeft4Btn,SIGNAL(released()),this,SLOT(scafLeft4Slot()));
    connect(ui->floorLeftBtn,SIGNAL(released()),this,SLOT(floorLeftSlot()));
    connect(ui->scafRight1Btn,SIGNAL(released()),this,SLOT(scafRight1Slot()));
    connect(ui->scafRight2Btn,SIGNAL(released()),this,SLOT(scafRight2Slot()));
    connect(ui->scafRight3Btn,SIGNAL(released()),this,SLOT(scafRight3Slot()));
    connect(ui->scafRight4Btn,SIGNAL(released()),this,SLOT(scafRight4Slot()));
}

WBalcone::~WBalcone()
{
    delete ui;
}

void WBalcone::allObjsEmitter()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->allObjsBtn);
    emit positionSignal(0,8);
}
void WBalcone::cassapancaSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassapancaBtn);
    emit positionSignal(51,8);
}
void WBalcone::scafLeft1Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafLeft1Btn);
    emit positionSignal(52,8);
}
void WBalcone::scafLeft2Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafLeft2Btn);
    emit positionSignal(53,8);
}
void WBalcone::scafLeft3Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafLeft3Btn);
    emit positionSignal(54,8);
}
void WBalcone::scafLeft4Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafLeft4Btn);
    emit positionSignal(55,8);
}
void WBalcone::floorLeftSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->floorLeftBtn);
    emit positionSignal(56,8);
}
void WBalcone::scafRight1Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafRight1Btn);
    emit positionSignal(57,8);
}
void WBalcone::scafRight2Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafRight2Btn);
    emit positionSignal(58,8);
}
void WBalcone::scafRight3Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafRight3Btn);
    emit positionSignal(59,8);
}
void WBalcone::scafRight4Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafRight4Btn);
    emit positionSignal(60,8);
}
