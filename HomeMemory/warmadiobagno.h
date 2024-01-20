#ifndef WARMADIOBAGNO_H
#define WARMADIOBAGNO_H

#include <QWidget>

namespace Ui {
class WArmadioBagno;
}

class WArmadioBagno : public QWidget
{
    Q_OBJECT

public:
    explicit WArmadioBagno(QWidget *parent = nullptr);
    ~WArmadioBagno();

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

private:
    Ui::WArmadioBagno *ui;
};

#endif // WARMADIOBAGNO_H
