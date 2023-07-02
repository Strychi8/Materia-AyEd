#include <iostream>
#include "nrosComplejos.h"
#include <cstring>

struct nrosComplejosE{

  float numReal;
  float numImaginario;

};

NrosComplejos crearNrosComplejos(){

   NrosComplejos numC = new nrosComplejosE;

   printf("Parte Real:\n");
   scanf("%f",&numC->numReal);
   printf("Parte Imaginaria:\n");
   scanf("%f",&numC->numImaginario);

   return numC;

}

void mostrarNumeros(NrosComplejos numC){

  printf("\nNumero Real: %.2f\n",numC->numReal);
  printf("Numero Imaginario: %.2f\n",numC->numImaginario);

}

void mostrarSuma (NrosComplejos z1,NrosComplejos z2){

    z1->numReal += z2->numReal;
    z1->numImaginario += z2->numImaginario;
    printf("\nResultado de la suma: %.2f,%.2f\n",z1->numReal,z1->numImaginario);

}

