#-------------------------------------------------
#
# Project created by QtCreator 2015-09-30T20:37:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Hivemind-Qt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    decisionwidget.cpp \
    decisiondetailswidget.cpp \
    authorwidget.cpp \
    decisioncreationwidget.cpp \
    decisionmarketcreationwidget.cpp \
    tradingwindow.cpp \
    marketwidget.cpp \
    votingwidget.cpp \
    combocreationwidget.cpp \
    sidechaintransferwidget.cpp

HEADERS  += mainwindow.h \
    decisionwidget.h \
    decisiondetailswidget.h \
    authorwidget.h \
    decisioncreationwidget.h \
    decisionmarketcreationwidget.h \
    tradingwindow.h \
    marketwidget.h \
    votingwidget.h \
    combocreationwidget.h \
    sidechaintransferwidget.h

FORMS    += mainwindow.ui \
    decisionwidget.ui \
    decisiondetailswidget.ui \
    authorwidget.ui \
    decisioncreationwidget.ui \
    decisionmarketcreationwidget.ui \
    tradingwindow.ui \
    marketwidget.ui \
    votingwidget.ui \
    combocreationwidget.ui \
    sidechaintransferwidget.ui

RESOURCES += \
    resources.qrc
