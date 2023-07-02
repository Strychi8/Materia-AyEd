#include <iostream>
#include "persona.h"
#include <cstring>

struct personaE{
    char nombre[40];
    char apellido[40];
    int dni;

};

Persona crearPersonaTeclado(){

   char auxNombre[40];
   char auxApellido[40];
   int auxDni;

   printf("Ingrese su nombre:\n");
   fflush(stdin);
   gets(auxNombre);
   //strcpy(persona->nombre,auxNombre);

   printf("Ingrese su apellido:\n");
   fflush(stdin);
   gets(auxApellido);
   //strcpy(persona->apellido,auxApellido);

   printf("Ingrese su dni:\n");
   scanf("%d",&auxDni);


   return crearPersona(auxNombre,auxApellido,auxDni);
}

Persona crearPersona(char nom[40],char ape[40],int d){

    Persona p = new personaE;

    strcpy(p->nombre,nom);
    strcpy(p->apellido,ape);
    p->dni = d;

    return p;
}

void mostrarPersona(Persona p){

   printf("\n----- Persona -----\n");
   printf("\nNombre: %s\nApellido: %s\nDNI: %d\n",p->nombre,p->apellido,p->dni);

}

int getDni(Persona p){
   return p->dni;
}
char * getNombre(Persona p){
   return p->nombre;
}
char * getApellido(Persona p){
   return p->apellido;
}

void setDni(Persona p,int nuevoDni){
   p->dni=nuevoDni;
}
void setNombre(Persona p,char nuevoNombre[40]){
   strcpy(p->nombre,nuevoNombre);
}
void setApellido (Persona p,char nuevoApellido[40]){
   strcpy(p->apellido,nuevoApellido);
}
