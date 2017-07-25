#ifndef MENUSCENE_H
#define MENUSCENE_H

#include "scene.h"
#include "gamebox.h"
#include <QList>


class MenuScene : public Scene
{
public:
    //Constructors
    MenuScene();
    //Attributes
    QList<GameBox*> boxes;
};

#endif // MENUSCENE_H
