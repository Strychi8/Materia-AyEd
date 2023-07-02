#include "iostream"
#include "persona.h"
#include <cstring>


struct personaE{
   char nombre[40];
   char apellido[40];
   int dni;
   Dispositivo dispositivos[TAM];
   FechaNacimiento fechaNacimiento;

};
Persona crearPersonaTeclado(){
   char auxNombre[40];
   char auxApellido[40];
   int auxDni;
   FechaNacimiento f;
   Dispositivo d[TAM];

   printf("\nIngrese el nombre:\n");
   fflush(stdin);
   gets(auxNombre);
   printf("\nIngrese el apellido:\n");
   fflush(stdin);
   gets(auxApellido);
   printf("\nIngrese el dni:\n");
   scanf("%d",&auxDni);


  return crearPersona(auxNombre,auxApellido,auxDni,d,f);
}
Persona crearPersona(char nom[40],char ape[40],int dn,Dispositivo d[], FechaNacimiento f){

  Persona p = new personaE;

  strcpy(p->nombre,nom);
  strcpy(p->apellido,ape);
  p->dni = dn;
  p->fechaNacimiento = f;
  for(int i=0; i<TAM; i++){
      p->dispositivos[i] = d[i];
  }


  return p;
}
void mostrarPersona(Persona p){
  printf("\nNOMBRE: %s\n",p->nombre);
  printf("APELLIDO: %s\n",p->apellido);
  printf("DNI: %d\n",p->dni);

  mostrarFechaNacimiento(p->fechaNacimiento);
  printf("\n-------------- DISPOSITIVOS TECNOLOGICOS ---------------------\n");
  for(int i=0; i<TAM; i++){
    if(getPrecio(p->dispositivos[i]) != -1){
     mostrarDispositivo(p->dispositivos[i]);
    }
  }

  printf("\n\n");
}

char * getNombre(Persona p){
  return p->nombre;
}
char * getApellido(Persona p){
  return p->apellido;
}
int getDni(Persona p){
  return p->dni;
}

void setNombre(Persona p,char nuevoNombre[40]){
  strcpy(p->nombre,nuevoNombre);
}
void setApellido(Persona p,char nuevoApellido[40]){
  strcpy(p->apellido,nuevoApellido);
}
void setDni(Persona p,int nuevoDni){
  p->dni = nuevoDni;
}


