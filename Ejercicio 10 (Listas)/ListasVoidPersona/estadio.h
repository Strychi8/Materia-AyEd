#ifndef ESTADIO_H_INCLUDED
#define ESTADIO_H_INCLUDED

struct EstadioEstructura;

typedef struct EstadioEstructura * Estadio;

Estadio crearEstadio(char n[20], int c);

void mostrarEstadio (Estadio e);

#endif // ESTADIO_H_INCLUDED
