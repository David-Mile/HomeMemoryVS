#include "wsalotto.h"
#include "ui_wsalotto.h"

WSalotto::WSalotto(Global *global, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WSalotto)
{
    ui->setupUi(this);

    g = global;

    m_positionBtnList = new QList<QPushButton*>;
    m_positionBtnList->push_back(ui->allObjsBtn);
    m_positionBtnList->push_back(ui->scafLib1Btn);
    m_positionBtnList->push_back(ui->scafLib2Btn);
    m_positionBtnList->push_back(ui->scafLib3Btn);
    m_positionBtnList->push_back(ui->scafLBtn);
    m_positionBtnList->push_back(ui->scafHBtn);
    m_positionBtnList->push_back(ui->scafCuboLBtn);
    m_positionBtnList->push_back(ui->scafCuboHBtn);
    m_positionBtnList->push_back(ui->cassettoDxBtn);
    m_positionBtnList->push_back(ui->cassettoSxBtn);

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->scafLib1Btn,SIGNAL(released()),this,SLOT(scafLib1Slot()));
    connect(ui->scafLib2Btn,SIGNAL(released()),this,SLOT(scafLib2Slot()));
    connect(ui->scafLib3Btn,SIGNAL(released()),this,SLOT(scafLib3Slot()));
    connect(ui->scafLBtn,SIGNAL(released()),this,SLOT(scafLSlot()));
    connect(ui->scafHBtn,SIGNAL(released()),this,SLOT(scafHSlot()));
    connect(ui->scafCuboLBtn,SIGNAL(released()),this,SLOT(scafCuboLSlot()));
    connect(ui->scafCuboHBtn,SIGNAL(released()),this,SLOT(scafCuboHSlot()));
    connect(ui->cassettoDxBtn,SIGNAL(released()),this,SLOT(cassettoDxSlot()));
    connect(ui->cassettoSxBtn,SIGNAL(released()),this,SLOT(cassettoSxSlot()));
}

WSalotto::~WSalotto()
{
    delete ui;
}

void WSalotto::allObjsEmitter()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->allObjsBtn);
    emit positionSignal(0,2);
}

void WSalotto::scafLib1Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafLib1Btn);
    emit positionSignal(7,2);
}

void WSalotto::scafLib2Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafLib2Btn);
    emit positionSignal(8,2);
}

void WSalotto::scafLib3Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafLib3Btn);
    emit positionSignal(9,2);
}

void WSalotto::scafHSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafHBtn);
    emit positionSignal(10,2);
}

void WSalotto::scafLSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafLBtn);
    emit positionSignal(11,2);
}

void WSalotto::scafCuboLSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafCuboLBtn);
    emit positionSignal(12,2);
}

void WSalotto::scafCuboHSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafCuboHBtn);
    emit positionSignal(13,2);
}

void WSalotto::cassettoDxSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassettoDxBtn);
    emit positionSignal(14,2);
}

void WSalotto::cassettoSxSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassettoSxBtn);
    emit positionSignal(15,2);
}
