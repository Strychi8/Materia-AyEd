#include <stdio.h>
#include <stdlib.h>
#include "listaVoid.h"
#include "persona.h"
#include "motivos.h"
#include "estadio.h"

int main()
{
    //creamos la lista de personas
    Lista listaPersonas = crearLista(sizeof(Persona));
    Estadio e = crearEstadio("El Coloso", 54000);

    Persona p1 = crearPersona("Matias", "Lopez");

    Motivos m = crearMotivo("Tenia Ganas");
    insertarInicio(getListaRazones(p1), &m);
    m = crearMotivo("Porque pinto");
    insertarInicio(getListaRazones(p1), &m);
    m = crearMotivo("No voy nunca");
    insertarInicio(getListaRazones(p1), &m);

    insertarInicio(getListaPersonas(e), &p1);

    p1 = crearPersona("Joel", "Perez");
    m = crearMotivo("Es divertido");
    insertarInicio(getListaRazones(p1), &m);
    m = crearMotivo("Hace mucho que no voy");
    insertarInicio(getListaRazones(p1), &m);
    m = crearMotivo("Es mi equipo favorito");
    insertarInicio(getListaRazones(p1), &m);

    insertarInicio(getListaPersonas(e), &p1);

    p1 = crearPersona("Alexis", "Alonso");
    m = crearMotivo("Por el estudio");
    insertarInicio(getListaRazones(p1), &m);
    m = crearMotivo("Se acaba de inaugurar");
    insertarInicio(getListaRazones(p1), &m);
    m = crearMotivo("porque soy Belgrano");
    insertarInicio(getListaRazones(p1), &m);

    insertarInicio(getListaPersonas(e), &p1);

    mostrarEstadio(e);


    return 0;
}
