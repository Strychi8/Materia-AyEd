#include <iostream>
#include "dato.h"
#include "persona.h"
#include "listaEnc.h"


using namespace std;

int main()
{
    Persona p1 = crearPersona("Tomas","Strycharski",444);
    Persona p2 = crearPersona("Carlos","Araujo",222);
    Persona p3 = crearPersona("Lionel","Messi",532);

    ListaEnc lista = crearLista();

    insertarInicio(lista,crearDato(p1));
    insertarInicio(lista,crearDato(p2));
    insertarInicio(lista,crearDato(p3));

    /*Dato p;
    obtenerElemento(lista,&p,1);
    mostrarPersona(p->persona);*/

    imprimir(lista);

    /*printf("\n---------- ORDENADO ------------\n");
    ordenarLista(lista);
    imprimir(lista);

    printf("\nEstoy buscando el numero 222 -------> %d\n",buscarUnDato(lista,222));*/



    return 0;
}
