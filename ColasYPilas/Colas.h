#ifndef COLAS_H_INCLUDED
#define COLAS_H_INCLUDED

struct NodoColoE;
typedef struct NodoColaE * PtrNodoCola;

struct ColaE;
typedef struct ColaE * Cola;


/* Definicion de Funciones Auxiliares */

PtrNodoCola crearNodoCola(int dato);
void eliminarNodoCola(Cola cola);

/* Definicion de Primitivas */

Cola crearCola ();

PtrNodoCola finCola();

bool colaVacia(Cola cola);

PtrNodoCola colaFrente(Cola cola);

PtrNodoCola colaFin(Cola cola);

void encolar(Cola cola, int dato);

int desencolar(Cola cola);

void eliminarCola(Cola cola);

void imprimirCola(Cola cola);

#endif // COLAS_H_INCLUDED
