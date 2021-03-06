#-------------------------------------------------
#
# Project created by QtCreator 2017-04-17T16:22:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Barrage
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cbarrageitem.cpp \
    cbarragescreen.cpp \
    systemtray.cpp \
    cdrawwidget.cpp \
    cemoticonwidget.cpp \
    qexpressionlabel.cpp \
    cmousemonitorwidget.cpp \
    csignalbarragescreen.cpp

HEADERS  += mainwindow.h \
    cbarrageitem.h \
    cbarragescreen.h \
    systemtray.h \
    cdrawwidget.h \
    cemoticonwidget.h \
    qexpressionlabel.h \
    cmousemonitorwidget.h \
    csignalbarragescreen.h

FORMS += \
    mainwindow.ui

RESOURCES += \
    images/images.qrc

RC_FILE = ico.rc

LIBS += -lws2_32 -ladvapi32 -lkernel32 -luser32
