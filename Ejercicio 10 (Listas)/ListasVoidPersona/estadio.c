#include "persona.h"
#include "listaVoid.h"
#include "motivos.h"
#include "estadio.h"
#include <stdio.h>
#include <stdlib.h>

struct EstadioEstructura{

char nombre[20];
int capacidad;
Lista listaPersonas;

};

Estadio crearEstadio(char n[20], int c){

Estadio e = malloc(sizeof(struct EstadioEstructura));

strcpy(e->nombre, n);
e->capacidad = c;

e->listaPersonas = crearLista(sizeof(Persona));

return e;
};

void mostrarEstadio (Estadio e){

printf("ESTADIO------->%s<--------\nCAPACIDAD:------->%d<--------\n", e->nombre, e->capacidad);

imprimirListaPersonas(e->listaPersonas);

};

Lista getListaPersonas(Estadio e){

return e->listaPersonas;

}
