#include <iostream>
#include "cola.h"


struct nodoColaE{
   Estudiante estudiante;
   PtroNodoCola prox;
};


struct colaE{
   PtroNodoCola primerEstudiante;
   PtroNodoCola ultimoEstudiante;
};

/* Implementacion de Funciones Auxiliares */

PtroNodoCola crearNodoCola(Estudiante e){

  PtroNodoCola punteroAux = new nodoColaE;

  punteroAux->estudiante = e;
  punteroAux->prox = NULL;

  return punteroAux;
}
void eliminarNodoCola(Cola cola){

  PtroNodoCola punteroExPrimero;

  if(!colaVacia(cola)){
     punteroExPrimero = cola->primerEstudiante;
     cola->primerEstudiante = colaFrente(cola)->prox;

     delete punteroExPrimero;
  }

}

/* Implementacion de Primitivas */

Cola crearCola(){

  Cola cola = new colaE;

  cola->primerEstudiante = finCola();
  cola->ultimoEstudiante = finCola();

  return cola;
}

PtroNodoCola finCola(){
   return NULL;
}

bool colaVacia(Cola cola){
  return (cola->primerEstudiante == finCola());
}

PtroNodoCola colaFrente(Cola cola){
  return cola->primerEstudiante;
}

PtroNodoCola colaFin(Cola cola){
  return cola->ultimoEstudiante;
}

void encolar(Cola cola, Estudiante e){

  PtroNodoCola nuevoNodo = crearNodoCola(e);

  if(colaVacia(cola)){
    cola->primerEstudiante = nuevoNodo;
    cola->ultimoEstudiante = nuevoNodo;
  }else{
    cola->ultimoEstudiante->prox = nuevoNodo;
    cola->ultimoEstudiante = nuevoNodo;
  }
}

void desencolar(Cola cola){

  colaFrente(cola)->estudiante;

  if(!colaVacia(cola)){
    eliminarNodoCola(cola);
  }


}

void eliminarCola(Cola cola){

  while(!colaVacia(cola)){
     eliminarNodoCola(cola);
  }
}

void imprimirCola(Cola cola){

  PtroNodoCola auxNodo;
  auxNodo = cola->primerEstudiante;

  printf("----------------- Cola de Estudiantes ----------------\n");
  while(auxNodo != NULL){
    mostrarEstudiante(auxNodo->estudiante);
    auxNodo = auxNodo->prox;
  }

}
