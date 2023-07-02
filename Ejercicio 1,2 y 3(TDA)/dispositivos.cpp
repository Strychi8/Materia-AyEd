#include <iostream>
#include "dispositivos.h"
#include "cstring"

struct dispositivoE{
  char tipo[40];
  char marca[40];
  int precio;
  int memoria;
};

Dispositivo crearDispositivoTeclado(){

  char auxTipo[40];
  char auxMarca[40];
  int auxPrecio;
  int auxMemoria;

  printf("Ingrese el tipo de dispositivo:\n");
  fflush(stdin);
  gets(auxTipo);

  printf("Ingrese la marca:\n");
  fflush(stdin);
  gets(auxMarca);
  printf("Ingrese el precio:\n");
  scanf("%d",&auxPrecio);
  printf("Ingrese la memoria:\n");
  scanf("%d",&auxMemoria);

  return crearDispositivo(auxTipo,auxMarca,auxPrecio,auxMemoria);
}

Dispositivo crearDispositivo(char t[40],char m[40],int p,int memory){

   Dispositivo d = new dispositivoE;

   strcpy(d->tipo,t);
   strcpy(d->marca,m);
   d->precio = p;
   d->memoria = memory;

   return d;
}

void mostrarDispositivo(Dispositivo d){

   printf("\nTIPO: %s\n",d->tipo);
   printf("MARCA: %s\n",d->marca);
   printf("PRECIO: %d\n",d->precio);
   printf("MEMORIA: %d\n",d->memoria);

}

char * getTipo(Dispositivo d){
   return d->tipo;
}
char * getMarca(Dispositivo d){
  return d->marca;
}
int getPrecio(Dispositivo d){
  return d->precio;
}
int getMemoria(Dispositivo d){
  return d->memoria;
}

void setTipo(Dispositivo d,char nuevoTipo[40]){
  strcpy(d->tipo,nuevoTipo);
}
void setMarca(Dispositivo d,char nuevaMarca[40]){
  strcpy(d->marca,nuevaMarca);
}
void setPrecio(Dispositivo d,int nuevoPrecio){
  d->precio = nuevoPrecio;
}
void setMemoria(Dispositivo d,int nuevaMemoria){
  d->memoria = nuevaMemoria;
}
