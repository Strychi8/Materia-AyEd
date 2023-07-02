#include <iostream>
#include "productos.cpp"
#include "factura.cpp"
#include "cliente.cpp"
#include "detalle.cpp"

using namespace std;

int main()
{
    /*6-  Ejercicio cuatrimestral, para irlo mejorando a medida que vemos m�s temas.
    Crear un programa que permita generar facturas para ventas de un comercio.*/

    Producto p1 = crearProducto("Manzana",200,"e3f2d",5);

    //mostrarProducto(p1);

    Cliente c1 = crearCliente(432,"Tomas");
    DetalleCompra d1 = crearDetalle(2,p1,200);
    Factura f1 = crearFactura(23,"4/3/2023",c1,d1);

    Producto p2 = crearProducto("Durazno",300,"I38S7",19);
    Cliente c2 = crearCliente(843,"Santiago");
    DetalleCompra d2 = crearDetalle(10,p2,300);
    Factura f2 = crearFactura(493,"23/6/2023",c2,d2);

    //Producto p3 = crearProducto ("Pera",200,"Hd3S3",10);

    Factura factura[2] = {f1,f2};
    mostrarFactura(factura,2);







    return 0;
}
