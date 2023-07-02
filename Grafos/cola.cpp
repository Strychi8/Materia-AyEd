#include <iostream>
#include "cola.h"

struct ColaE{
   int items[SIZE];
   int primero;
   int ultimo;
};

Cola crearCola(){
    Cola cola = new ColaE;
    cola->primero = 0;
    cola->ultimo = 0;
    return cola;
}
int colaVacia(Cola cola){
   if(cola->primero == 0){
      return -1;
   }else{
       return 1;
    }
}
void encolar(Cola cola, int dato){
   if(cola->ultimo == SIZE-1){
      printf("\nCOLA COMPLETA!!");
   }else{
      if(cola->primero == 0){
         cola->primero = -1;
         cola->primero++;
         cola->items[cola->ultimo] = dato;
      }
   }
}
int desencolar(Cola cola){
   int item;
  if (colaVacia(cola)) {
    printf("Cola  vacia!!!");
    item = -1;
  } else {
    item = cola->items[cola->primero];
    cola->primero++;
    if (cola->primero > cola->ultimo) {
      //printf("Reinicio de cola --> ");
      cola->primero = cola->ultimo = -1;
    }
  }
  return item;
}

void mostrarCola(Cola cola){
   int i = cola->primero;

  if (colaVacia(cola)) {
    printf("Cola esta vacia");
  } else {
    printf("\nLa cola contiene \n");
    for (i=cola->primero; i<cola->ultimo+1; i++) {
      printf("%d ", cola->items[i]);
    }
  }
}
