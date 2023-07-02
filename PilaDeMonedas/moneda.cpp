#include <iostream>
#include <cstring>
#include "moneda.h"

struct monedaE{

   int valor;
   char color[CANTCARACTERES];
   int anio;

};


Moneda crearMoneda(int value,char colour[CANTCARACTERES],int year){

  Moneda m = new monedaE;

  m->valor = value;
  strcpy(m->color,colour);
  m->anio = year;

  return m;
}
void mostrarMoneda(Moneda m){

  printf("Valor: %d\n",m->valor);
  printf("Color: %s\n",m->color);
  printf("Anio: %d\n\n",m->anio);

}
