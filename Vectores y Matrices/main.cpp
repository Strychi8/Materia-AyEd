#include <iostream>
#include <time.h>
#include <math.h>
#define COL 3
#define REN 3

using namespace std;

//------------- VECTORES -----------------
/*2- Generar una librer�a de funciones para vectores de enteros. La misma tiene que permitir,
cargar un vector de forma manual, cargarlo de forma aleatoria, mostrarlo, mostrarlo en forma invertida,
contar la cantidad de pares, calcular su m�dulo (Pitagoras), buscar maximo, buscar m�nimo ( y sus posiciones),
ordenar el array (por burbujeo, selecci�n e inserci�n), sumar dos vectores, realizar la multiplicaci�n escalar de dos vectores,
realizar una b�squeda secuencial del vector, realizar una b�squeda binaria sobre el vector.
�Qu� ocurre si les pedimos esto mismo para float o doubles? */

void cargarVectorManualmente(int v[],int t);
void cargarVectorAleatorio(int v2[],int t);
void mostrarVector(int v[],int t);
void mostrarVectorInvertido(int v[],int t);
int cantidadDePares(int v[],int t);
int buscarMaximo(int v[],int t);
int buscarMinimo(int v[],int t);
void ordenarVectorPorBurbuja(int v[],int t);
void ordenarVectorPorInsercion(int v[],int t);
void ordenarVectorPorSeleccion(int v[],int t);
void mostrarSuma(int v[],int v2[],int t);
int mostrarMultiplicacionEscalar(int v[],int v2[],int t);
int busquedaSecuencialVector (int v[],int t,int numero);
int busquedaBinariaVector (int v[],int t,int dato);

//--------------- MATRICES ---------------------
/*3- Realizar una librer�a para poder manipular matrices de enteros. En esta librer�a se tiene que tener como m�nimo,
mostrar la matriz, cargar la matriz manualmente y aleatoriamente, buscar m�ximo y m�nimo y sus posiciones,
calcular el promedio por filas y columnas, calcular la suma por sumas y columnas, calcular el promedio general,
realizar la suma de matrices y el producto de matrices (con las validaciones necesarias sobre las dimensiones de las mismas)*/
void cargarMatrizManualmente(int m1[COL][REN]);
void cargarMatrizAleatoriamente(int m1[COL][REN]);
void mostrarMatriz(int m1[COL][REN]);
int buscarMaximoMatriz(int m1[COL][REN]);
int buscarMinimoMatriz(int m1[COL][REN]);
void calcularSumaPorFilas(int m1[COL][REN]);
void calcularSumaPorColumnas(int m1[COL][REN]);
void calcularPromedioPorFilas(int m1[COL][REN]);
void calcularPromedioPorColumnas(int m1[COL][REN]);
void calcularPromedioGeneral(int m1[COL][REN]);
void sumaDeMatrices(int m1[COL][REN],int m2[COL][REN]);
void productoDeMatrices(int m1[COL][REN],int m2[COL][REN]);

