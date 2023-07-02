#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED

//Grafo
struct GrafoE;
typedef struct GrafoE * Grafo;
//Nodo del grafo
struct NodoE;
typedef struct NodoE * Nodo;
//Creacion del nodo
Nodo crearNodo(int v);
//Primitivas del Grafo
Grafo crearGrafo(int vertices);
void agregarRelacion(Grafo grafo,int origen,int destino);
//Mostrar el grafo en codigo y en texto
void mostrarGrafo(Grafo grafo);
void mostrarGrafoText(Grafo grafo,int opcion);
//Recorrido en anchura del grafo
void bfs(Grafo grafo,int startVertex);
//Recorrido en profundidad del grafo
void dfs(Grafo grafo,int vertex);

#endif // GRAFO_H_INCLUDED
