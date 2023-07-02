#include <iostream>
#include "listaEnc.h"

using namespace std;

int main()
{
    cout << "------------- LISTAS ---------------" << endl;

    ListaEnc lista1 = crearLista();

    cout<<"La lista ->>>> "<<estaVacio(lista1)<<endl;
    //imprimir(lista);

    insertarInicio(lista1,23);
    insertarInicio(lista1,34);
    insertarInicio(lista1,12);
    insertar(lista1,3,2);
    insertarInicio(lista1,8);
    insertarFin(lista1,2);

    imprimir(lista1);

    int dato;
    removerInicio(lista1,&dato);
    cout<<"Esto es lo que saque: "<<dato<<endl;

    remover(lista1,&dato,3);
    removerFin(lista1,&dato);
    imprimir(lista1);
    cout<<"La lista ----> "<<estaVacio(lista1)<<endl;


    cout<<"----- ORDENADO ------\n"<<endl;
    ordenarListaPorBurbuja(lista1);
    imprimir(lista1);

    //cout<<"Estoy buscando el numero 12 -----> "<<busquedaSecuencial(lista1,3)<<endl;



    //liberarLista(lista1);

    return 0;
}
