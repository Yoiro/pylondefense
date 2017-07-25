#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <QObject>

#include <QGraphicsItem>
#include <QGraphicsPixmapItem>


class GameObject:public QGraphicsPixmapItem
{
public:
    //Attributes
    float x;
    float y;
    float w;
    float h;
    //Constructors
    GameObject(QGraphicsItem* parent=0);
    GameObject(const GameObject& original);
    //Getters
    float getX()const;
    float getY()const;
    float getWidth()const;
    float getHeight()const;
    //Members methods
    void onCollide(GameObject* other);
    //Inheritance
    virtual void getHit(int dmg);
};

#endif // GAMEOBJECT_H
