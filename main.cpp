#include "Views/mainwindow.h"
#include "Models/game.h"
#include <QApplication>

Game* game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    game = new Game();
    game->show();
    //game->showFullScreen();

    return a.exec();
}
