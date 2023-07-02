#include <iostream>
#include "arbol.h"


struct NodoE{
  int dato;
  Nodo izquierda;
  Nodo derecha;

};

Nodo nuevoNodo(int dato){
   //Solicitar memoria
   Nodo nodo = new NodoE;
   //Asignar el dato e iniciar hojas
   nodo->dato = dato;
   nodo->izquierda = nodo->derecha = NULL;

   return nodo;
}

void insertar(Nodo nodo, int dato){
   //¿Izquierda o derecha?
   //Si es mayor va a la derecha
   if(dato > nodo->dato){
     //Tienes espacio a la derecha?
     if(nodo->derecha == NULL){
        nodo->derecha = nuevoNodo(dato);
     } else {
       //Si la derecha ya esta ocupada, recursividad
      insertar(nodo->derecha,dato);
     }
    }else{
        //Si no, a la izquierda
        if(nodo->izquierda == NULL){
            nodo->izquierda = nuevoNodo(dato);
        }else{
            //Si la izquierda ya esta ocupada, recursividad
           insertar(nodo->izquierda,dato);
         }
       }
}

void preOrden(Nodo nodo){

  if(nodo != NULL){
    printf(" %d ",nodo->dato);
    preOrden(nodo->izquierda);
    preOrden(nodo->derecha);
  }

}

void inOrden(Nodo nodo){

   if(nodo != NULL){
     inOrden(nodo->izquierda);
     printf(" %d ",nodo->dato);
     inOrden(nodo->derecha);

   }

}
void postOrden(Nodo nodo){

    if(nodo != NULL){
    postOrden(nodo->izquierda);
    postOrden(nodo->derecha);
    printf(" %d ",nodo->dato);
    }

}

Nodo buscar(Nodo nodo, int dato){

   if(nodo == NULL){
      return NULL;
   }

   if(nodo->dato == dato){
      return nodo;
   }

   else if(dato > nodo->dato){
     printf("No esta el %d != %d ---> DERECHA\n",dato,nodo->dato);
     return buscar(nodo->derecha, dato);
   }
   else{
     printf("No esta el %d != %d ---> IZQUIERDA\n",dato,nodo->dato);
     return buscar(nodo->izquierda, dato);
   }

}

int calcularAltura(Nodo nodo){
   if(nodo==NULL){
      return -1;
   }
   return 1 + max(calcularAltura(nodo->izquierda),calcularAltura(nodo->derecha));

}
