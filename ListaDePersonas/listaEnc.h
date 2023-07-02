#ifndef LISTAENC_H_INCLUDED
#define LISTAENC_H_INCLUDED

#include "dato.h"

struct nodoE;
typedef struct nodoE * Nodo;

struct listaEncE;
typedef struct listaEncE * ListaEnc;

ListaEnc crearLista();

Nodo crearNodo(Dato p,Nodo prox);

int insertarInicio(ListaEnc lista,Dato p);
int insertar(ListaEnc lista,Dato p,int pos);
int insertarFin(ListaEnc lista,Dato p);

int removerInicio(ListaEnc lista,Dato * p);
int remover(ListaEnc lista,Dato * p,int pos);
int removerFin(ListaEnc lista,Dato * p);

int liberarLista(ListaEnc lista);
int estaVacio(ListaEnc lista);
int obtenerElemento(ListaEnc lista,Dato * p, int pos);
int obtenerTamanio(ListaEnc lista, int * tam);
void imprimir(ListaEnc lista);

#endif // LISTAENC_H_INCLUDED
