#ifndef MOTIVOS_H_INCLUDED
#define MOTIVOS_H_INCLUDED

struct EstructuraMotivos;

typedef struct EstructuraMotivos * Motivos;

Motivos crearMotivo(char m[20]);

void mostrarMotivos(Motivos m);

#endif // MOTIVOS_H_INCLUDED
