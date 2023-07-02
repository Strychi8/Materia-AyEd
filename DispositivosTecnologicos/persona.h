#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include "fechaNacimiento.h"
#include "../dispositivosTecnologicos/dispositivos.h"

struct personaE;
//defino un nuevo tipo de dato Persona(puntero a la estructura personaE)
typedef struct personaE * Persona;

//constructor
Persona crearPersona(char nom[40],char ape[40],int dn,Dispositivo d[],FechaNacimiento f);
Persona crearPersonaTeclado();
//mostrar por pantalla a la persona
void mostrarPersona(Persona p);

//getters
char * getNombre(Persona p);
char * getApellido(Persona p);
int getDni(Persona p);

//setters
void setNombre(Persona p,char nuevoNombre[40]);
void setApellido(Persona p,char nuevoApellido[40]);
void setDni(Persona,int nuevoDni);




#endif // PERSONA_H_INCLUDED
