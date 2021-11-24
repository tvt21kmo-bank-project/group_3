QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Valikko.cpp \
    idtilit_tulostus.cpp \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    nosto.cpp \
    nosto_credit.cpp \
    padelcoin.cpp \
    saldo.cpp \
    tilitapahtumat.cpp \
    valikko_credit.cpp

HEADERS += \
    Valikko.h \
    idtilit_tulostus.h \
    mainwindow.h \
    menu.h \
    nosto.h \
    nosto_credit.h \
    padelcoin.h \
    saldo.h \
    tilitapahtumat.h \
    valikko_credit.h

FORMS += \
    Valikko.ui \
    idtilit_tulostus.ui \
    mainwindow.ui \
    menu.ui \
    nosto.ui \
    nosto_credit.ui \
    padelcoin.ui \
    saldo.ui \
    tilitapahtumat.ui \
    valikko_credit.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
