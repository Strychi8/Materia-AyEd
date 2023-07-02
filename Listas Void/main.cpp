#include <iostream>
#include "listaVoid.h"
#include "persona.h"

using namespace std;

int main()
{
    //Codigo de Listas Void (no esta muy pulido, pero es con la sintaxis que trabajamos recientemente

    ListaVoid listaPersonas = crearLista(sizeof(Persona));

    Persona p = crearPersona("Tomas",81.67);
    insertarInicio(listaPersonas,&p);
    p = crearPersona("Carlos",75.67);
    insertarInicio(listaPersonas,&p);
    p = crearPersona("Sebastian",79.67);
    insertarInicio(listaPersonas,&p);

    mostrarLista(listaPersonas);



    return 0;
}
