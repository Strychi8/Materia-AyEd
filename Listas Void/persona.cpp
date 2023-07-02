#include <iostream>
#include "persona.h"
#include <cstring>


struct personaE{

   char nombre[40];
   float peso;

};


Persona crearPersona(char n[40],float pe){

   Persona p = new personaE;

   strcpy(p->nombre,n);
   p->peso = pe;

   return p;
}
void mostrarPersona(Persona p){

   printf("\nNombre: %s\n",p->nombre);
   printf("Peso: %.2f\n",p->peso);

}
