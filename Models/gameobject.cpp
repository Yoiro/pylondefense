#include "gameobject.h"
#include "game.h"

extern Game* game;

GameObject::GameObject(QGraphicsItem* parent):QGraphicsPixmapItem(parent)
{

}

GameObject::GameObject(const GameObject &original)
{
    x=original.x;
    y=original.y;
    width=original.width;
    height=original.height;
}

float GameObject::getX()const
{
    return this->x;
}

float GameObject::getY()const{
    return this->y;
}

float GameObject::getHeight()const{
    return this->boundingRect().height()-1;
}

void GameObject::onCollide(GameObject* other)
{
    bool collision=game->engine->getInstance()->collisionAABB(this,other);
    if(collision){

    }
}

void GameObject::getHit(int dmg)
{
    //This method must be defined by sub-classes
}

float GameObject::getWidth()const{
    return this->boundingRect().width()-1;
}
