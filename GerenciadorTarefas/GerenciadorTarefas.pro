#-------------------------------------------------
#
# Project created by QtCreator 2016-03-19T09:20:47
#
#-------------------------------------------------

QT       += core gui webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = GerenciadorTarefas
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h

FORMS    += mainwindow.ui

RESOURCES += \
    recursosd3js.qrc

DISTFILES +=
