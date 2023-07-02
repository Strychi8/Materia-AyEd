#include <iostream>
#include "arbol.h"

using namespace std;

int main()
{

	Nodo raiz = nuevoNodo(51);
	insertar(raiz,17);
	insertar(raiz,33);
	insertar(raiz,66);
	insertar(raiz,3);
	insertar(raiz,73);
	insertar(raiz,18);
	insertar(raiz,20);
	insertar(raiz,9);

	cout<<"Imprimiendo preOrden"<<endl;
	preOrden(raiz);
    cout<<"\n\nImprimiendo inOrden "<<endl;
    inOrden(raiz);
    cout<<"\n\nImprimiendo postOrden "<<endl;
    postOrden(raiz);

    cout<<"\n\nLa altura es -----> "<<calcularAltura(raiz)<<endl;

    cout<<"\n\nBuscando el 9\n"<<endl;
    Nodo buscado = buscar(raiz,9);

    if(buscado == NULL){
        cout<<"\nNo Encontrado!!!!!\n"<<endl;
    }else{
        cout<<"\nEncontrado\n"<<endl;
    }


 return 0;
}

