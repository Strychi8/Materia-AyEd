#include <iostream>

#include "pila.h"

struct nodoPilaE{

   Moneda moneda;
   PtroNodoPila prox;

};

struct pilaE{

  PtroNodoPila primero;

};

/* Implementacion de Funciones Auxiliares */
PtroNodoPila crearNodoPila(Moneda m){

   PtroNodoPila punteroAux = new nodoPilaE;

   punteroAux->moneda = m;
   punteroAux->prox = NULL;

   return punteroAux;
}
void eliminarNodoPila(Pila pila){

   PtroNodoPila punteroExPrimero;
   if(!pilaVacia(pila)){
     punteroExPrimero = cima(pila);
     pila->primero = cima(pila)->prox;

     delete punteroExPrimero;
   }

}

/* Implementacion de Primitivas */
Pila crearPila(){

   Pila pila = new pilaE;

   pila->primero = finPila();

   return pila;

}
PtroNodoPila finPila(){
  return NULL;
}
bool pilaVacia(Pila pila){
  return (pila->primero == finPila());

}
PtroNodoPila cima(Pila pila){
  return pila->primero;
}
void agregar(Pila pila,Moneda m){

  PtroNodoPila nuevoNodo = crearNodoPila(m);
  nuevoNodo->prox = pila->primero;
  pila->primero = nuevoNodo;

}
void sacar(Pila pila){

  PtroNodoPila nodo = cima(pila);

  if(!pilaVacia(pila)){
    Moneda m = nodo->moneda;
    eliminarNodoPila(pila);
  }
}
void eliminarPila(Pila pila){

  while(!pilaVacia(pila)){
     eliminarNodoPila(pila);
    }

}
void imprimirPila(Pila pila){

  PtroNodoPila auxNodo;
  auxNodo = pila->primero;

  printf("----------- PILA DE MONEDAS -------------\n");
  while(auxNodo != NULL){
    mostrarMoneda(auxNodo->moneda);
    auxNodo = auxNodo->prox;
  }

}
