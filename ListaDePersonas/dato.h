#ifndef DATO_H_INCLUDED
#define DATO_H_INCLUDED

#include "persona.h"

//Para no poner los get y set
struct datoE{

  Persona persona;

};

typedef struct datoE * Dato;

Dato crearDato(Persona p);




#endif // DATO_H_INCLUDED
