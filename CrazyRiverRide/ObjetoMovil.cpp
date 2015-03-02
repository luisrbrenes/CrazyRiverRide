
#include "ObjetoMovil.h"
#include <iostream>
#include <string>

using namespace std;
    
    ObjetoMovil::ObjetoMovil(int x, int y){
        posicionEjeX=x; 
        posicionEjeY=y;
    }
    
    int ObjetoMovil::getX(){return posicionEjeX;}
    
    int ObjetoMovil::getY(){return posicionEjeY;}
    
    void ObjetoMovil::setX(int x){posicionEjeX=x;}
    
    void ObjetoMovil::setY(int y){posicionEjeY=y;}
        
    void ObjetoMovil::Mover(int direccion){
        switch(direccion){
            case 0: //arriba
                posicionEjeY=+1;
                break;
            case 1: //abajo
                posicionEjeY=-1;
                break;
            case 2: //derecha
                posicionEjeX=+1;
                break;
            default: //izquierda
                posicionEjeX=-1;
                break;
        }

    }
    


