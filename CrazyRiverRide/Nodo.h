

#ifndef NODO_H
#define	NODO_H
#include <iostream>
template <class T>//se crea la clase template.

class Nodo {
private:
    T dato;//dato del nodo.
    Nodo *siguiente;//puntero hacia el siguiente nodo.
    
public: 
    // constructor vacio.
    Nodo();    
    //Constructor con valor.
    Nodo(T);
    //  Constructor con valor y puntero hacia el siguiente 
    Nodo(T, Nodo*);   
    // Getters y setters
    T getValue(); 
    Nodo *getNext();
    void setValue(T); 
    void setNext(Nodo<T>*);
    ~Nodo();//destructor
    void print();//imprime el dato del nodo.

};

#endif	/* NODO_H */