int main()
{
    int tam = 5;
    int v1[tam];
    int v2[tam];
    srand(time(0));


    printf("------------------------- VECTORES ---------------------------------\n");
    cargarVectorManualmente(v1,tam);
    printf("------- VECTOR MANUAL ---------\n");
    mostrarVector(v1,tam);
    printf("\n------- VECTOR ALEATORIO ---------\n");
    //cargarVectorAleatorio(v2,tam);
    //mostrarVector(v2,tam);
    printf("\n------- VECTOR Invertido ---------\n");
    mostrarVectorInvertido(v1,tam);
    printf("\nLa cantidad de pares que hay es ----> %d\n",cantidadDePares(v1,tam));

    printf("\nEl MAXIMO del vector es -----> %d\n",buscarMaximo(v1,tam));
    printf("\nEl MINIMO del vector es -----> %d\n",buscarMinimo(v1,tam));

    printf("\n----------- ORDENAMIENTO ---------------\n");
    ordenarVectorPorBurbuja(v1,tam);
    //ordenarVectorPorInsercion(v1,tam);
    //ordenarVectorPorSeleccion(v1,tam);
    //mostrarVector(v1,tam);
    //mostrarSuma(v1,v2,tam);
    //printf(" %d ",mostrarMultiplicacionEscalar(v1,v2,tam));
    //printf("\n\nBusco el numero 2 en la posicion->>>> %d\n",busquedaSecuencialVector(v1,tam,2));
    printf("\n\nBusco el numero 2(Solo Centro) en la posicion->>>> %d\n\n",busquedaBinariaVector(v1,tam,2));

    printf("\n\n");
    //printf("\n--------------------- MATRICES ----------------------------\n");
    int matriz[REN][COL];
    int matriz2[REN][COL];
    //cargarMatrizManualmente(matriz);
    //mostrarMatriz(matriz);
    //cargarMatrizAleatoriamente(matriz);
    //printf("\n---------------- MATRIZ 1 -----------------\n");
    //mostrarMatriz(matriz);

    //cargarMatrizAleatoriamente(matriz2);
    //printf("\n---------------- MATRIZ 2 -----------------\n");
    //mostrarMatriz(matriz2);

    //printf("El numero maximo es ---> %d\n",buscarMaximoMatriz(matriz));
    //printf("El numero minimo es ---> %d\n",buscarMinimoMatriz(matriz));

    //calcularSumaPorFilas(matriz);
    //calcularSumaPorColumnas(matriz);
    //calcularPromedioPorFilas(matriz);
    //calcularPromedioPorColumnas(matriz);
    //calcularPromedioGeneral(matriz);
    //sumaDeMatrices(matriz,matriz2);
    //productoDeMatrices(matriz,matriz2);

    //4- Para agilizar los puntos 2 y 3, �tuvo que generar alguna librer�a/s extra? �Cu�l/es?
    //�En qu� momento cree que fue necesario el uso de punteros?
    //si tuve que generar 2 librerias, time.h para los numeros aleatorios y math.h para calcular el modulo de Pitagoras
    //Los punteros son necesarios cuando se lee un tipo de dato, es decir %d,%f,etc haciendo referencia a la variable
    //a la que apunta

    return 0;
}

void cargarVectorManualmente(int v[],int t){
   for(int i=0; i<t; i++){
      printf("Pos -> %d\n",i);
      printf("Ingrese los numeros que desee para su vector:\n");
      scanf("%d",&v[i]);
   }
}
void cargarVectorAleatorio(int v[],int t){

   for(int i=0; i<t; i++){
      v[i] = ((float)(-100 + rand()%601)/1.001);
   }

}
void mostrarVector(int v[],int t){

   for(int i=0; i<t; i++){
       printf(" %d ",v[i]);
   }
}
void mostrarVectorInvertido(int v[],int t){

   for(int i=t-1; i>=0; i--){
       printf(" %d ",v[i]);
   }
}
int cantidadDePares(int v[],int t){
   int cont = 0;
   for(int i=0; i<t; i++){
     if(v[i]%2==0){
      cont=cont+1;
     }
   }

   return cont;

}

