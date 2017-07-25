#ifndef GAME_H
#define GAME_H

#include <QList>
#include <QString>
#include <QApplication>
#include "Views/scene.h"
#include "Views/menuview.h"
#include "engine.h"

class Game:public QGraphicsView
{
public:
    //Constructors
    Game();
    //Attributes
    QList<Scene> scenes;
    QList<MenuView*> menus;
    Scene* currentScene;
    Engine* engine;
    //Methods
    void switchScene(Scene* scene);
};

#endif // GAME_H
