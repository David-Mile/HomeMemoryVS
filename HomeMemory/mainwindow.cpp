#include "mainwindow.h"

MainWindow::MainWindow(Global *global,QWidget *parent)
    : QMainWindow(parent)
{
    g = global;

    ambienti = new WAmbienti(this);
    ambienti->setMinimumWidth(400);
    setCentralWidget(ambienti);

    lowBtns = new WLowBtns(this);
    objmanager = new WObjManager(g); //without this because I want to see it only when dock is active.
    objmanager->setMinimumWidth(450);
    search = new WSearch(g);
    settings = new WSettings(g);

    // Locate buttons widget at the bottom
    dockLowBtns = createDockWidget(lowBtns);
    addDockWidget(Qt::BottomDockWidgetArea,dockLowBtns);
    resizeDocks({dockLowBtns},{1},Qt::Vertical);

    // Initialize dock for objmanager visualization
    dockObjManager = createDockWidget(objmanager);

    // Connects signals from lowBtns widget
    connect(lowBtns->casaBtn,SIGNAL(released()),ambienti, SLOT(casaBtnSlot()));
    connect(lowBtns->casaBtn,SIGNAL(released()),this,SLOT(objmanagerChecker()));
    connect(lowBtns->cantBtn,SIGNAL(released()),ambienti,SLOT(cantBtnSlot()));
    connect(lowBtns->cantBtn,SIGNAL(released()),this,SLOT(objmanagerChecker()));
    connect(lowBtns->boxBtn,SIGNAL(released()),ambienti,SLOT(boxBtnSlot()));
    connect(lowBtns->boxBtn,SIGNAL(released()),ambienti->box,SLOT(positionEmitter()));
    connect(lowBtns->boxBtn,SIGNAL(released()),this,SLOT(objmanagerChecker()));

    // Connects signals from OpenSpace
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(anticameraSignal()),ambienti->casa->sottoambienti,SLOT(setAnticamera()));
    // libUniSignals
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(libuniSignal(int,int)),ambienti->casa,SLOT(setSovraposizioni()));
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(libuniSignal(int,int)),ambienti->casa->sovraposizioni,SLOT(setLibUni()));
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(libuniSignal(int,int)),this,SLOT(openObjManager()));
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(libuniSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    // salottoSignals
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(salottoSignal(int,int)),ambienti->casa,SLOT(setSovraposizioni()));
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(salottoSignal(int,int)),ambienti->casa->sovraposizioni,SLOT(setSalotto()));
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(salottoSignal(int,int)),this,SLOT(openObjManager()));
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(salottoSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    // cucinaSignals
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(cucinaSignal(int,int)),ambienti->casa,SLOT(setSovraposizioni()));
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(cucinaSignal(int,int)),ambienti->casa->sovraposizioni,SLOT(setCucina()));
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(cucinaSignal(int,int)),this,SLOT(openObjManager()));
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(cucinaSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    // scarpieraSignals
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(scarpieraSignal(int,int)),ambienti->casa,SLOT(setSovraposizioni()));
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(scarpieraSignal(int,int)),ambienti->casa->sovraposizioni,SLOT(setScarpiera()));
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(scarpieraSignal(int,int)),this,SLOT(openObjManager()));
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(scarpieraSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    // BalconeSignals
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(balconeSignal(int,int)),ambienti->casa,SLOT(setSovraposizioni()));
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(balconeSignal(int,int)),ambienti->casa->sovraposizioni,SLOT(setBalcone()));
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(balconeSignal(int,int)),this,SLOT(openObjManager()));
    connect(ambienti->casa->sottoambienti->openspace,SIGNAL(balconeSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));

    // Connects signals from Anticamera
    connect(ambienti->casa->sottoambienti->anticamera,SIGNAL(openSpaceSignal()),ambienti->casa->sottoambienti,SLOT(setOpenSpace()));
    connect(ambienti->casa->sottoambienti->anticamera,SIGNAL(bagnoSignal()),ambienti->casa->sottoambienti,SLOT(setBagno()));
    connect(ambienti->casa->sottoambienti->anticamera,SIGNAL(cameraSignal()),ambienti->casa->sottoambienti,SLOT(setCamera()));
    // Ripostiglio signals
    connect(ambienti->casa->sottoambienti->anticamera,SIGNAL(ripostiglioSignal(int,int)),ambienti->casa,SLOT(setSovraposizioni()));
    connect(ambienti->casa->sottoambienti->anticamera,SIGNAL(ripostiglioSignal(int,int)),ambienti->casa->sovraposizioni,SLOT(setRipostiglio()));
    connect(ambienti->casa->sottoambienti->anticamera,SIGNAL(ripostiglioSignal(int,int)),this,SLOT(openObjManager()));
    connect(ambienti->casa->sottoambienti->anticamera,SIGNAL(ripostiglioSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));

    // Connects signals from Bagno
    connect(ambienti->casa->sottoambienti->bagno,SIGNAL(anticameraSignal()),ambienti->casa->sottoambienti,SLOT(setAnticamera()));
    // ArmadioBagno signals
    connect(ambienti->casa->sottoambienti->bagno,SIGNAL(armadioBagnoSignal(int,int)),ambienti->casa,SLOT(setSovraposizioni()));
    connect(ambienti->casa->sottoambienti->bagno,SIGNAL(armadioBagnoSignal(int,int)),ambienti->casa->sovraposizioni,SLOT(setArmadioBagno()));
    connect(ambienti->casa->sottoambienti->bagno,SIGNAL(armadioBagnoSignal(int,int)),this,SLOT(openObjManager()));
    connect(ambienti->casa->sottoambienti->bagno,SIGNAL(armadioBagnoSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    // ArmadiettoLav signals
    connect(ambienti->casa->sottoambienti->bagno,SIGNAL(armadiettoLavSignal(int,int)),ambienti->casa,SLOT(setSovraposizioni()));
    connect(ambienti->casa->sottoambienti->bagno,SIGNAL(armadiettoLavSignal(int,int)),ambienti->casa->sovraposizioni,SLOT(setArmadiettoLav()));
    connect(ambienti->casa->sottoambienti->bagno,SIGNAL(armadiettoLavSignal(int,int)),this,SLOT(openObjManager()));
    connect(ambienti->casa->sottoambienti->bagno,SIGNAL(armadiettoLavSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));

    // Connects signals from Camera
    connect(ambienti->casa->sottoambienti->camera,SIGNAL(anticameraSignal()),ambienti->casa->sottoambienti,SLOT(setAnticamera()));
    // BalconeSignals
    connect(ambienti->casa->sottoambienti->camera,SIGNAL(balconeSignal(int,int)),ambienti->casa,SLOT(setSovraposizioni()));
    connect(ambienti->casa->sottoambienti->camera,SIGNAL(balconeSignal(int,int)),ambienti->casa->sovraposizioni,SLOT(setBalcone()));
    connect(ambienti->casa->sottoambienti->camera,SIGNAL(balconeSignal(int,int)),this,SLOT(openObjManager()));
    connect(ambienti->casa->sottoambienti->camera,SIGNAL(balconeSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    // ArmadioCassettieraSignals
    connect(ambienti->casa->sottoambienti->camera,SIGNAL(armadioCassettieraSignal(int,int)),ambienti->casa,SLOT(setSovraposizioni()));
    connect(ambienti->casa->sottoambienti->camera,SIGNAL(armadioCassettieraSignal(int,int)),ambienti->casa->sovraposizioni,SLOT(setArmadioCassettiera()));
    connect(ambienti->casa->sottoambienti->camera,SIGNAL(armadioCassettieraSignal(int,int)),this,SLOT(openObjManager()));
    connect(ambienti->casa->sottoambienti->camera,SIGNAL(armadioCassettieraSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    // ScrivaniaComodinoSignals
    connect(ambienti->casa->sottoambienti->camera,SIGNAL(scrivaniaComodinoSignal(int,int)),ambienti->casa,SLOT(setSovraposizioni()));
    connect(ambienti->casa->sottoambienti->camera,SIGNAL(scrivaniaComodinoSignal(int,int)),ambienti->casa->sovraposizioni,SLOT(setScrivaniaComodino()));
    connect(ambienti->casa->sottoambienti->camera,SIGNAL(scrivaniaComodinoSignal(int,int)),this,SLOT(openObjManager()));
    connect(ambienti->casa->sottoambienti->camera,SIGNAL(scrivaniaComodinoSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));


    // Connects signals from Balcone (It is a SovraPosizione but it has also the "power" of a SottoAmbiente)
    connect(ambienti->casa->sovraposizioni->balcone,SIGNAL(openSpaceSignal()),ambienti->casa,SLOT(setSottoAmbienti()));
    connect(ambienti->casa->sovraposizioni->balcone,SIGNAL(openSpaceSignal()),ambienti->casa->sottoambienti,SLOT(setOpenSpace()));

    // Connects signals from Cantina
    // LeftWallSignal
    connect(ambienti->cantAmb->cantina,SIGNAL(leftWallSignal(int,int)),ambienti->cantAmb,SLOT(setLeftWall()));
    connect(ambienti->cantAmb->cantina,SIGNAL(leftWallSignal(int,int)),this,SLOT(openObjManager()));
    connect(ambienti->cantAmb->cantina,SIGNAL(leftWallSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    // FrontWallSignal
    connect(ambienti->cantAmb->cantina,SIGNAL(frontWallSignal(int,int)),ambienti->cantAmb,SLOT(setFrontWall()));
    connect(ambienti->cantAmb->cantina,SIGNAL(frontWallSignal(int,int)),this,SLOT(openObjManager()));
    connect(ambienti->cantAmb->cantina,SIGNAL(frontWallSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));


    // Back signals to ObjManager to check for changes in the table
    // Casa
    connect(ambienti->casa->sovraposizioni->libuni,SIGNAL(backSignal()),objmanager,SLOT(backEmitter()));
    connect(ambienti->casa->sovraposizioni->salotto,SIGNAL(backSignal()),objmanager,SLOT(backEmitter()));
    connect(ambienti->casa->sovraposizioni->cucina,SIGNAL(backSignal()),objmanager,SLOT(backEmitter()));
    connect(ambienti->casa->sovraposizioni->scarpiera,SIGNAL(backSignal()),objmanager,SLOT(backEmitter()));
    connect(ambienti->casa->sovraposizioni->ripostiglio,SIGNAL(backSignal()),objmanager,SLOT(backEmitter()));
    connect(ambienti->casa->sovraposizioni->armadioBagno,SIGNAL(backSignal()),objmanager,SLOT(backEmitter()));
    connect(ambienti->casa->sovraposizioni->armadiettoLav,SIGNAL(backSignal()),objmanager,SLOT(backEmitter()));
    connect(ambienti->casa->sovraposizioni->balcone,SIGNAL(openSpaceSignal()),objmanager,SLOT(backEmitter()));
    connect(ambienti->casa->sovraposizioni->balcone,SIGNAL(cameraSignal()),objmanager,SLOT(backEmitter()));
    connect(ambienti->casa->sovraposizioni->armadioCassettiera,SIGNAL(backSignal()),objmanager,SLOT(backEmitter()));
    connect(ambienti->casa->sovraposizioni->scrivaniaComodino,SIGNAL(backSignal()),objmanager,SLOT(backEmitter()));
    // Cantina
    connect(ambienti->cantAmb->leftWall,SIGNAL(backSignal()),objmanager,SLOT(backEmitter()));
    connect(ambienti->cantAmb->frontWall,SIGNAL(backSignal()),objmanager,SLOT(backEmitter()));

    // Back signals from Obj to this and to the proper widget
    connect(objmanager,SIGNAL(backSignal()),this,SLOT(closeObjManager()));
    connect(objmanager,SIGNAL(backSignal()),ambienti->casa,SLOT(setSottoAmbienti()));
    // Cantina
    connect(ambienti->cantAmb->leftWall,SIGNAL(backSignal()),ambienti->cantAmb,SLOT(setCantina()));
    connect(ambienti->cantAmb->frontWall,SIGNAL(backSignal()),ambienti->cantAmb,SLOT(setCantina()));

    // Connects for positions signals
    connect(ambienti->casa->sovraposizioni->libuni,SIGNAL(positionSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    connect(ambienti->casa->sovraposizioni->salotto,SIGNAL(positionSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    connect(ambienti->casa->sovraposizioni->cucina,SIGNAL(positionSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    connect(ambienti->casa->sovraposizioni->scarpiera,SIGNAL(positionSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    connect(ambienti->casa->sovraposizioni->ripostiglio,SIGNAL(positionSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    connect(ambienti->casa->sovraposizioni->armadioBagno,SIGNAL(positionSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    connect(ambienti->casa->sovraposizioni->armadiettoLav,SIGNAL(positionSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    connect(ambienti->casa->sovraposizioni->balcone,SIGNAL(positionSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    connect(ambienti->casa->sovraposizioni->armadioCassettiera,SIGNAL(positionSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    connect(ambienti->casa->sovraposizioni->scrivaniaComodino,SIGNAL(positionSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    connect(ambienti->cantAmb->leftWall,SIGNAL(positionSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    connect(ambienti->cantAmb->frontWall,SIGNAL(positionSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));
    connect(ambienti->box,SIGNAL(positionSignal(int,int)),objmanager,SLOT(tableFiller(int,int)));

    // Search button
    connect(lowBtns->searchBtn,SIGNAL(released()),this,SLOT(showSearchWidget()));

    // Settings button
    connect(lowBtns->settingsBtn,SIGNAL(released()),this,SLOT(showSettingsWidget()));

    // Dark and Light theme connections
    connect(settings,SIGNAL(themeSignal(bool)),this,SLOT(themeSlot(bool)));
    connect(settings,SIGNAL(themeSignal(bool)),search,SLOT(themeSlot(bool)));
    connect(settings,SIGNAL(themeSignal(bool)),settings,SLOT(themeSlot(bool)));

    if(settings)
        settings->initConfig();

    showMaximized();
}

MainWindow::~MainWindow()
{
}

// Overloads of closeEvent method of MainWindow class
void MainWindow::closeEvent(QCloseEvent *xClick)
{
    search->close();
    settings->close();
    this->close();
}

void MainWindow::themeSlot(bool isDark)
{
    if(isDark)
    {
        // Dark theme configuration
        QFile f(qApp->applicationDirPath() + "/styles/qdarkstyle/dark/darkstyle.qss"); // D:/documenti/GitHub/HomeMemory/HomeMemory/styles/QTDark.qss //
        f.open(QFile::ReadOnly | QFile::Text);
        QTextStream ts(&f);
        setStyleSheet(ts.readAll());
    }
    else
    {
        setStyleSheet("");
    }
}

// createDockWidget return a dock without titlebar and docking features
QDockWidget* MainWindow::createDockWidget(QWidget *wid)
{
    QDockWidget *dock = new QDockWidget();
    dock->setWidget(wid);

    // dummy widget for hiding the title bar
    QWidget *w = new QWidget();
    dock->setTitleBarWidget(w);
    dock->titleBarWidget()->hide();

    dock->setFeatures(QDockWidget::NoDockWidgetFeatures);

    return dock;
}

void MainWindow::objmanagerChecker()
{
    if(ambienti->stack->currentWidget() == ambienti->cantAmb)
    {
        closeObjManager();
        if(ambienti->cantAmb->stack->currentWidget() == ambienti->cantAmb->scrollLeftWall || ambienti->cantAmb->stack->currentWidget() == ambienti->cantAmb->scrollFrontWall)
            openObjManager();
    }

    if(ambienti->stack->currentWidget() == ambienti->scrollBox)
        openObjManager();

    if(ambienti->stack->currentWidget() == ambienti->casa)
    {
        if(ambienti->casa->stack->currentWidget() == ambienti->casa->sottoambienti)
            closeObjManager();
        else
            openObjManager();
    }

}

void MainWindow::openObjManager()
{
    //Visibility is nexessary becasue when removed the dock is also automatically hide.
    dockObjManager->setVisible(true);
    addDockWidget(Qt::RightDockWidgetArea,dockObjManager);
    resizeDocks({dockObjManager}, {760}, Qt::Horizontal);
}

void MainWindow::closeObjManager()
{
    removeDockWidget(dockObjManager);
}

void MainWindow::showSearchWidget()
{
    search->hide();
    search->show();
}

void MainWindow::showSettingsWidget()
{
    settings->hide();
    settings->show();
}
