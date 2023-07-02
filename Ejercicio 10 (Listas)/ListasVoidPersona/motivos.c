#include "motivos.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct EstructuraMotivos{

char motivosAsis[20];

};

Motivos crearMotivo(char m[20]){

Motivos mot = malloc(sizeof(struct EstructuraMotivos));

strcpy(mot->motivosAsis, m);

return mot;

}
void mostrarMotivos(Motivos m){

printf("\n%s", m->motivosAsis);

};
