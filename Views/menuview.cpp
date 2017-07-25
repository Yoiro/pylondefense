#include "menuview.h"

MenuView::MenuView()
{
    btnLoad = new QPushButton(/*icon, */"Load Game");
    btnQuit = new QPushButton(/*icon, */"Quit To Desktop");
    btnSelectMap = new QPushButton(/*icon, */"Select A Level");

    QGraphicsScene scene;
    scene.addWidget(btnSelectMap);
    scene.addWidget(btnLoad);
    scene.addWidget(btnQuit);
}
