#include <iostream>

#include "moneda.h"
#include "pila.h"

using namespace std;

int main()
{

    Moneda m1 = crearMoneda(15000,"Plateado",1950);
    Moneda m2 = crearMoneda(200000,"Oro",1853);
    Moneda m3 = crearMoneda(13200,"Plateado",1962);
    Moneda m4 = crearMoneda(10000,"Bronce",1982);
    Moneda m5 = crearMoneda(4000,"Bronce",1999);

    Pila pila = crearPila();

    agregar(pila,m1);
    agregar(pila,m2);
    agregar(pila,m3);
    agregar(pila,m4);
    agregar(pila,m5);

    imprimirPila(pila);

    sacar(pila);
    imprimirPila(pila);

    sacar(pila);
    imprimirPila(pila);

    sacar(pila);
    imprimirPila(pila);

    sacar(pila);
    imprimirPila(pila);

    return 0;
}
