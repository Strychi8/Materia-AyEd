#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

#include "moneda.h"

struct nodoPilaE;
typedef struct nodoPilaE * PtroNodoPila;

struct pilaE;
typedef struct pilaE * Pila;

/* Definicion de Funciones Auxiliares */
PtroNodoPila crearNodoPila(Moneda m);
void eliminarNodoPila(Pila pila);

/* Definicion de Primitivas */
Pila crearPila();
PtroNodoPila finPila();
bool pilaVacia(Pila pila);
PtroNodoPila cima(Pila pila);
void agregar(Pila pila,Moneda m);
void sacar(Pila pila);
void eliminarPila(Pila pila);
void imprimirPila(Pila pila);

#endif // PILA_H_INCLUDED
