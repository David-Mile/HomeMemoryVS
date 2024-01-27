#include "warmadiocassettiera.h"
#include "ui_warmadiocassettiera.h"

WArmadioCassettiera::WArmadioCassettiera(Global *global, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WArmadioCassettiera)
{
    ui->setupUi(this);

    g = global;

    m_positionBtnList = new QList<QPushButton*>;
    m_positionBtnList->push_back(ui->allObjsBtn);
    m_positionBtnList->push_back(ui->scafLeft1Btn);
    m_positionBtnList->push_back(ui->scafLeft2Btn);
    m_positionBtnList->push_back(ui->scafLeft3Btn);
    m_positionBtnList->push_back(ui->appendiLeftBtn);
    m_positionBtnList->push_back(ui->floorAppendiLeftBtn);
    m_positionBtnList->push_back(ui->appendiRightBtn);
    m_positionBtnList->push_back(ui->floorAppendiRightBtn);
    m_positionBtnList->push_back(ui->scafRight1Btn);
    m_positionBtnList->push_back(ui->scafRight2Btn);
    m_positionBtnList->push_back(ui->scafRight3Btn);
    m_positionBtnList->push_back(ui->cassetto1Btn);
    m_positionBtnList->push_back(ui->cassetto2Btn);
    m_positionBtnList->push_back(ui->cassetto3Btn);
    m_positionBtnList->push_back(ui->cassettoLeftHBtn);
    m_positionBtnList->push_back(ui->cassettoLeftLBtn);
    m_positionBtnList->push_back(ui->cassettoRightHBtn);
    m_positionBtnList->push_back(ui->cassettoRightLBtn);

    connect(ui->backBtn,SIGNAL(released()),this,SIGNAL(backSignal()));
    connect(ui->allObjsBtn,SIGNAL(released()),this,SLOT(allObjsEmitter()));
    connect(ui->scafLeft1Btn,SIGNAL(released()),this,SLOT(scafLeft1Slot()));
    connect(ui->scafLeft2Btn,SIGNAL(released()),this,SLOT(scafLeft2Slot()));
    connect(ui->scafLeft3Btn,SIGNAL(released()),this,SLOT(scafLeft3Slot()));
    connect(ui->appendiLeftBtn,SIGNAL(released()),this,SLOT(appendiLeftSlot()));
    connect(ui->floorAppendiLeftBtn,SIGNAL(released()),this,SLOT(floorAppendiLeftSlot()));
    connect(ui->appendiRightBtn,SIGNAL(released()),this,SLOT(appendiRightSlot()));
    connect(ui->floorAppendiRightBtn,SIGNAL(released()),this,SLOT(floorAppendiRightSlot()));
    connect(ui->scafRight1Btn,SIGNAL(released()),this,SLOT(scafRight1Slot()));
    connect(ui->scafRight2Btn,SIGNAL(released()),this,SLOT(scafRight2Slot()));
    connect(ui->scafRight3Btn,SIGNAL(released()),this,SLOT(scafRight3Slot()));
    connect(ui->cassetto1Btn,SIGNAL(released()),this,SLOT(cassetto1Slot()));
    connect(ui->cassetto2Btn,SIGNAL(released()),this,SLOT(cassetto2Slot()));
    connect(ui->cassetto3Btn,SIGNAL(released()),this,SLOT(cassetto3Slot()));
    connect(ui->cassettoLeftHBtn,SIGNAL(released()),this,SLOT(cassettoLeftHSlot()));
    connect(ui->cassettoLeftLBtn,SIGNAL(released()),this,SLOT(cassettoLeftLSlot()));
    connect(ui->cassettoRightHBtn,SIGNAL(released()),this,SLOT(cassettoRightHSlot()));
    connect(ui->cassettoRightLBtn,SIGNAL(released()),this,SLOT(cassettoRightLSlot()));

}

WArmadioCassettiera::~WArmadioCassettiera()
{
    delete ui;
}

void WArmadioCassettiera::allObjsEmitter()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->allObjsBtn);
    emit positionSignal(0,9);
}

void WArmadioCassettiera::scafLeft1Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafLeft1Btn);
    emit positionSignal(61,9);
}
void WArmadioCassettiera::scafLeft2Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafLeft2Btn);
    emit positionSignal(62,9);
}
void WArmadioCassettiera::scafLeft3Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafLeft3Btn);
    emit positionSignal(63,9);
}
void WArmadioCassettiera::appendiLeftSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->appendiLeftBtn);
    emit positionSignal(64,9);
}
void WArmadioCassettiera::floorAppendiLeftSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->floorAppendiLeftBtn);
    emit positionSignal(65,9);
}
void WArmadioCassettiera::appendiRightSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->appendiRightBtn);
    emit positionSignal(66,9);
}
void WArmadioCassettiera::floorAppendiRightSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->floorAppendiRightBtn);
    emit positionSignal(67,9);
}
void WArmadioCassettiera::scafRight1Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafRight1Btn);
    emit positionSignal(68,9);
}
void WArmadioCassettiera::scafRight2Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafRight2Btn);
    emit positionSignal(69,9);
}
void WArmadioCassettiera::scafRight3Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->scafRight3Btn);
    emit positionSignal(70,9);
}
void WArmadioCassettiera::cassetto1Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassetto1Btn);
    emit positionSignal(71,9);
}
void WArmadioCassettiera::cassetto2Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassetto2Btn);
    emit positionSignal(72,9);
}
void WArmadioCassettiera::cassetto3Slot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassetto3Btn);
    emit positionSignal(73,9);
}
void WArmadioCassettiera::cassettoLeftHSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassettoLeftHBtn);
    emit positionSignal(74,9);
}
void WArmadioCassettiera::cassettoLeftLSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassettoLeftLBtn);
    emit positionSignal(75,9);
}
void WArmadioCassettiera::cassettoRightHSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassettoRightHBtn);
    emit positionSignal(76,9);
}
void WArmadioCassettiera::cassettoRightLSlot()
{
    g->allButtonsActivator(m_positionBtnList);
    g->btnDeactivator(ui->cassettoRightLBtn);
    emit positionSignal(77,9);
}
