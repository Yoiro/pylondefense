#include "engine.h"

Engine* Engine::instance=nullptr;

Engine::Engine()
{
}

Engine *Engine::getInstance()
{
    if(instance == nullptr){
        instance = new Engine();
    }
    return instance;
}

bool Engine::collisionClickBox(const float cursorX, const float cursorY,const GameObject *box)
{
    return ( cursorX >= box->x
             && cursorX < box->x + box->width
             && cursorY >= box->y
             && cursorY < box->y + box->height);
}

bool Engine::collisionAABB(GameObject *itemA, GameObject *itemB)
{
    /*    Si obj2.x est plus grand ou égal aux bords horizontaux de obj1,
     * Ou si obj2.x + obj2.bordHorizontal est plus petit que obj1.getX,
     * Ou si obj2.y est plus grand que obj1.y+obj1.hauteur(verticale)
     * Ou si obj2.y+obj2.hauteur est plus petit ou égal à obj1.y,
     *
     * Alors les objets ne se touchent pas.
     */

       if((itemB->x >= itemA->x + itemA->width)      // trop à droite
        || (itemB->x+ itemB->width <= itemA->x) // trop à gauche
        || (itemB->y >= itemA->y + itemA->height) // trop en bas
        || (itemB->y + itemB->height <= itemA->y))  // trop en haut
           return false;
       else
           return true;
}

bool Engine::collisionClickCircle(float cursorX, float cursorY, GameObject *circle)
{
    float squareDiameter = (cursorX - circle->x) * (cursorX - circle->x)
                         + (cursorY - circle->y) * (cursorY - circle->y);
    return squareDiameter > (circle->width/2) * (circle->width/2);
}

bool Engine::collisionCircles(GameObject *itemA, GameObject *itemB)
{
    float squareDiameter = (itemA->x - itemB->x) * (itemA->x - itemB->x)
                         + (itemA->y - itemB->y) * (itemA->y - itemB->y);
    return squareDiameter > (itemA->width/2 + itemB->width/2) * (itemA->width/2 + itemB->width/2);
}

bool Engine::collision(Point* tab[], int nbp, Point *P)
{
    int i;
    Point* I;
    I->x = 10000 + rand()%100;   // 10000 + un nombre aléatoire entre 0 et 99
    I->y = 10000 + rand()%100;
    int nbintersections = 0;
    for(i=0;i<nbp;i++)
    {
        Point* A = tab[i];
        Point* B = new Point();
        if (i==nbp-1)  // si c'est le dernier point, on relie au premier
            B = tab[0];
        else           // sinon on relie au suivant.
            B = tab[i+1];
        int iseg = intersectSegments(A,B,I,P);
        if (iseg == -1)
            return collision(tab,nbp,P);  // cas limite, on relance la fonction.
        nbintersections+=iseg;
    }
    if (nbintersections%2==1)  // nbintersections est-il impair ?
        return true;
    else
        return false;
}

bool Engine::intersectSegments(Point *A, Point *B, Point *I, Point *P)
{
    Vector *D, *E;
    D->x = B->x - A->x;
    D->y = B->y - A->y;
    E->x = P->x - I->x;
    E->y = P->y - I->y;
    double denom = D->x*E->y - D->y*E->x;
    if (denom==0)
        return -1;   // erreur, cas limite
    float t = - (A->x*E->y-I->x*E->y-E->x*A->y+E->x*I->y) / denom;
    if (t<0 || t>=1)
       return 0;
    float u = - (-D->x*A->y+D->x*I->y+D->y*A->x-D->y*I->x) / denom;
    if (u<0 || u>=1)
       return 0;
    return 1;
}
