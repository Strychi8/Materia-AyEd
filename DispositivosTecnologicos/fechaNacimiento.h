#ifndef FECHANACIMIENTO_H_INCLUDED
#define FECHANACIMIENTO_H_INCLUDED

struct fechaNacimientoE;
typedef struct fechaNacimientoE * FechaNacimiento;

FechaNacimiento crearFechaNacimiento(int a,int m,int d);
void mostrarFechaNacimiento(FechaNacimiento fn);

#endif // FECHANACIMIENTO_H_INCLUDED
