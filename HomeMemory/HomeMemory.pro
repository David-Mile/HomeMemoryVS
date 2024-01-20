QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    global.cpp \
    main.cpp \
    mainwindow.cpp \
    wambienti.cpp \
    wanticamera.cpp \
    warmadiettolav.cpp \
    warmadiobagno.cpp \
    warmadiocassettiera.cpp \
    wbagno.cpp \
    wbalcone.cpp \
    wbox.cpp \
    wcamera.cpp \
    wcantamb.cpp \
    wcantina.cpp \
    wcasa.cpp \
    wcucina.cpp \
    wfrontwall.cpp \
    wleftwall.cpp \
    wlibuni.cpp \
    wlogo.cpp \
    wlowbtns.cpp \
    wobjmanager.cpp \
    wopenspace.cpp \
    wripostiglio.cpp \
    wsalotto.cpp \
    wscarpiera.cpp \
    wscrivaniacomodino.cpp \
    wsearch.cpp \
    wsettings.cpp \
    wsottoambienti.cpp \
    wsovraposizioni.cpp

HEADERS += \
    global.h \
    mainwindow.h \
    wambienti.h \
    wanticamera.h \
    warmadiettolav.h \
    warmadiobagno.h \
    warmadiocassettiera.h \
    wbagno.h \
    wbalcone.h \
    wbox.h \
    wcamera.h \
    wcantamb.h \
    wcantina.h \
    wcasa.h \
    wcucina.h \
    wfrontwall.h \
    wleftwall.h \
    wlibuni.h \
    wlogo.h \
    wlowbtns.h \
    wobjmanager.h \
    wopenspace.h \
    wripostiglio.h \
    wsalotto.h \
    wscarpiera.h \
    wscrivaniacomodino.h \
    wsearch.h \
    wsettings.h \
    wsottoambienti.h \
    wsovraposizioni.h

FORMS += \
    wanticamera.ui \
    warmadiettolav.ui \
    warmadiobagno.ui \
    warmadiocassettiera.ui \
    wbagno.ui \
    wbalcone.ui \
    wbox.ui \
    wcamera.ui \
    wcantina.ui \
    wcucina.ui \
    wfrontwall.ui \
    wleftwall.ui \
    wlibuni.ui \
    wobjmanager.ui \
    wopenspace.ui \
    wripostiglio.ui \
    wsalotto.ui \
    wscarpiera.ui \
    wscrivaniacomodino.ui \
    wsearch.ui \
    wsettings.ui

RESOURCES += styles/qdarkstyle/dark/darkstyle.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


HEADERS += \
    mainwindow.h \
    wambienti.h \
    wcasa.h \
    wlibuni.h \
    wlogo.h \
    wobjmanager.h \
    wopenspace.h \
    wsottoambienti.h \
    wsovraposizioni.h

FORMS += \
    wlibuni.ui \
    wobjmanager.ui \
    wopenspace.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
