
#ifndef OBJETOMOVIL_H 
#define OBJETOMOVIL_H

#include <string>
#include <iostream>
using namespace std;

class ObjetoMovil{
    int posicionEjeX;
    int posicionEjeY;
    
    public:
        ObjetoMovil(int, int);
        void Mover(int);
        void setX(int);
        void setY(int);
        int getX();
        int getY();
    };

#endif 