#include <iostream>
#include "Pilas.h"


struct NodoPilaE {
    int dato; // dato almacenado
    PtrNodoPila prox; // puntero al siguiente
};


/* Tipo de Estructura de la Pila */
struct PilaE{
    PtrNodoPila primero;      // puntero al primer nodo de la pila
};

/* Funciones auxiliares */

PtrNodoPila crearNodoPila(int dato) {

  /* reserva memoria para el nodo y luego completa sus datos */
  PtrNodoPila ptrAux = new NodoPilaE;

  ptrAux->dato = dato;
  ptrAux->prox = NULL;

  return ptrAux;
}
void eliminarNodoPila(Pila pila) {

  PtrNodoPila ptrExCima;
  /* verifica que la pila no esté vacia y que nodo no sea fin*/
  if (! pilaVacia(pila)) {
     ptrExCima = cima(pila);
     pila->primero = cima(pila)->prox;
     // Si el dato es un TDA, acá habría que llamar al destructor.
     delete ptrExCima;
    }
}

/* Implementacion de Primitivas */

Pila crearPila(){

  Pila pila = new PilaE;

  pila->primero = finPila();

  return pila;
}

PtrNodoPila finPila(){
   return NULL;
}

bool pilaVacia(Pila pila){
   return(pila->primero == finPila());
}

PtrNodoPila cima(Pila pila){
   return pila->primero;
}

void agregar(Pila pila,int dato){

   PtrNodoPila nuevoNodo = crearNodoPila(dato);
   nuevoNodo->prox = pila->primero;
   pila->primero = nuevoNodo;

}

int sacar(Pila pila){
   int dato = 0;
   PtrNodoPila auxNodo = cima(pila);

   if(!pilaVacia(pila)){
    dato = auxNodo->dato;
    eliminarNodoPila(pila);
   }
   return dato;
}

void eliminarPila(Pila pila){

  while((!pilaVacia(pila))){
    eliminarNodoPila(pila);
  }

}

void imprimirPila(Pila pila){

   PtrNodoPila auxNodo = pila->primero;

   printf("[");
   while(auxNodo != NULL){
      printf(" %d ",auxNodo->dato);
      auxNodo = auxNodo->prox;
   }
   printf("]");
}
