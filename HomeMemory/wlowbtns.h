#ifndef WLOWBTNS_H
#define WLOWBTNS_H

#include <QWidget>
#include <QApplication>

#include <QHBoxLayout>
#include <QPushButton>
#include <QSpacerItem>
#include <QSize>

class WLowBtns : public QWidget
{
    Q_OBJECT
public:
    explicit WLowBtns(QWidget *parent = nullptr);

    QHBoxLayout *hbox;
    QPushButton *casaBtn;
    QPushButton *boxBtn;
    QPushButton *cantBtn;
    QPushButton *settingsBtn;
    QPushButton *searchBtn;

signals:

};

#endif // WLOWBTNS_H
