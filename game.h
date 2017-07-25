#ifndef GAME_H
#define GAME_H

#include <QList>
#include "scene.h"
#include "engine.h"

class Game
{
public:
    //Constructors
    Game();
    //Attributes
    QList<Scene*> scenes;
    Scene* currentScene;
    Engine* engine;
    //Methods
    void switchScene(Scene* scene);
};

#endif // GAME_H
