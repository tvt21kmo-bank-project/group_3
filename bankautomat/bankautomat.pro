QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    nosto.cpp \
    padelcoin.cpp \
    saldo.cpp \
    tilitapahtumat.cpp \
    valinnat.cpp

HEADERS += \
    mainwindow.h \
    menu.h \
    nosto.h \
    padelcoin.h \
    saldo.h \
    tilitapahtumat.h \
    valinnat.h

FORMS += \
    mainwindow.ui \
    menu.ui \
    nosto.ui \
    padelcoin.ui \
    saldo.ui \
    tilitapahtumat.ui \
    valinnat.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
