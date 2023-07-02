#include <iostream>

#include "Colas.h"


/* Tipo de Puntero a los Nodos de la Cola, el cual se usa para recorrer
   la Cola y acceder a sus Datos. */
struct NodoColaE {
    int dato; // dato almacenado
    PtrNodoCola prox; // puntero al proximo
};

/* Tipo de Estructura de la Cola */
struct ColaE{
    PtrNodoCola primero;      // puntero al primer nodo de la cola
    PtrNodoCola ultimo;       // puntero al ultimo nodo de la cola
};

PtrNodoCola crearNodoCola(int dato){

   PtrNodoCola auxNodo = new NodoColaE;

   auxNodo->dato = dato;
   auxNodo->prox = NULL;

   return auxNodo;
}

void eliminarNodoCola(Cola cola){

  PtrNodoCola ptrExPrimero;

   /* verifica que la cola no esté vacia y que nodo no sea fin*/
  if (! colaVacia(cola)) {

      ptrExPrimero = cola->primero;
      cola->primero = colaFrente(cola)->prox;

    // Si el dato es un TDA, acá habría que llamar al destructor.

    delete ptrExPrimero;
  }


}
/* Implementacion de Primitivas */
Cola crearCola (){

  Cola cola = new ColaE;

  cola->primero = finCola();
  cola->ultimo = finCola();

  return cola;
}

PtrNodoCola finCola(){

  return NULL;
}

bool colaVacia(Cola cola){

   return (cola->primero == finCola());
}

PtrNodoCola colaFrente(Cola cola){

   return cola->primero;
}

PtrNodoCola colaFin(Cola cola){

   return cola->ultimo;
}

void encolar(Cola cola, int dato){

   PtrNodoCola ptrNuevoNodo = crearNodoCola(dato);

   if (colaVacia(cola)){
     cola->primero = ptrNuevoNodo;
     cola->ultimo = ptrNuevoNodo;
   }else {
     cola->ultimo->prox = ptrNuevoNodo;
     cola->ultimo = ptrNuevoNodo;
   }
}

int desencolar(Cola cola){

  int dato = colaFrente(cola)->dato;

  if(!colaVacia(cola)){
    eliminarNodoCola(cola);
  }
  return dato;
}

void eliminarCola(Cola cola){

  while((!colaVacia(cola))){
      eliminarNodoCola(cola);
  }

}
void imprimirCola(Cola cola){

   PtrNodoCola auxNodo = cola->primero;

   printf("[");
   while(auxNodo!= NULL){
      printf(" %d ",auxNodo->dato);
      auxNodo = auxNodo->prox;
   }
   printf("]");
}
