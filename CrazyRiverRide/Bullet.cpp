#include "Bullet.h"

Bullet::Bullet(int x,int y)
:ObjetoMovil(x,y){Existe=1;}

void Bullet::Herir(){
    Existe=0;
}
