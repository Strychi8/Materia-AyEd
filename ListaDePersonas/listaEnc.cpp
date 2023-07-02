#include <iostream>
#include "listaEnc.h"
#include "cstring"
#define TRUE 1
#define FALSE 0

#define OK 1
#define ESTRUCTURA_NO_INICIALIZADA -1
#define ESTRUCTURA_VACIA -2
#define INDICE_INVALIDO -3
#define PARAMETRO_INVALIDO -4

struct nodoE{
   Dato p;
   Nodo proximo;
};


struct listaEncE{
   int tam;
   Nodo inicio;
};


ListaEnc crearLista(){

   ListaEnc lista = new listaEncE;

   if (lista == NULL){
        return NULL;
   }

   lista->tam = 0;
   lista->inicio = NULL;

   return lista;
}

Nodo crearNodo(Dato p,Nodo prox){

   Nodo nodo = new nodoE;

  if(nodo == NULL){//Si el nodo es igual a NULL=0 se retorna a 0
    return NULL;
  }
  nodo->p = p;
  nodo->proximo = prox;

  return nodo;

}

int insertarInicio(ListaEnc lista,Dato p){

   if(lista == NULL){
     return ESTRUCTURA_NO_INICIALIZADA;
   }
   Nodo nuevoNodo = crearNodo(p,lista->inicio);

   if(nuevoNodo == NULL){
     return ESTRUCTURA_NO_INICIALIZADA;
   }
   lista->inicio = nuevoNodo;
   lista->tam++;

   return OK;

}
int insertar(ListaEnc * lista,Dato p,int pos);
int insertarFin(ListaEnc * lista,Dato p);

int removerInicio(ListaEnc * lista,Dato * p);
int remover(ListaEnc * lista,Dato * p,int pos);
int removerFin(ListaEnc * lista,Dato * p);

int liberarLista(ListaEnc * lista);

int estaVacio(ListaEnc lista){
  if(lista == NULL){
    return ESTRUCTURA_NO_INICIALIZADA;
  }
  if(lista->inicio == NULL){
     return TRUE;
  }
  return FALSE;

}

int obtenerElemento(ListaEnc lista,Dato * p, int pos){
   if(lista == NULL){
     return ESTRUCTURA_NO_INICIALIZADA;
   }
   if(estaVacio(lista)){
     return ESTRUCTURA_VACIA;
   }
   if(pos<0 || pos>=lista->tam){
     return INDICE_INVALIDO;
   }
   if(p == NULL){
     return PARAMETRO_INVALIDO;
   }
   Nodo aux;
   aux = lista->inicio;
   for(int i=0; i<pos; i++){
     aux = aux->proximo;
   }
   *p = aux->p;

   return OK;
}
int obtenerTamanio(ListaEnc lista, int * tam){

   if(lista == NULL){
     return ESTRUCTURA_NO_INICIALIZADA;
   }
   if(tam == NULL){
     return PARAMETRO_INVALIDO;
   }
   *tam = lista->tam;//si pongo lista->inicio pondra un error de invalid conversion

   return OK;

}

void imprimir(ListaEnc lista){

   int cantidadDeElementos;

   obtenerTamanio(lista,&cantidadDeElementos);
   printf("\n");

   for(int i=0; i<cantidadDeElementos; i++){
      Dato p1;
      obtenerElemento(lista,&p1,i);
      mostrarPersona(p1->persona);
   }
   printf("\n");

}


