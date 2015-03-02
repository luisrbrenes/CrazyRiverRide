
#include "ObjetoMovil.h"
#include "Nave.h"
#include "Constantes.h"
#include "Bullet.h"

using namespace Constantes;

    Nave::Nave(int x, int y)
    :ObjetoMovil(x,y)
    {
        int vida=Constantes::vidaInic;
        int combustible=Constantes::combustibleInic;
        int balaBasica=Constantes::municion;
        int balaPro=0;
        int balaDifucion=0;
        int balaMayhem=0;
        int tipoMunicion=0;
        bool vivo=1;
        
    
    }
    
    void Nave::disparar(){
        int cantidadBalas;
        switch(tipoMunicion){
            case 0:
                cantidadBalas=balaBasica;
                break;
            case 1:
                cantidadBalas=balaPro;
                break;
            case 2:
                cantidadBalas=balaDifucion;
                break;
            default:
                cantidadBalas=balaMayhem;
                break;
                
        }
        if (cantidadBalas>0){
        switch(tipoMunicion){
            case 0:
                crearBala();
                balaBasica-=1;
                //time(1)
                break;
            case 1:
                crearBala();
                balaBasica-=1;
                break;
            case 2:
                //difucion
                break;
            default://mayhem
                break;
        }}
        else{
            return;
            
        }
    }
      
   void Nave::crearBala(){
       int posicionX=ObjetoMovil::getX();
       int posicionY=ObjetoMovil::getY();
       Bullet myBullet(posicionX,posicionY);
   }     
   
    void Nave::recibirDisparo(){
        vida-=2;
        if(vida<=0){this->morir();}
    }
    
    void Nave::morir(){
        vivo=0;
    }
    
    void Nave::obtenerMunicion(int tipo, int cantidad){
        switch(tipo){
            case 0:
                balaBasica+=cantidad;
                if (balaBasica>40){balaBasica=40;}
                break;
            case 1:
                balaPro+=cantidad;
                if (balaPro>40){balaPro=40;}
                break;
            case 2:
                balaDifucion+=cantidad;
                if (balaDifucion>10){balaDifucion=10;}
                break;
            default:
                balaMayhem+=cantidad;
                if (balaMayhem>5){balaMayhem=5;}
                break;
        }
    }
    
    void Nave::cambiarMunicion(){
        if (tipoMunicion==3){
            tipoMunicion=0;
        }
        else{
            tipoMunicion+=1;
        }
    }
    
    void Nave::curar(int cantidad){
        vida+=cantidad;
        if (vida>100){
            vida=100;
        }
        
    }
    
    void Nave::recargarCombustible(int cantidad){
        combustible+=cantidad;
        if (combustible>100){
            combustible=100;
        }
        
    }