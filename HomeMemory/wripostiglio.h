#ifndef WRIPOSTIGLIO_H
#define WRIPOSTIGLIO_H

#include <QWidget>

namespace Ui {
class WRipostiglio;
}

class WRipostiglio : public QWidget
{
    Q_OBJECT

public:
    explicit WRipostiglio(QWidget *parent = nullptr);
    ~WRipostiglio();

signals:
    void backSignal();
    void positionSignal(int IdLoc, int IdSov);

public slots:
    void allObjsEmitter();
    void scaf1Slot();
    void scaf2Slot();
    void scaf3Slot();
    void scaf4Slot();
    void scaf5Slot();
    void scaf6Slot();
    void scaf7Slot();
    void scaf8Slot();
    void scaf9Slot();
    void floorSlot();

private:
    Ui::WRipostiglio *ui;
};

#endif // WRIPOSTIGLIO_H
