#include <iostream>
#include "cliente.h"
#include <cstring>

struct clienteE{

  int dni;
  char nombre[40];

};

Cliente crearCliente(int d,char nom[40]){

   Cliente c = new clienteE;

   c->dni = d;
   strcpy(c->nombre,nom);

   return c;

}
void mostrarCliente(Cliente c){
    printf("\n---------- CLIENTE ------------\n");
    printf("DNI: %d\n",c->dni);
    printf("NOMBRE: %s\n",c->nombre);
}
