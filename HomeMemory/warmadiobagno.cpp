#include "warmadiobagno.h"
#include "ui_warmadiobagno.h"

WArmadioBagno::WArmadioBagno(Global *global, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WArmadioBagno)
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

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->scaf1Btn,SIGNAL(released()),this,SLOT(scaf1Slot()));
    connect(ui->scaf2Btn,SIGNAL(released()),this,SLOT(scaf2Slot()));
    connect(ui->scaf3Btn,SIGNAL(released()),this,SLOT(scaf3Slot()));
    connect(ui->scaf4Btn,SIGNAL(released()),this,SLOT(scaf4Slot()));
    connect(ui->scaf5Btn,SIGNAL(released()),this,SLOT(scaf5Slot()));
    connect(ui->scaf6Btn,SIGNAL(released()),this,SLOT(scaf6Slot()));
}

WArmadioBagno::~WArmadioBagno()
{
    delete ui;
}

void WArmadioBagno::allObjsEmitter()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->allObjsBtn);
    emit positionSignal(0,6);
}
void WArmadioBagno::scaf1Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf1Btn);
    emit positionSignal(42,6);
}
void WArmadioBagno::scaf2Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf2Btn);
    emit positionSignal(43,6);
}
void WArmadioBagno::scaf3Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf3Btn);
    emit positionSignal(44,6);
}
void WArmadioBagno::scaf4Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf4Btn);
    emit positionSignal(45,6);
}
void WArmadioBagno::scaf5Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf5Btn);
    emit positionSignal(46,6);
}
void WArmadioBagno::scaf6Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scaf6Btn);
    emit positionSignal(47,6);
}
