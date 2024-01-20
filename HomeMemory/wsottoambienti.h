#ifndef WSOTTOAMBIENTI_H
#define WSOTTOAMBIENTI_H

#include "wopenspace.h"
#include "wanticamera.h"
#include "wbagno.h"
#include "wcamera.h"

#include <QWidget>
#include <QStackedLayout>
#include <QScrollArea>

class WSottoAmbienti : public QWidget
{
    Q_OBJECT
public:
    explicit WSottoAmbienti(QWidget *parent = nullptr);
    WOpenSpace *openspace;
    WAnticamera *anticamera;
    WBagno *bagno;
    WCamera *camera;

public slots:
    void setOpenSpace();
    void setAnticamera();
    void setBagno();
    void setCamera();

public:
    QStackedLayout *stack;
    QScrollArea *scrollOpenSpace;
    QScrollArea *scrollAnticamera;
    QScrollArea *scrollBagno;
    QScrollArea *ScrollCamera;

};

#endif // WSOTTOAMBIENTI_H
