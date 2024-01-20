#ifndef WBALCONE_H
#define WBALCONE_H

#include <QWidget>

namespace Ui {
class WBalcone;
}

class WBalcone : public QWidget
{
    Q_OBJECT

public:
    explicit WBalcone(QWidget *parent = nullptr);
    ~WBalcone();

signals:
    void openSpaceSignal();
    void cameraSignal();
    void positionSignal(int IdLoc, int IdSov);

public slots:
    void allObjsEmitter();
    void cassapancaSlot();
    void scafLeft1Slot();
    void scafLeft2Slot();
    void scafLeft3Slot();
    void scafLeft4Slot();
    void floorLeftSlot();
    void scafRight1Slot();
    void scafRight2Slot();
    void scafRight3Slot();
    void scafRight4Slot();


private:
    Ui::WBalcone *ui;
};

#endif // WBALCONE_H
