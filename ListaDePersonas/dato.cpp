#include <iostream>
#include <cstring>
#include "dato.h"

struct datoE;


Dato crearDato(Persona p){

    Dato d = new datoE;

    d->persona = p;


    return d;

}



