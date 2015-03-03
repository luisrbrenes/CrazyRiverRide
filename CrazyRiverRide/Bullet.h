/* 
 * File:   Bullet.h
 * Author: briam
 *
 * Created on March 1, 2015, 10:44 AM
 */

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

