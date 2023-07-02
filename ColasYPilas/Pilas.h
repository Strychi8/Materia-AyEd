#ifndef PILAS_H_INCLUDED
#define PILAS_H_INCLUDED

/* Definiciones de Tipos de Datos */

struct NodoPilaE;
typedef NodoPilaE * PtrNodoPila;

struct PilaE;
typedef struct PilaE * Pila;

/* Funciones Auxiliares */

PtrNodoPila crearNodoPila(int dato);
void eliminarNodoPila(Pila pila);

/* Definicion de Primitivas */

Pila crearPila();

PtrNodoPila finPila();

bool pilaVacia(Pila pila);

PtrNodoPila cima(Pila pila);

void agregar(Pila pila,int dato);

int sacar(Pila pila);

void eliminarPila(Pila pila);

void imprimirPila(Pila pila);

#endif // PILAS_H_INCLUDED
