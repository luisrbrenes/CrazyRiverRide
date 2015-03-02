

#ifndef LISTASIMPLE_H
#define	LISTASIMPLE_H
#include <iostream>
#include "Nodo.cpp"
#include "Nodo.h"
 
using namespace std;
 
template <class T>//se define una clase template.
 
class ListaSimple {//clase lista
private:
    Nodo<T> *head;//nodos head y tail como atributos privados.
    Nodo<T> *tail;
    int num_nodos;//se inicializa el contador de nodos.
    
public://se definen los metodos publicos
    ListaSimple();   //constructor
    ~ListaSimple();//destructor
    void insertarInicio(T);//inserta elemento al inicio
    void eliminarInicio();//elimina elemento del inicio.
    void insertarFinal(T);//inserta elemento al final.
    void eliminarFinal();//elimina elemento del final
    bool buscar(T);//busca el elemento,true  si esta, false si no esta.
    void print(); //imprime la lista .
    int getLargo();
};

#endif	/* LISTASIMPLE_H */

