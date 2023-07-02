#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

struct personaE;
typedef struct personaE * Persona;

Persona crearPersonaTeclado();
Persona crearPersona(char nom[40],char ape[40],int d);
void mostrarPersona(Persona p);

int getDni(Persona p);
char * getNombre(Persona p);
char * getApellido(Persona p);

void setDni(Persona p,int nuevoDni);
void setNombre(Persona p,char nuevoNombre[40]);
void setApellido(Persona p,char nuevoApellido[40]);

#endif // PERSONA_H_INCLUDED
