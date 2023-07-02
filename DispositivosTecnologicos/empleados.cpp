#include "iostream"
#include "persona.h"
#include "empleados.h"
#include <cstring>


struct empleadosE{
    int sueldo;
    int legajo;
    char empresa[40];
    Persona persona;

};

Empleados crearEmpleado(int suel,int leg,char emp[40],Persona p){

   Empleados e = new empleadosE;

   e->sueldo = suel;
   e->legajo = leg;
   strcpy(e->empresa,emp);
   e->persona = p;

   return e;

}
void mostrarEmpleado(Empleados e){

   printf("SUELDO: %d\n",e->sueldo);
   printf("LEGAJO: %d\n",e->legajo);
   printf("EMPRESA: %s",e->empresa);
   mostrarPersona(e->persona);


}
