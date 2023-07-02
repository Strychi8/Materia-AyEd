#include "persona.h"
#include "listaVoid.h"
#include "motivos.h"
#include <stdio.h>
#include <stdlib.h>


struct PersonaEstructura{

    char nombre[20];
    char apellido[20];
    Lista listaMotivos;

};



Persona crearPersona(char  n[20], char a[20]){

    Persona persona = malloc(sizeof(struct PersonaEstructura));

    strcpy(persona->nombre, n);
    strcpy(persona->apellido, a);

    persona->listaMotivos = crearLista(sizeof(Motivos));

    return persona;


};

void mostrarPersona(Persona p){

    printf("\n---------PERSONA----------\n");
    printf("NOMBRE:  %s\nAPELLIDO:  %s\n", p->nombre, p->apellido);

    imprimirListaMotivos(p->listaMotivos);


};

char * getNombre(Persona p){

return p->nombre;

}
char * getApellido(Persona p){

return p->apellido;

}
Lista getListaRazones(Persona p){

return p->listaMotivos;

}
