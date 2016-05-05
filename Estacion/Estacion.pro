#-------------------------------------------------
#
# Project created by QtCreator 2016-05-04T08:22:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Estacion
TEMPLATE = app


SOURCES += main.cpp\
        control.cpp \
    persona.cpp \
    nodomaleta.cpp \
    Nodo.cpp \
    nodopersona.cpp \
    lista.cpp

HEADERS  += control.h \
    persona.h \
    nodomaleta.h \
    Nodo.h \
    nodopersona.h \
    lista.h

FORMS    += control.ui \
    persona.ui
