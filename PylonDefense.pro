#-------------------------------------------------
#
# Project created by QtCreator 2017-07-25T03:13:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PylonDefense
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    Models/engine.cpp \
    Models/game.cpp \
    Models/gameobject.cpp \
    Models/engine.cpp \
    Models/game.cpp \
    Models/gameobject.cpp \
    Views/gamebox.cpp \
    Views/mainwindow.cpp \
    Views/mapscene.cpp \
    Views/scene.cpp \
    main.cpp \
    Models/engine.cpp \
    Models/game.cpp \
    Models/gameobject.cpp \
    Vertex/point.cpp \
    Views/gamebox.cpp \
    Views/mainwindow.cpp \
    Views/mapscene.cpp \
    Views/scene.cpp \
    main.cpp \
    Vertex/vector.cpp \
    Views/menuview.cpp

HEADERS += \
    Models/engine.h \
    Models/game.h \
    Models/gameobject.h \
    Models/engine.h \
    Models/game.h \
    Models/gameobject.h \
    Models/engine.h \
    Models/game.h \
    Models/gameobject.h \
    Views/gamebox.h \
    Views/mainwindow.h \
    Views/mapscene.h \
    Views/scene.h \
    Models/engine.h \
    Models/game.h \
    Models/gameobject.h \
    Vertex/point.h \
    Views/gamebox.h \
    Views/mainwindow.h \
    Views/mapscene.h \
    Views/scene.h \
    Vertex/vector.h \
    Views/menuview.h

FORMS += \
        mainwindow.ui

RESOURCES += \
    res/qrc.qrc
