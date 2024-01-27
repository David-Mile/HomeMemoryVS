#ifndef WCANTAMB_H
#define WCANTAMB_H

#include "global.h"
#include "wcantina.h"
#include "wleftwall.h"
#include "wfrontwall.h"

#include <QWidget>
#include <QStackedLayout>
#include <QScrollArea>

class WCantAmb : public QWidget
{
    Q_OBJECT
public:
    explicit WCantAmb(Global *global, QWidget *parent = nullptr);
    WCantina *cantina;
    WLeftWall *leftWall;
    WFrontWall *frontWall;
    QStackedLayout *stack;
    QScrollArea *scrollLeftWall;
    QScrollArea *scrollFrontWall;

public slots:
    void setCantina();
    void setLeftWall();
    void setFrontWall();

private:
    QScrollArea *scrollCantina;
    Global* g;

};

#endif // WCANTAMB_H
