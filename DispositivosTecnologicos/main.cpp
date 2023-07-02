#include <iostream>
#include "dispositivos.h"
#include "persona.h"
#include "fechaNacimiento.h"
#include "empleados.h"

using namespace std;

int main()
{

    Dispositivo d1[TAM];
    d1[0] = crearDispositivo("Celular","Huawei",23876,64);
    d1[1] = crearDispositivo("Notebook","Dell",95000,256);
    FechaNacimiento f = crearFechaNacimiento(2022,3,23);
    Persona p1 = crearPersona("Tomas","Strycharski",42828997,d1,f);
    //mostrarPersona(p1);

    Dispositivo d2[TAM];
    d2[0] = crearDispositivo("Camara","Kodak",24000,32);
    d2[1] = crearDispositivo("Celular","Motorola",24000,64);
    FechaNacimiento f1 = crearFechaNacimiento(2000,6,2);
    Persona p2 = crearPersona("Sergio","Suarez",72828997,d2,f1);
    //mostrarPersona(p2);

    Empleados e1 = crearEmpleado(20000,78,"JP MORGAN",p1);
    Empleados e2 = crearEmpleado(23000,98,"JP MORGAN",p2);
    cout<<"\n------- Empleado 1 --------\n"<<endl;
    mostrarEmpleado(e1);
    cout<<"\n------- Empleado 2 --------\n"<<endl;
    mostrarEmpleado(e2);

    //PUNTO 4: �C�mo generar�a el TDA para reutilizar todo lo anterior?.
    //Creo un struct empleadoE y adentro reutilizaria la struct Persona




    return 0;
}
