

#include "Nodo.h"
#include <iostream>
using namespace std;
 
// Constructor por defecto
template<class T>
Nodo<T>::Nodo(void){ //constructor vacio.
    dato=NULL;
    siguiente=NULL;
}
template<typename T>
Nodo<T>::Nodo(T valor){//constructor con valor
    dato=valor;
    siguiente=NULL;
}
template<typename T>
Nodo<T>::Nodo(T valor, Nodo *next){//constructor con valor y puntero siguiente.
    dato=valor;
    siguiente=next;
}
template<typename T>
Nodo<T>::~Nodo(){
    delete this;
}
template <typename T>
T Nodo<T>::getValue(){//retorna dato.
    return dato;
}
template <typename T>
Nodo<T> *Nodo<T>::getNext(){//retorna puntero siguiente.
    return siguiente;
}
template <typename T>
void Nodo<T>::setNext(Nodo<T> *nodo){//setea puntero siguiente.
    siguiente=nodo;
}
// Imprimir un Nodo
template<typename T>
void Nodo<T>::print()
{
    //imprime el dato del nodo.
    cout << dato << "-> ";
}

    
   
    


