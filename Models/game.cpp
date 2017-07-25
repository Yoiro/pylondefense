#include "game.h"
#include <QVBoxLayout>

Game::Game()
{
    QGraphicsScene* mainMenu = new QGraphicsScene(this);
    QPushButton* btnLoad = new QPushButton(/*icon, */"Load Game");
    QPushButton* btnQuit = new QPushButton(/*icon, */"Quit To Desktop");
    QPushButton* btnSelectMap = new QPushButton(/*icon, */"Select A Level");

    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(btnSelectMap);
    layout->addWidget(btnLoad);
    layout->addWidget(btnQuit);

    //menus.append(mainMenu);
    this->setLayout(layout);
    this->setScene(mainMenu);
}

