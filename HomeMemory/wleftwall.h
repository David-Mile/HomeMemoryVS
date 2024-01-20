#ifndef WLEFTWALL_H
#define WLEFTWALL_H

#include <QWidget>

namespace Ui {
class WLeftWall;
}

class WLeftWall : public QWidget
{
    Q_OBJECT

public:
    explicit WLeftWall(QWidget *parent = nullptr);
    ~WLeftWall();

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
    void scaf5Slot();
    void scaf6Slot();
    void scaf7Slot();
    void scaf8Slot();
    void floorSlot();


private:
    Ui::WLeftWall *ui;
};

#endif // WLEFTWALL_H