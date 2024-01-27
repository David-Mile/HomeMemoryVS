#ifndef WFRONTWALL_H
#define WFRONTWALL_H

#include "global.h"

#include <QWidget>

namespace Ui {
class WFrontWall;
}

class WFrontWall : public QWidget
{
    Q_OBJECT

public:
    explicit WFrontWall(Global *global, QWidget *parent = nullptr);
    ~WFrontWall();

signals:
    void backSignal();
    void positionSignal(int IdLoc, int IdSov);

public slots:
    void allObjsEmitter();
    void topSlot();
    void scaf1Slot();
    void scaf2Slot();
    void scaf3Slot();
    void scaf4Slot();
    void bottomSlot();
    void floorSlot();

private:
    Ui::WFrontWall *ui;
    Global* g;
    QList<QPushButton*>* m_positionBtnList;
};

#endif // WFRONTWALL_H
