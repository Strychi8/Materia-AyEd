#include <iostream>
#include "arbolAVL.h"

//Estructura del arbol, es igual al ABB
//Tambien se puede crear una variable extra para guardar el peso de cada nodo
//Pero hay que recalcularlo para cada nodo luego de cada insert y delete
struct ArbolE{

   int dato;
   ArbolAVL izquierda;
   ArbolAVL derecha;
   //int equilibrio

};


int insertar(ArbolAVL * un_arbol,int dato){

  if(*un_arbol == NULL){//Si el arbol es nulo reservo memoria
    *un_arbol = ((ArbolAVL) new ArbolE);
    if(*un_arbol == NULL){//En caso de que no pude reservar,Error 0
        return 0;
    }
    (*un_arbol)->dato = dato;
    (*un_arbol)->izquierda = NULL;
    (*un_arbol)->derecha = NULL;
    //(*un_arbol)->equilibrio = balanceo(*un_arbol);
  }
  else{//Si el arbol no era null, verifico donde va el dato
     if((*un_arbol)->dato < dato){
        insertar(&((*un_arbol)->derecha),dato);
     }
     else{//inserto en el subarbol izquierdo
        insertar(&((*un_arbol)->izquierda),dato);
     }
  }
   //Luego de insertar hago el balanceo
   balancear_arbolAvl(un_arbol);

   return 1;

}

int buscar(ArbolAVL un_arbol,int dato){
  //Si es nulo no hay nada que buscar
  if(un_arbol == NULL){
     return 0;
  }
  //o lo encontre
  if(un_arbol->dato == dato){
     return 1;
  }
  //Me muevo por las ramas segun < 0 >
  if(un_arbol->dato < dato){
     return buscar(un_arbol->derecha,dato);
  }
  else{
    return buscar(un_arbol->izquierda,dato);
  }

}

int eliminar(ArbolAVL * un_arbol,int dato){

   ArbolAVL * aux = NULL;

   //Si el arbol es nulo no hay nada que eliminar
   if(un_arbol == NULL){
     return 0;
   }

   //Si en el nodo esta el dato
   if((*un_arbol)->dato == dato){
        //En caso que no tenga hijo derecho
     if((*un_arbol)->derecha == NULL){
         //Ubico al hijo izquierdo y balanceo
        (*un_arbol) = (*un_arbol)->izquierda;
        balancear_arbolAvl(un_arbol);
     }//Si tiene hijo derecho uso a ese como hijo y balanceo
     else if((*un_arbol)->izquierda == NULL){
        (*un_arbol) = (*un_arbol)->derecha;
         balancear_arbolAvl(un_arbol);
     }
     else{ //Si tiene derecho y tambien tenia derecho
        aux = un_arbol;
        reordenar(&((*un_arbol)->izquierda),aux);
        balancear_arbolAvl(&((*un_arbol)->izquierda));
       }
      }

    else if((*un_arbol)->dato < dato){
        if((*un_arbol)->derecha == NULL){
            return 0;
        }
        return eliminar(&((*un_arbol)->derecha),dato);
    }
    else{
        if((*un_arbol)->izquierda == NULL){
            return 0;
        }
        return eliminar(&((*un_arbol)->izquierda),dato);
    }

    return 1;

}

void mostrar(ArbolAVL un_arbol){
   if(un_arbol == NULL){
      return;
   }
   printf(" \t%d ",un_arbol->dato);
   mostrar(un_arbol->derecha);
   mostrar(un_arbol->izquierda);
}

int altura_arbolavl(ArbolAVL un_arbol){
   int alturaIzq = 0;
   int alturaDer = 0;

   if(un_arbol == NULL){
     return 0;
   }

   alturaIzq = altura_arbolavl(un_arbol->izquierda);
   alturaDer = altura_arbolavl(un_arbol->derecha);

   if(alturaDer > alturaIzq){
      return alturaDer + 1;
   }
   else{
      return alturaIzq + 1;
   }
}

void balancear_arbolAvl(ArbolAVL * un_arbol){

  int aux_balance = 0;
  if(un_arbol == NULL){
     return;
  }
  //o usar if((*un_arbol)->equilibrio > 1);
  aux_balance = balanceo(*un_arbol);
  if(aux_balance > 1){
     if(balanceo((*un_arbol)->derecha) >= 1){
        rotar_izquierda(un_arbol);
     }
     else{
        rotar_derecha(&((*un_arbol)->derecha));
        rotar_izquierda(un_arbol);
     }
  }
  else if(aux_balance < -1){
    if(balanceo((*un_arbol)->izquierda) <= -1){
        rotar_derecha(un_arbol);
    }
    else{
        rotar_izquierda(&((*un_arbol)->izquierda));
        rotar_derecha(un_arbol);
    }
  }

}

int balanceo(ArbolAVL un_arbol){

  int altura = 0;
  if(un_arbol == NULL){
    return 0;
  }
  altura = altura_arbolavl(un_arbol->derecha) - altura_arbolavl(un_arbol->izquierda);

  return altura;

}
int rotar_derecha(ArbolAVL * un_arbol){

  ArbolAVL aux = NULL;
  ArbolAVL raiz = NULL;
  ArbolAVL raiz_nueva = NULL;

  if(un_arbol == NULL){
    return 0;
  }

  raiz = (*un_arbol);
  raiz_nueva = (*un_arbol)->izquierda;
  aux = (*un_arbol)->izquierda->derecha;

  (*un_arbol) = raiz_nueva;
  raiz_nueva->derecha = raiz;
  raiz->izquierda = aux;

  return 1;

}
int rotar_izquierda(ArbolAVL * un_arbol){

  ArbolAVL aux = NULL;
  ArbolAVL raiz = NULL;
  ArbolAVL raiz_nueva = NULL;

  if(un_arbol == NULL){
    return 0;
  }

  raiz = (*un_arbol);
  raiz_nueva = (*un_arbol)->derecha;
  aux = (*un_arbol)->derecha->izquierda;

  (*un_arbol) = raiz_nueva;
  raiz_nueva->izquierda = raiz;
  raiz->derecha = aux;

  return 1;

}

int reordenar(ArbolAVL * un_arbol,ArbolAVL * aux_arbol){

   if((*un_arbol)->derecha == NULL){
     (*aux_arbol)->dato = (*un_arbol)->dato;
      *un_arbol = (*un_arbol)->izquierda;
   }else{
     reordenar(&(*un_arbol)->derecha,aux_arbol);
   }

   return 1;

}
