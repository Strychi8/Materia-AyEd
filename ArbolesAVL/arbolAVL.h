#ifndef ARBOLAVL_H_INCLUDED
#define ARBOLAVL_H_INCLUDED

struct ArbolE;
typedef struct ArbolE * ArbolAVL;

int insertar(ArbolAVL * un_arbol,int dato);
int buscar(ArbolAVL un_arbol,int dato);
int eliminar(ArbolAVL * un_arbol,int dato);
void mostrar(ArbolAVL un_arbol);

int altura_arbolavl(ArbolAVL un_arbol);

void balancear_arbolAvl(ArbolAVL * un_arbol);
int balanceo(ArbolAVL un_arbol);

int rotar_derecha(ArbolAVL * un_arbol);
int rotar_izquierda(ArbolAVL * un_arbol);

int reordenar(ArbolAVL * un_arbol,ArbolAVL * aux_arbol);

#endif // ARBOLAVL_H_INCLUDED
