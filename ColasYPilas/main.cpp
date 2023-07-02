#include <iostream>

#include "Colas.h"
#include "Pilas.h"

using namespace std;

int main()
{

    cout<<"----------------- COLAS --------------------\n"<<endl;
    Cola cola = crearCola();

    cout << "Cola Vacia ------> " << colaVacia(cola)<< endl;
    //cout << "DATO ------> " << encolar(cola,3)<< endl;


    encolar(cola,24);
    encolar(cola,54);
    encolar(cola,2);
    encolar(cola,16);

    imprimirCola(cola);

    cout << "\nIngresa al banco el numero ------> " <<desencolar(cola)<<endl;
    imprimirCola(cola);
    cout << "\nIngresa al banco el numero ------> " <<desencolar(cola)<<endl;
    imprimirCola(cola);
    cout << "\nIngresa al banco el numero ------> " <<desencolar(cola)<<endl;
    imprimirCola(cola);

    cout<<"\n------------------ PILAS --------------------\n"<<endl;
    Pila pila = crearPila();
    cout << "Pila Vacia ------> " <<pilaVacia(pila)<<endl;

    agregar(pila,43);
    agregar(pila,39);
    agregar(pila,75);
    agregar(pila,99);
    agregar(pila,2);

    imprimirPila(pila);

    cout << "\nSaco el numero ------> " <<sacar(pila)<<endl;
    imprimirPila(pila);
    cout << "\nSaco el numero ------> " <<sacar(pila)<<endl;
    imprimirPila(pila);
    cout << "\nSaco el numero ------> " <<sacar(pila)<<endl;
    imprimirPila(pila);
    cout << "\nSaco el numero ------> " <<sacar(pila)<<endl;
    imprimirPila(pila);
    cout << "\nSaco el numero ------> " <<sacar(pila)<<endl;
    imprimirPila(pila);




    return 0;
}
