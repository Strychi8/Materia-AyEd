#include <iostream>
#include <cstring>
#include "grafo.h"
#include "cola.h"

struct GrafoE{
    int numVertices;
    Nodo * adjLists;
    int * visited;
};

struct NodoE{
   int vertex;
   Nodo next;
};

Nodo crearNodo(int v){
   Nodo newNode = new NodoE;
   newNode->vertex = v;
   newNode->next = NULL;
   return newNode;
}

Grafo crearGrafo(int vertices){
   Grafo grafo = new GrafoE;

   grafo->numVertices = vertices;
   grafo->adjLists = (Nodo *) malloc(vertices * sizeof(Nodo));
   grafo->visited = (int *) malloc(vertices * sizeof(int));

   for(int i=0; i<vertices; i++){
      grafo->adjLists[i] = NULL;
      grafo->visited[i] = 0;
   }
   return grafo;
}

void agregarRelacion(Grafo grafo,int origen,int destino){
  //Add edge(borde) from origen a destino
  Nodo newNode = crearNodo(destino);
  newNode->next = grafo->adjLists[origen];
  grafo->adjLists[origen] = newNode;

  //Add edge(borde) from destino a origen
  newNode = crearNodo(origen);
  newNode->next = grafo->adjLists[destino];
  grafo->adjLists[destino] = newNode;
}

void mostrarGrafo(Grafo grafo){
   for(int v=0; v<grafo->numVertices; v++){
      Nodo aux = grafo->adjLists[v];
      printf("\n----> Lista de adyacencia del vertice: %d\n",v);
      while(aux){
          printf("-> %d / ",aux->vertex);
          aux = aux->next;
      }
      printf("\n");
   }
}

void mostrarGrafoText(Grafo grafo,int opcion){

   char dibujo[10] = "cloud";

   if(opcion == 2){
     strcpy(dibujo,"node");
   }
   if(opcion == 3){
     strcpy(dibujo,"storage");
   }
   if(opcion == 4){
     strcpy(dibujo,"entity");
   }

   printf("Para graficar, subir archivo a: \nhttps://www.planttext.com/ \n\n");

   FILE * archivo = fopen("planttext.txt","w");

   fprintf(archivo,"@staruml\n\n");
   //escribo los nodos
    for(int v=0; v<grafo->numVertices; v++){
         fprintf(archivo,"%s %d\n",dibujo,v);
    }
    //escribo las relaciones
    for(int v=0; v<grafo->numVertices; v++){
         Nodo aux = grafo->adjLists[v];
         while(aux){
            if(aux->vertex > v){
                fprintf(archivo,"%d <--> %d\n",v,aux->vertex);
            }
            aux=aux->next;
         }
         fprintf(archivo,"\n");
    }
    fprintf(archivo,"@enduml");
    fclose(archivo);
}

void bfs(Grafo grafo,int startVertex){
   Cola cola = crearCola();

   grafo->visited[startVertex] = 1;
   encolar(cola,startVertex);

   while(!colaVacia(cola)){
      mostrarCola(cola);
      int currentVertex = desencolar(cola);
      printf("Visito el: %d\n",currentVertex);

      Nodo aux = grafo->adjLists[currentVertex];

      while(aux){
         int adjVertex = aux->vertex;

         if(grafo->visited[adjVertex]==0){
            grafo->visited[adjVertex] = 1;
            encolar(cola,adjVertex);
         }
         aux = aux->next;
      }
   }
}

void dfs(Grafo grafo,int vertex){
  Nodo adjList = grafo->adjLists[vertex];
  Nodo aux = adjList;

  grafo->visited[vertex] = 1;
  printf("Visito el: %d\n",vertex);

  while(aux != NULL){
     int connectedVertex = aux->vertex;

     if(grafo->visited[connectedVertex]==0){
         dfs(grafo,connectedVertex);
     }
     aux=aux->next;
  }
}
