#include <iostream>

#include "cola.h"
#include "estudiante.h"

using namespace std;

int main()
{

     Estudiante e1 = crearEstudiante("Javier","Velez",32444333);
     Estudiante e2 = crearEstudiante("Carlos","Alonso",32444333);
     Estudiante e3 = crearEstudiante("Martin","Espindola",32444333);
     Estudiante e4 = crearEstudiante("Barbara","Sanchez",32444333);
     Estudiante e5 = crearEstudiante("Abril","Gomez",32444333);

     Cola cola = crearCola();

     encolar(cola,e1);
     encolar(cola,e2);
     encolar(cola,e3);
     encolar(cola,e4);
     encolar(cola,e5);

     imprimirCola(cola);

     desencolar(cola);
     imprimirCola(cola);
     desencolar(cola);
     imprimirCola(cola);
     desencolar(cola);
     imprimirCola(cola);
     desencolar(cola);
     imprimirCola(cola);




    return 0;
}
