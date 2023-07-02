#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED

using namespace std;

struct NodoE;
typedef struct NodoE * Nodo;

Nodo nuevoNodo(int dato);

void insertar(Nodo nodo, int dato);

void preOrden(Nodo nodo);
void inOrden(Nodo nodo);
void postOrden(Nodo nodo);

//Opcional
Nodo buscar(Nodo nodo, int dato);
int calcularAltura(Nodo nodo);


#endif // ARBOL_H_INCLUDED
