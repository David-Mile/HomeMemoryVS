#ifndef WLIBUNI_H
#define WLIBUNI_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class WLibUni;
}

class WLibUni : public QWidget
{
    Q_OBJECT

public:
    explicit WLibUni(QWidget *parent = nullptr);
    ~WLibUni();
    void allButtonsActivator();
    void allObjBtnDeactivator();

signals:
    void backSignal();
    void positionSignal(int IdLoc, int IdSov);


public slots:
    void allObjsEmitter();
    void scaf1Slot();
    void ant1Slot();
    void scaf2Slot();
    void scaf3Slot();
    void ant2Slot();
    void ant3Slot();

private:
    Ui::WLibUni *ui;
    void btnDeactivator(QPushButton *btn);
    void btnDefaultColor(QPushButton *btn);
};

#endif // WLIBUNI_H
