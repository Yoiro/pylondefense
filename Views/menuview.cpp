#include "menuview.h"
#include <QVBoxLayout>
#include "Models/game.h"

extern Game* game;

MenuView::MenuView()
{
    //Instanciating buttons
    QPushButton* btnLoad = new QPushButton(/*icon, */"Load Game");
    QPushButton* btnQuit = new QPushButton(/*icon, */"Quit To Desktop");
    QPushButton* btnSelectMap = new QPushButton(/*icon, */"Select A Level");
    //Creating layout then adding the buttons to it
    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(btnSelectMap);
    layout->addWidget(btnLoad);
    layout->addWidget(btnQuit);
    //Create the main widget of this scene
    QWidget *panel = new QWidget();
    panel->setGeometry(0, 0, game->width(), game->height());
    panel->setLayout(layout);


    this->QGraphicsScene::addWidget(panel);
}
