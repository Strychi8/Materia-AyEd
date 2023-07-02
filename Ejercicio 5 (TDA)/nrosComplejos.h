#ifndef NROSCOMPLEJOS_H_INCLUDED
#define NROSCOMPLEJOS_H_INCLUDED

struct nrosComplejosE;
typedef struct nrosComplejosE * NrosComplejos;

NrosComplejos crearNrosComplejos();
void mostrarNumeros(NrosComplejos numC);
void mostrarSuma(NrosComplejos z1,NrosComplejos z2);


#endif // NROSCOMPLEJOS_H_INCLUDED
