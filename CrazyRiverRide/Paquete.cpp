#include "Paquete.h"


Paquete::Paquete(int x,int y,int tipo,int cantidad)
:ObjetoMovil(x,y){
    tipoPaquete=tipo;
    tamano=cantidad;
}