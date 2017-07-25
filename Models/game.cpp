#include "game.h"
#include <QVBoxLayout>

Game::Game()
{
    this->setGeometry(0, 0, 800, 640);
    MenuView* mainMenu = new MenuView();
    menus.append(mainMenu);
    this->setScene(mainMenu);
}

