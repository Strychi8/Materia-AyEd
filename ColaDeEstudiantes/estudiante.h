#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED

#define CANTCARACTERES 40

struct estudianteE;
typedef struct estudianteE * Estudiante;

Estudiante crearEstudiante(char nom[CANTCARACTERES], char ape[CANTCARACTERES], int d);
void mostrarEstudiante(Estudiante e);

char * getNombre(Estudiante e);
char * getApellido(Estudiante e);
int getDni(Estudiante e);

void setNombre(Estudiante e,char nuevoNombre[CANTCARACTERES]);
void setApellido(Estudiante e,char nuevoApellido[CANTCARACTERES]);
void setDni(Estudiante e,int nuevoDni);


#endif // ESTUDIANTE_H_INCLUDED
