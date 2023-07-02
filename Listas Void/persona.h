#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

struct personaE;
typedef struct personaE * Persona;

Persona crearPersona(char n[40],float pe);
void mostrarPersona(Persona p);

#endif // PERSONA_H_INCLUDED
