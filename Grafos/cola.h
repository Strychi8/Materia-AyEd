#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED
#define SIZE 40

struct ColaE;
typedef struct ColaE * Cola;

//Primitivas de la cola
Cola crearCola();
void encolar(Cola cola, int dato);
int desencolar(Cola cola);
//Funciones opcionales
int colaVacia(Cola cola);
void mostrarCola(Cola cola);

#endif // COLA_H_INCLUDED