int buscarMaximo(int v[],int t){
  int vecMax = v[0];
  int pos = -1;
  for(int i=0; i<t; i++){
     if(vecMax<v[i]){
        vecMax = v[i];
        pos = i;
     }
  }
  printf("\nLa posicion del MAXIMO es: %d\n",pos);
  return vecMax;

}
int buscarMinimo(int v[],int t){
   int vecMin = v[0];
  int pos = -1;
  for(int i=0; i<t; i++){
     if(vecMin>v[i]){
        vecMin = v[i];
        pos = i;
     }
  }
  printf("\nLa posicion del MINIMO es: %d\n",pos);
  return vecMin;

}
void ordenarVectorPorBurbuja(int v[],int t){
   int aux = 0;
   for(int i=0; i<t; i++){
     for(int j=0; j<t-1; j++){
        if(v[j]>=v[j+1]){
            aux = v[j];
            v[j] = v[j+1];
            v[j+1] = aux;
        }
     }
     for(int x=0; x<t; x++){
            printf("%d ",v[x]);//veo el ordenamiento de los numeros
        }
        printf("\n\n");
   }
}
void ordenarVectorPorInsercion(int v[],int t){
    int aux,n;
    for(int i=0; i<t; i++){
        aux=v[i];
        n=i;
        while(n>0){
            if(v[n]<v[n-1]){
                v[n] = v[n-1];
                v[n-1] = aux;
                n=n-1;
            }else{
               n=0;
             }
        }
        for(int x=0; x<t; x++){
            printf("%d ",v[x]);//veo el ordenamiento de los numeros
        }
        printf("\n\n");
    }

}
void ordenarVectorPorSeleccion(int v[],int t){
   int mini,aux;
   for(int i=0; i<t; i++){
     mini=i;
      for(int j=i+1; j<t; j++){
        if(v[mini]>v[j]){
            aux = v[mini];
            v[mini] = v[j];
            v[j] = aux;
        }
      }
      for(int x=0; x<t; x++){
        printf("%d ",v[x]);
      }
      printf("\n\n");
   }

}

void mostrarSuma(int v[],int v2[],int t){
   int v3[t];
   printf("\nLa suma de los 2 vectores es:\n");
   for(int i=0; i<t; i++){
     v3[i] = v[i] + v2[i];
     printf(" %d ",v3[i]);

   }
}
int mostrarMultiplicacionEscalar(int v[],int v2[],int t){
    int acum = 0;
    printf("\nLa multiplicacion escalar de los 2 vectores es:\n");
   for(int i=0; i<t; i++){
     acum = acum + (v[i] * v2[i]);
   }

   return acum;
}
int busquedaSecuencialVector (int v[],int t,int numero){

   int resultado = 0;

   for(int i=0; i<t; i++){
       if(v[i] == numero){
          resultado = i;
       }
   }

   return resultado;
}

int busquedaBinariaVector (int v[],int t,int dato){

   int posInicial = 0;
   int posFinal = 0;
   int posCentral = 0;
   posFinal = t -1;
   while(posInicial<=posFinal){
    posCentral = (posInicial+posFinal)/2;
      if(v[posCentral] == dato){
         return posCentral;
      }else{
        if(dato>v[posCentral]){
            posInicial = posCentral+1;
        }else{
            posFinal = posCentral-1;
        }
      }
   }
   return -1;
   //�Qu� ocurre si les pedimos esto mismo para float o doubles?.
   //Practicamente no anda, da resultado 0

}

void cargarMatrizManualmente(int m1[COL][REN]){

     for(int ren=0; ren<REN; ren++){
      for(int col=0; col<COL; col++){
        printf("Ingrese los numeros para su matriz:\n");
        scanf("%d",&m1[ren][col]);
    }
  }
}
void cargarMatrizAleatoriamente(int m1[COL][REN]){
   for(int ren=0; ren<REN; ren++){
    for(int col=0; col<COL; col++){
        m1[ren][col] = rand()%10;
    }
  }
}

void mostrarMatriz(int m1[COL][REN]){
    printf("\n---- Matriz -----\n");
     for(int ren=0; ren<REN; ren++){
      for(int col=0; col<COL; col++){
        printf(" %d ",m1[ren][col]);
       }
          printf("\n\n");
     }
}
int buscarMaximoMatriz(int m1[COL][REN]){
     int maximo = m1[0][0];
     int posR = 0;
     int posC = 0;
     for(int ren=0; ren<REN; ren++){
      for(int col=0; col<COL; col++){
            if(maximo<m1[ren][col]){
                maximo = m1[ren][col];
                posR = ren;
                posC = col;
            }
          }
       }
       printf("\nLa posicion del numero maximo es ----> %d,%d\n",posR,posC);

    return maximo;
}
int buscarMinimoMatriz(int m1[COL][REN]){
   int minimo = m1[0][0];
     int posR = 0;
     int posC = 0;
     for(int ren=0; ren<REN; ren++){
      for(int col=0; col<COL; col++){
            if(minimo>m1[ren][col]){
                minimo = m1[ren][col];
                posR = ren;
                posC = col;
            }
          }
       }
       printf("\nLa posicion del numero minimo es ----> %d,%d\n",posR,posC);

    return minimo;

}

