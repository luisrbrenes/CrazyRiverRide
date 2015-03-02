#ifndef BULLET_H
#define	BULLET_H
#include "ObjetoMovil.h"
class Bullet: public ObjetoMovil{
    bool Existe;
    public:
        Bullet(int,int);
        void Herir();
};

#endif	/* BULLET_H */
