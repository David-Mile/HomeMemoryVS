#ifndef WARMADIOCASSETTIERA_H
#define WARMADIOCASSETTIERA_H

#include "global.h"

#include <QWidget>

namespace Ui {
class WArmadioCassettiera;
}

class WArmadioCassettiera : public QWidget
{
    Q_OBJECT

public:
    explicit WArmadioCassettiera(Global *global, QWidget *parent = nullptr);
    ~WArmadioCassettiera();

signals:
    void backSignal();
    void positionSignal(int IdLoc, int IdSov);

public slots:
    void allObjsEmitter();
    void scafLeft1Slot();
    void scafLeft2Slot();
    void scafLeft3Slot();
    void appendiLeftSlot();
    void floorAppendiLeftSlot();
    void appendiRightSlot();
    void floorAppendiRightSlot();
    void scafRight1Slot();
    void scafRight2Slot();
    void scafRight3Slot();
    void cassetto1Slot();
    void cassetto2Slot();
    void cassetto3Slot();
    void cassettoLeftHSlot();
    void cassettoLeftLSlot();
    void cassettoRightHSlot();
    void cassettoRightLSlot();

private:
    Ui::WArmadioCassettiera *ui;
    Global* g;
    QList<QPushButton*>* m_positionBtnList;
};

#endif // WARMADIOCASSETTIERA_H
