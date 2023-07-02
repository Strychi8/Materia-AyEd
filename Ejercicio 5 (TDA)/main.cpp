#include <iostream>
#include "nrosComplejos.h"

using namespace std;

int main()
{

    printf("Ingrese los datos para el primer numero complejo:\n");
    NrosComplejos z1 = crearNrosComplejos();
    printf("Ingrese los datos para el segundo numero complejo:\n");
    NrosComplejos z2 = crearNrosComplejos();

    mostrarNumeros(z1);
    mostrarNumeros(z2);

    mostrarSuma(z1,z2);




    return 0;
}
