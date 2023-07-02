#include <iostream>
#include <cstring>
#include "estudiante.h"

struct estudianteE{

    char nombre[CANTCARACTERES];
    char apellido[CANTCARACTERES];
    int dni;

};

Estudiante crearEstudiante(char nom[CANTCARACTERES],char ape[CANTCARACTERES],int d){

  Estudiante e = new estudianteE;

  strcpy(e->nombre,nom);
  strcpy(e->apellido,ape);
  e->dni = d;

  return e;
}

void mostrarEstudiante(Estudiante e){

  printf("NOMBRE: %s\n",e->nombre);
  printf("APELLIDO: %s\n",e->apellido);
  printf("DNI: %d\n\n",e->dni);

}


char * getNombre(Estudiante e){
   return e->nombre;
}

char * getApellido(Estudiante e){
  return e->apellido;
}

int getDni(Estudiante e){
  return e->dni;
}
