#include "gameobject.h"

extern Game* game;

GameObject::GameObject(QGraphicsItem* parent):QGraphicsPixmapItem(parent)
{

}

GameObject::GameObject(const GameObject &original)
{
    posx=original.posx;
    posy=original.posy;
    w=original.w;
    h=original.h;
}

float GameObject::getX()const
{
    return this->pos().x();
}

float GameObject::getY()const{
    return this->pos().y();
}

float GameObject::getHeight()const{
    return this->boundingRect().height()-1;
}

void GameObject::onCollide(GameObject* other)
{
    bool collision=game->engine->getInstance()->collisionWithBoxes(this,other);
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
