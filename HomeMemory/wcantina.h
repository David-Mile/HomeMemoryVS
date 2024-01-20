#ifndef WCANTINA_H
#define WCANTINA_H

#include <QWidget>

namespace Ui {
class WCantina;
}

class WCantina : public QWidget
{
    Q_OBJECT

public:
    explicit WCantina(QWidget *parent = nullptr);
    ~WCantina();

signals:
    void leftWallSignal(int IdLoc, int IdSov);
    void frontWallSignal(int IdLoc, int IdSov);

public slots:
    void leftWallSlot();
    void frontWallSlot();

private:
    Ui::WCantina *ui;
};

#endif // WCANTINA_H
