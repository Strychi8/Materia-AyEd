#ifndef MONEDA_H_INCLUDED
#define MONEDA_H_INCLUDED

#define CANTCARACTERES 40

struct monedaE;
typedef struct monedaE * Moneda;

Moneda crearMoneda(int value,char colour[CANTCARACTERES],int year);
void mostrarMoneda(Moneda m);

#endif // MONEDA_H_INCLUDED
