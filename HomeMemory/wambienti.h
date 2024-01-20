#ifndef WAMBIENTI_H
#define WAMBIENTI_H

#include "wcasa.h"
#include "wcantamb.h"
#include "wbox.h"
#include "wlogo.h"

#include <QWidget>
#include <QStackedLayout>
#include <QScrollArea>
#include <QHBoxLayout>
#include <QPushButton>
#include <QSpacerItem>


class WAmbienti : public QWidget
{
    Q_OBJECT
public:
    explicit WAmbienti(QWidget *parent = nullptr);
    WLogo *logo;
    WCasa *casa;
    WCantAmb *cantAmb;
    WBox *box;
    QScrollArea *scrollBox;
    QStackedLayout *stack;
    QPushButton *casaBtn;
    QPushButton *boxBtn;
    QPushButton *cantBtn;
    QPushButton *settingsBtn;
    QPushButton *searchBtn;

public slots:
    void casaBtnSlot();
    void cantBtnSlot();
    void boxBtnSlot();

signals:

private:
    QVBoxLayout *vboxAmb;
    QHBoxLayout *hboxBtn;
    QScrollArea *scrollLogo;

};

#endif // WAMBIENTI_H
