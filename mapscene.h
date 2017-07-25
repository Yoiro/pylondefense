#ifndef MAPSCENE_H
#define MAPSCENE_H

#include "scene.h"

class MapScene: public Scene
{
public:
    //Constructors
    MapScene();
    //Attributes
    //items can be any kind of game object, including
    QList<Tower*> towers;
    QList<Enemy*> enemies;
    QList<Bullet*> bullets;
    //Towers, Enemies, Bullets, but also some HUD (Gold, Buttons, ...)
    QList<GameObject*> HUDitems;
};

#endif // MAPSCENE_H
