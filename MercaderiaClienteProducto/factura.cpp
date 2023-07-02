#include <iostream>
#include "productos.h"
#include "factura.h"
//#include "cliente.h"
//include "detalle.h"
#include <cstring>

/*Al realizar una compra tenemos que facturar, de la Factura nos interesa saber su número, la fecha,
los datos del Cliente (dni, nombre) y el Detalle de la compra ( nroDetalle, producto, cantidad, precio y precio total).
Una vez generados todos los detalles la Factura tiene que tener un precio final.*/

struct facturaE{
   int numero;
   char fecha[40];
   Cliente cliente;
   DetalleCompra detalleCompra;
   int precioFinal;

};

Factura crearFactura(int num,char fech[40],Cliente c,DetalleCompra d){
    Factura f = new facturaE;

    f->numero = num;
    strcpy(f->fecha,fech);
    f->cliente = c;
    f->detalleCompra = d;


    return f;
}
void mostrarFactura(Factura f[],int t){

    for(int i=0; i<t; i++){
        printf("\n------------ FACTURA N:%d ------------\n",i+1);
        printf("NUMERO DE FACTURA: %d\n",getNumero(f[i]));
        printf("FECHA DE FACTURA: %s\n",getFecha(f[i]));
        mostrarCliente(f[i]->cliente);
        mostrarDetalleCompra(f[i]->detalleCompra);

    }
}


int getNumero(Factura f){
  return f->numero;
}
char * getFecha(Factura f){
  return f->fecha;
}

void setNumero(Factura f,int nuevoNumero){
  f->numero = nuevoNumero;
}
void setFecha(Factura f,char nuevaFecha[40]){
  strcpy(f->fecha,nuevaFecha);
}
