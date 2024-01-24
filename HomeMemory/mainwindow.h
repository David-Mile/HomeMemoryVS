#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDockWidget>
#include <QCloseEvent>

#include "wambienti.h"
#include "wlowbtns.h"
#include "wobjmanager.h"
#include "wsearch.h"
#include "wsettings.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Global *global, QWidget *parent = nullptr);
    ~MainWindow();

    WLowBtns *lowBtns;
    WObjManager *objmanager;
    WAmbienti *ambienti;
    WSearch *search;
    WSettings *settings;

    QDockWidget *dockLowBtns;
    QDockWidget *dockObjManager;

private slots:
    void openObjManager();
    void closeObjManager();
    void objmanagerChecker();
    void showSearchWidget();
    void showSettingsWidget();
    void themeSlot(bool isDark);


private:
    Global* g;
    QDockWidget* createDockWidget(QWidget *wid);
    void closeEvent(QCloseEvent *xClick);
};
#endif // MAINWINDOW_H
