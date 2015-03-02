
#ifndef NAVE_H
#define	NAVE_H

#include "Constantes.h"

class Nave: public ObjetoMovil{
    int vida;
    int combustible;
    int balaBasica;
    int balaPro;
    int balaDifucion;
    int balaMayhem;
    int tipoMunicion;
    bool vivo;
    
public:
    Nave(int,int);
    void disparar();
    void crearBala();
    void recibirDisparo();
    void morir();
    void obtenerMunicion(int,int);
    void cambiarMunicion();
    void curar(int);
    void recargarCombustible(int);
    
    
    
};


#endif	/* NAVE_H */