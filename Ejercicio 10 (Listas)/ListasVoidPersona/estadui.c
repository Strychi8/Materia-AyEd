#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaVoid.h"
#include "persona.h"
#include "motivos.h"
#include "estadio.h"

struct EstadioEstructura{

char nombre[20];
int capacidad;

};

Estadio crearEstadio(char n[20], int c){

Estadio e = malloc(sizeof(struct EstadioEstructura));

strcpy(e->nombre, n);
e->capacidad = c;

return e;

};

void mostrarEstadio (Estadio e){

printf ("\nESTADIO: -------> %s\nCAPACIDAD: %d", e->nombre, e->capacidad);

};
