

#include "ObjetoMovil.h"
#include "Enemigo.h"

    Enemigo::Enemigo(int x, int y)
    :ObjetoMovil(x,y){
        int pasos = 0;
    }

    /**
     * Metodo que se encarga de verificar el tipo de mivimiento
     * que realizaran los enemigos en el area de juego
     * @param tipo Indicador para conocer el tipo de movimiento
     */
    void Enemigo::tipoMovimiento(int tipo){
        float posyEnemigo = ObjetoMovil::getY();
        float posxEnemigo = ObjetoMovil::getX();
        
        switch(tipo){
            case(1):
                posyEnemigo += 5;
            case(2):
                if(pasos < 120 && posxEnemigo < 600){
                    posyEnemigo += 0.5;
                    posxEnemigo += 5;
                    pasos += 1;
                }

                else if(pasos >= 120 && pasos < 240){
                    if(posxEnemigo < 50){
                        posyEnemigo += 0.5;
                        posxEnemigo -+ 5;
                        pasos += 1;
                    }
                }
                else{
                    pasos = 0;
                }
            //case(3):
        }

}