#ifndef EMPLEADOS_H_INCLUDED
#define EMPLEADOS_H_INCLUDED

struct empleadosE;
typedef struct empleadosE * Empleados;

Empleados crearEmpleado(int suel,int leg,char emp[40],Persona p);
void mostrarEmpleado(Empleados e);

#endif // EMPLEADOS_H_INCLUDED
