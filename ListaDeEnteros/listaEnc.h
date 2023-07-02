#ifndef LISTAENC_H_INCLUDED
#define LISTAENC_H_INCLUDED
#define TRUE 1
#define FALSE 0
#define ESTRUCTURA_NO_INICIALIZADA -1
#define ESTRUCTURA_VACIA -2
#define PARAMETRO_INVALIDO -3
#define INDICE_INVALIDO -4

//No hago un .h y un .c para Nodo porque tendre 2 renglones y seria hacer
//archivos que no necesito
struct NodoE; //int(dato), siguiente
typedef struct NodoE * Nodo;

//Todas las funcionalidades que haga estan solo en la lista no en el nodo
struct ListaEncE;
typedef struct ListaEncE * ListaEnc; //Lista --- inicio-primer nodo-tam

//Constructor de Lista
//Pre: Necesitamos definir un tipo de dato estructura de ListaEncE a un puntero ListaEnc
//Post: Crea una lista
ListaEnc crearLista();

//Constructor de Nodo
//PRE: Necesitamos crear un Nodo y declarar una variable dato
//POST: Crea un nodo
Nodo crearNodo(int dato,Nodo prox);

//Insertar en la Lista (pos - ini - fin)
//Depende con lo que trabajes
//PRE: Necesitamos crear una lista y declarar una variable dato
//POST: Agregamos un dato en el inicio de la lista
int insertarInicio(ListaEnc lista,int dato);
//PRE: Necesitamos crear la lista y declarar una variable dato y su posicion
//POST: Agregamos un dato en dicha posicion de la lista
int insertar(ListaEnc lista,int dato,int pos);
//PRE: Necesitamos crear la lista y declarar un dato
//POST: Agregamos un dato en el final en la lista
int insertarFin(ListaEnc lista,int dato);

//Eliminar en la Lista
//PRE: Necesitamos crear la lista y declara un puntero a dato
//POST: Eliminamos el primer dato de la lista
int removerInicio(ListaEnc lista,int * dato);
//PRE: Necesitamos crear la lista y declarar un puntero a dato y la posicion de ese dato
//POST: Eliminamos un dato en dicha posicion de la lista
int remover(ListaEnc lista,int * dato,int pos);
//PRE: Necesitamos crear la lista y declarar un puntero a dato
//POST: Eliminamos el ultimo dato de la lista
int removerFin(ListaEnc lista,int * dato);


//PRE: Necesitamos crear antes la lista
//POST: Liberamos la memoria de la lista
int liberarLista(ListaEnc lista);
//PRE: Necesitamos crear antes la lista
//POST: Muestra si esta o no vacia la lista, pone 1 si esta vacia y 0 si no esta vacia
int estaVacio(ListaEnc lista);
//PRE: Necesitamos crear antes la lista, declarar un puntero a dato y la posicion de ese dato
//POST: Mostramos el elemento de nuesta lista
int obtenerElemento(ListaEnc lista,int * dato,int pos);
//PRE: Necesitamos crear antes la lista y declarar un puntero a tamaño
//POST: Mostramos el tamaño de nuestra lista
int obtenerTamanio(ListaEnc lista,int * tam);
//PRE: Necesitamos crear antes la lista
//POST: Mostramos la lista por pantalla
void imprimir(ListaEnc lista);

void ordenarListaPorBurbuja (ListaEnc lista);
int busquedaSecuencial (ListaEnc lista, int datoBuscado);



#endif // LISTAENC_H_INCLUDED
