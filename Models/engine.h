#ifndef ENGINE_H
#define ENGINE_H

#include <QPoint>
#include "gameobject.h"
#include "Vertex/point.h"
#include "Vertex/vector.h"

class Engine
{
private:
    static Engine* instance;
    Engine();
public:
    static Engine* getInstance();
    bool collisionClickBox(const float cursorX, const float cursorY,const GameObject* box);
    bool collisionAABB(GameObject* itemA, GameObject* itemB);
    bool collisionClickCircle(float cursorX, float cursorY, GameObject* circle);
    bool collisionCircles(GameObject* itemA, GameObject* itemB);
    bool collision(Point* tab[], int nbp, Point* p);
    bool pixelMaskColor();
    bool intersectSegments(Point* A, Point* B, Point* I, Point* P);

};

#endif // ENGINE_H
