#include <iostream>
#include "productos.h"
#include "detalle.h"
#include <cstring>

struct detalleE{
   int nroDetalle;
   Producto producto;
   //int cantidad;
   //int precio;
   int precioTotal;

};

DetalleCompra crearDetalle(int nroD,Producto p,int precioT){

    DetalleCompra dc = new detalleE;

    dc->nroDetalle = nroD;
    dc->producto = p;
    dc->precioTotal = precioT;

    return dc;

}
void mostrarDetalleCompra(DetalleCompra d){

    printf("\n------ DETALLE DE LA COMPRA --------\n");
    printf("NRO.DETALLE: %d\n",d->nroDetalle);
    mostrarProducto(d->producto);
    printf("Precio Total: %d\n",d->precioTotal);

}
