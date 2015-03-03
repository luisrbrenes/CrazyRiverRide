/* 
 * File:   Paquete.h
 * Author: briam
 *
 * Created on March 1, 2015, 5:47 PM
 */

#ifndef PAQUETE_H
#define	PAQUETE_H


#include "ObjetoMovil.h"

class Paquete: public ObjetoMovil{
    int tipoPaquete;
    int tamano;
    
    public:
        Paquete(int,int);
        /*0=balas basicas
          1=balas pro
          2=balas difucion
          3=balas mayhem
          4=vida
          5=combustible*/
};


#endif	/* PAQUETE_H */

