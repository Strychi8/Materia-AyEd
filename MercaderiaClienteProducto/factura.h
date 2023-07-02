#ifndef FACTURA_H_INCLUDED
#define FACTURA_H_INCLUDED
#include "cliente.h"
#include "detalle.h"

struct facturaE;
typedef struct facturaE * Factura;

Factura crearFactura(int num,char fech[40],Cliente c,DetalleCompra d);

void mostrarFactura(Factura f[],int t);
void mostrarFactura1(Factura f,DetalleCompra d,int t);

int getNumero(Factura f);
char * getFecha(Factura f);

void setNumero(Factura f,int nuevoNumero);
void setFecha(Factura f,char nuevaFecha[40]);

#endif // FACTURA_H_INCLUDED
