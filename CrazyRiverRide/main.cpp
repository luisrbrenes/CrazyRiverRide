

#include <cstdlib>
#include <iostream>
#include <string>
#include "ListaSimple.cpp"
#include "ListaSimple.h"
using namespace std;


int main() {
   
    ListaSimple<int> lista1;
    int ele=4;
    int ele2=67;
    int ele3=80;
    lista1.insertarInicio(ele); 
    lista1.insertarInicio(ele2);
    lista1.insertarFinal(ele2);
    lista1.insertarInicio(ele3);
     //lista1.eliminarInicio();
    //lista1.buscar(67) ;
 
   
    
    //lista1.largo();
    cout << "Lista al inicio " << endl;
    lista1.print();
    
    return 0;
}

