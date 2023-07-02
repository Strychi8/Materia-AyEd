#include "iostream"
#include "fechaNacimiento.h"
#include <cstring>

//AXIOMAS:
//dia>0 && dia<32
//mes>0 && mes<13
//anio>1920 && anio<2022
struct fechaNacimientoE{
    int anio;
    int mes;
    int dia;

};

FechaNacimiento crearFechaNacimiento(int a,int m,int d){

    FechaNacimiento fn = new fechaNacimientoE;

    fn->anio = a;
    fn->mes = m;
    fn->dia = d;

    return fn;

}
void mostrarFechaNacimiento(FechaNacimiento fn){

  printf("Fecha de Nacimiento: %d/%d/%d\n",fn->dia,fn->mes,fn->anio);

}
