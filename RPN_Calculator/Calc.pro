#-------------------------------------------------
#
# Project created by QtCreator 2013-03-09T16:05:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calc
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    aboutdialog.cpp \
    rpncalc.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    aboutdialog.h \
    rpncalc.h

FORMS    += mainwindow.ui \
    dialog.ui \
    aboutdialog.ui
