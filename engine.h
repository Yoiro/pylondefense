#ifndef ENGINE_H
#define ENGINE_H

#include <QPoint>
#include "gameobject.h"

class Engine
{
private:
    static Engine* instance;
    Engine();
public:
    static Engine* getInstance();
    bool collisionClickBox(float cursorX, float cursorY, GameObject* box);
    bool collisionAABB(GameObject* itemA, GameObject* itemB);
//    bool collisionOBB(GameObject* itemA, GameObject* itemB);
    bool collisionClickCircle(float cursorX, float cursorY, GameObject* circle);
    bool collisionCircles(GameObject* itemA, GameObject* itemB);
    bool collision(QPoint* tab[], int nbp, QPoint* p);
    bool pixelMaskColor();
    bool intersectSegments(QPoint* A, QPoint* B, QPoint* I, QPoint* P);

};

#endif // ENGINE_H
