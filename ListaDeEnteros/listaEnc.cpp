#include <iostream>
#include "listaEnc.h"

struct NodoE{
    int dato;
    Nodo prox;// es un puntero
};

struct ListaEncE{
   int tam;
   Nodo inicio;
};

ListaEnc crearLista(){
    ListaEnc lista = new ListaEncE;//Reservamos memoria en new ListaEncE

    lista->tam = 0;//Inicializamos lista->tam a 0
    lista->inicio = NULL;//Inicializamos lista->inicio a NULL

    return lista;
}

Nodo crearNodo(int dato,Nodo prox){

      Nodo nodo = new NodoE;//Reservamos memoria

      nodo->dato = dato;
      nodo->prox = prox;

      return nodo;
}

int estaVacio(ListaEnc lista){

    //verificacion
    /*if(lista == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
    }*/
    //esta bien pero no tan bien
    if(lista->tam == 0){// o lista->inicio == NULL
        printf("Esta vacia - ");
        return TRUE;
    }else{
       printf("No esta Vacia - ");
     }
   return FALSE;

}

int insertarInicio(ListaEnc lista,int dato){

   //verificacion
    /*if(lista == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
    }*/
    //Cambiamos el puntero
   Nodo nuevoNodo = crearNodo(dato,lista->inicio);

   /*if(nuevoNodo == NULL){
       return ESTRUCTURA_NO_INICIALIZADA;
   }*/
   lista->inicio = nuevoNodo;
   lista->tam++;//incrementamos en 1 cada vez que insertamos

   return 1;
}
int insertar(ListaEnc lista,int dato,int pos){

    /*if(lista == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
    }
    if(pos<0 || pos>lista->tam){
        return INDICE_INVALIDO;
    }*/
    Nodo nuevoNodo;
    if(pos==0){
        return insertarInicio(lista,dato);
    }else{
       Nodo aux = lista->inicio;
       for(int i=0; i<pos-1; i++){//si no pongo pos-1 se me rompe el codigo
         aux=aux->prox;
       }
       nuevoNodo = crearNodo(dato,aux->prox);
       /*if(nuevoNodo == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
       }*/
       aux->prox = nuevoNodo;
    }
    lista->tam++;

    return 1;
}
int insertarFin(ListaEnc lista,int dato){
    return insertar(lista,dato,lista->tam);
}

int removerInicio(ListaEnc lista,int * dato){

    /* if(lista == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
     }
     if(estaVacio(lista)){
        return ESTRUCTURA_VACIA;
     }*/
     Nodo aux = lista->inicio;

     if(dato != NULL){
        *dato = aux->dato;
     }

     //parametro que pase por referencia
     *dato = aux->dato;
     lista->inicio = aux->prox;
     delete(aux);//liberamos la memoria
     aux = NULL;
     lista->tam--;

     return 1;
}

int remover(ListaEnc lista,int * dato,int pos){

   /*if(lista==NULL){
     return ESTRUCTURA_NO_INICIALIZADA;
   }
   if(estaVacio(lista)){
     return ESTRUCTURA_VACIA;
   }
   if(pos<0 || pos>=lista->tam){
     return INDICE_INVALIDO;
   }*/
   Nodo anterior,actual;

   if(pos==0){
     removerInicio(lista,dato);
   }else{
     anterior = NULL;
     actual = lista->inicio;
     for(int i=0; i<pos; i++){
        anterior = actual;
        actual = actual->prox;
     }
     anterior->prox = actual->prox;
     if(dato != NULL){
        *dato = actual->dato;
        delete(actual);
        actual = NULL;
     }
   }

   lista->tam--;
   return 1;
}

int removerFin(ListaEnc lista,int * dato){
   return remover(lista,dato,lista->tam-1);
}

int liberarLista(ListaEnc lista){

  /*if(lista == NULL){
    return ESTRUCTURA_NO_INICIALIZADA;
  }*/
  //elimina todos los elementos de la lista
  while(!estaVacio(lista)){
    remover(lista,NULL,0);
  }
  delete(lista);
  lista->inicio = NULL;//el tam ya quedo en 0 por los remove tam--

  return 1;
}

int obtenerElemento(ListaEnc lista,int * dato,int pos){

    /*if(estaVacio(lista)){
        return ESTRUCTURA_NO_INICIALIZADA;
    }
    if(pos<0 || pos>=lista->tam){
        *dato = ESTRUCTURA_NO_INICIALIZADA;
        return ESTRUCTURA_NO_INICIALIZADA;
    }
    if(dato == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
    }*/
    Nodo aux = lista->inicio;
    //se va moviendo desde el inicio,1 por 1,moviendose por los proximos
    //hasta que llega al valor de la posicion
    for(int i=0; i<pos; i++){
        aux=aux->prox;
    }
    *dato = aux->dato;//guarda en el puntero que recibimos el valor de ese nodo

    return 1;

}
int obtenerTamanio(ListaEnc lista,int * tam){

   /*if(lista == NULL){
     return ESTRUCTURA_NO_INICIALIZADA;
   }
   if(tam == NULL){
    return PARAMETRO_INVALIDO;
   }*/
   *tam = lista->tam;

   return 1;
}

void imprimir(ListaEnc lista){

   int cantidad;

   obtenerTamanio(lista,&cantidad);

   printf("[");
   for(int i=0; i<cantidad; i++){
    int cadaElemento;
    obtenerElemento(lista,&cadaElemento,i);
    printf(" %d ",cadaElemento);
   }
   printf("]\n");
}

void ordenarListaPorBurbuja (ListaEnc lista){

    int tam;
    obtenerTamanio(lista,&tam);

    Nodo auxNodo;

    for(int i=0; i<tam; i++){
        auxNodo = lista->inicio;
      for(int j=i+1; j<tam; j++){
         if(auxNodo->dato >= auxNodo->prox->dato){
              int aux = auxNodo->dato;
               auxNodo->dato = auxNodo->prox->dato;
              auxNodo->prox->dato = aux;
         }
            auxNodo = auxNodo->prox;
      }
    }
}

int busquedaSecuencial (ListaEnc lista, int datoBuscado){

   Nodo auxNodo = lista->inicio;
   int resultado = -1;//-1 si no lo encontro
   for (int i=0; i<lista->tam; i++){
    auxNodo = lista->inicio;
     for(int j=0; j<lista->tam; j++){
        if (auxNodo->dato == datoBuscado){
        resultado = j;
        }
      auxNodo = auxNodo->prox;
     }
   }
   return resultado;
}

