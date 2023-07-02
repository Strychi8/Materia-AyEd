#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include "listaVoid.h"

struct PersonaEstructura;

typedef struct PersonaEstructura * Persona;

Persona crearPersona(char  n[20], char a[20]);

void mostrarPersona(Persona p);

#endif // PERSONA_H_INCLUDED