void calcularSumaPorFilas(int m1[COL][REN]){
    int sumaPorFilas[REN] = {0,0,0};
     for(int ren=0; ren<REN; ren++){
      for(int col=0; col<COL; col++){
            sumaPorFilas[ren] = sumaPorFilas[ren] + m1[ren][col];

          }
       }
     printf("\nLa suma de la matriz por FILAS es:\n");
      for(int ren=0; ren<REN; ren++){
       printf(" %d ",sumaPorFilas[ren]);

       }

}

void calcularSumaPorColumnas(int m1[COL][REN]){
   int sumaPorColumnas[COL] = {0,0,0};
     for(int ren=0; ren<REN; ren++){
      for(int col=0; col<COL; col++){
            sumaPorColumnas[col] = sumaPorColumnas[col] + m1[ren][col];

          }
       }
     printf("\nLa suma de la matriz por COLUMNAS es:\n");
      for(int col=0; col<COL; col++){
       printf(" %d ",sumaPorColumnas[col]);

       }
}

void calcularPromedioPorFilas(int m1[COL][REN]){

    float promedioFila = 0;
    float suma = 0;

    for(int r=0; r<REN; r++){
        suma=0;
        for(int c=0; c<COL; c++){
            suma = suma + m1[r][c];
        }
        promedioFila = suma/REN;
        printf("\nEl promedio de cada fila es ---> %.2f\n",promedioFila);
    }


}

void calcularPromedioPorColumnas(int m1[COL][REN]){

    float promedioColumna = 0;
    float suma = 0;


    for(int c=0; c<COL; c++){
        suma=0;
        for(int r=0; r<REN; r++){
            suma = suma + m1[r][c];
        }
        promedioColumna = suma/COL;
        printf("\nEl promedio de cada COLUMNA es ---> %.2f\n",promedioColumna);
    }


}

void calcularPromedioGeneral(int m1[COL][REN]){

   float sumaTotal = 0;
   float promedioGeneral = 0;
   int cantidadElementos = COL*REN;

   for(int ren=0; ren<REN; ren++){
     for(int col=0; col<COL; col++){
         sumaTotal = sumaTotal + m1[ren][col];
     }

   }
    promedioGeneral=sumaTotal/cantidadElementos;

    printf("\nEl promedio general de la matriz es: %.2f\n",promedioGeneral);

}

void sumaDeMatrices(int m1[COL][REN],int m2[COL][REN]){
   int m3[COL][REN];
   for(int ren=0; ren<REN; ren++){
     for(int col=0; col<COL; col++){
         m3[ren][col] = m1[ren][col] + m2[ren][col];
     }
   }
   printf("\n---------------- MATRIZ 3 -----------------\n");
   for(int ren=0; ren<REN; ren++){
     for(int col=0; col<COL; col++){
         printf(" %d ",m3[ren][col]);
     }
     printf("\n\n");
   }


}
void productoDeMatrices(int m1[COL][REN],int m2[COL][REN]){

    int mult[COL][REN];
    printf ("\nProducto de Matrices:\n");
    for (int r=0; r<REN; r++)
    {
        for (int c=0; c<COL; c++)
        {
            mult[r][c] = 0;
            for (int k=0; k<COL; k++)
            {
                mult[r][c] = (mult[r][c]+(m1[k][c] * m2[r][k]));
            }
        }
    }
    for(int r=0; r<REN; r++){
        for(int c=0; c<COL; c++){
            printf(" %d ",mult[r][c]);
        }
        printf("\n\n");
    }


}
