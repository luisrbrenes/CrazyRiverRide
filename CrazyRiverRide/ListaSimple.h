/* 
 * File:   ListaSimple.h
 * Author: stiven
 *
 * Created on February 25, 2015, 2:06 PM
 */

#ifndef LISTASIMPLE_H
#define	LISTASIMPLE_H
#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Nodo.cpp"
#include "Nodo.h"
 
using namespace std;
 
template <class T>//se define una clase template.
 
class ListaSimple {//clase lista
private:
    Nodo<T> *head;//nodos head y tail como atributos privados.
    Nodo<T> *tail;
    
public://se definen los metodos publicos
    ListaSimple();   //constructor
    ~ListaSimple();//destructor
    void insertarInicio(T);//inserta elemento al inicio
    void eliminarInicio();//elimina elemento del inicio.
    void insertarFinal(T);//inserta elemento al final.
    void eliminarFinal();//elimina elemento del final
    void buscar(T);//busca el elemento.
    void print(); //imprime la lista.
    


};

#endif	/* LISTASIMPLE_H */

