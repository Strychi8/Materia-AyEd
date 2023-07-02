#ifndef DETALLE_H_INCLUDED
#define DETALLE_H_INCLUDED

struct detalleE;
typedef struct detalleE * DetalleCompra;

DetalleCompra crearDetalle(int nroD,Producto p,int precioT);
void mostrarDetalleCompra(DetalleCompra d);

#endif // DETALLE_H_INCLUDED
