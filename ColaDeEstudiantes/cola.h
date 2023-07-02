#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

#include "estudiante.h"

struct nodoColaE;
typedef struct nodoColaE * PtroNodoCola;

struct colaE;
typedef struct colaE * Cola;

/* Definicion de Funciones Auxiliares */

PtroNodoCola crearNodoCola(Estudiante e);
void eliminarNodoCola(Cola cola);

/* Definicion de Primitivas */

Cola crearCola();

PtroNodoCola finCola();

bool colaVacia(Cola cola);

PtroNodoCola colaFrente(Cola cola);

PtroNodoCola colaFin(Cola cola);

void encolar(Cola cola, Estudiante e);

void desencolar(Cola cola);

void eliminarCola(Cola cola);

void imprimirCola(Cola cola);



#endif // COLA_H_INCLUDED
