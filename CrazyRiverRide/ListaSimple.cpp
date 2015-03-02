

#include <iostream>
#include "ListaSimple.h"
using namespace std;
 

template <typename T>//se define el template para el uso de la clase de tipo generica T. 
ListaSimple<T>::ListaSimple(){//constructor sin parametros.
    head=tail=NULL;//se inicializan el head y tail como nulos.
    num_nodos=0;
}
template<typename T>
int ListaSimple<T>::getLargo(){//retorna el largo de la lista 
  int num=num_nodos;
  return num;
}

template<typename T>
ListaSimple<T>::~ListaSimple() {//destructor de la clase.
    delete this; //elimina el objeto.
}


template<typename T>
void ListaSimple<T>::insertarInicio(T valor){//metodo insertar un elemento al inicio.   
    Nodo<T> *nodo_nuevo=new Nodo<T>(valor);//se crea el nodo con valor del parametro.
    Nodo<T> *tmp = head;//se define temporal.
    if(head==NULL)//si el head es nulo.
        head=nodo_nuevo;
    else{
        nodo_nuevo->setNext(head);
        head = nodo_nuevo;
    }
    num_nodos+=1;
}

template<typename T>
void ListaSimple<T>::insertarFinal(T valor){//inserta un elemento al final.
    Nodo<T> *nodo_nuevo=new Nodo<T>(valor);//se crea el nodo con el valor.
    Nodo<T> *tmp = head;//temporal como head.
    if(head==NULL)//si el head es nulo.
        head=nodo_nuevo;
    else{      
 
        while (tmp->getNext()!=NULL) {//recorre la lista.
            tmp = tmp->getNext();
        }
        tmp->setNext(nodo_nuevo);      
    }
    num_nodos+=1;;
}
template<typename T>
void ListaSimple<T>::eliminarFinal(){//elimina el elemento final de la lista.
    Nodo<T> *tmp = head;
    if(head==NULL)//si el head es nulo.
        cout <<"Lista esta vacia"<<endl;
    else{ 
        while (tmp->getNext()->getNext()!=NULL) {
            tmp = tmp->getNext();
            tail=tmp;
        }
        tail->setNext(NULL);  
        num_nodos-=1;;
    }
}
template<typename T>
void ListaSimple<T>::eliminarInicio(){//eliminar dato inicio.
    if(head==NULL)//si el head es nulo.
        cout <<"Lista esta vacia"<<endl;
    else{       
        head=head->getNext(); 
        num_nodos-=1;;
    }
}



// Buscar el dato de un  nodo
template<typename T>
bool ListaSimple<T>::buscar(T valor){
    Nodo<T> *tmp = head;
    
    bool esta=false;
    while (tmp) {
        if (tmp->getValue() == valor) {
            esta=true;
            break;
        }
        tmp = tmp->getNext();       
    }
    return esta;
}

// Imprimir la Lista
template<typename T>
void ListaSimple<T>::print()//imprime los elementos de la lista.
{
    Nodo<T> *tmp = head;//temporal para el head.
    if (!head) {//si head en nulo.
        cout << "La Lista está vacía " << endl;
    } else {
        while (tmp) {//recorre la lista imprimiendo sus datos.
            tmp->print();
            if (!tmp->getNext()) cout << "NULL";
                tmp = tmp->getNext();
        }
  }
  cout << endl << endl;
}


