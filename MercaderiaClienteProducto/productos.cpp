#include <iostream>
#include "productos.h"
#include "detalle.h"
#include <cstring>

//El comercio vende Productos (alimenticios), de los que queremos saber nombre, precio, código y cantidad disponible.

struct productosE{
    char nombre[40];
    int precio;
    char codigo[40];
    int cantidadDisponible;

};

Producto crearProducto(char nom[40],int pre,char cod[40],int cant){
   Producto p = new productosE;

   strcpy(p->nombre,nom);
   p->precio = pre;
   strcpy(p->codigo,cod);
   p->cantidadDisponible = cant;


   return p;

}
void mostrarProducto(Producto p){

   printf("NOMBRE: %s\n",p->nombre);
   printf("PRECIO: %d\n",p->precio);
   printf("CODIGO: %s\n",p->codigo);
   printf("CANTIDAD DISPONIBLE: %d\n",p->cantidadDisponible);


}

char*getNombre(Producto p){
  return p->nombre;
}
int getPrecio(Producto p){
  return p->precio;
}
char*getCodigo(Producto p){
  return p->codigo;
}
int getCantidad(Producto p){
  return p->cantidadDisponible;
}

void setNombre(Producto p,char nuevoNombre[40]){
  strcpy(p->nombre,nuevoNombre);
}
void setPrecio(Producto p,int nuevoPrecio){
  p->precio = nuevoPrecio;
}
void setCodigo(Producto p,char nuevoCodigo[40]){
  strcpy(p->codigo,nuevoCodigo);
}
void setCantidad(Producto p,int nuevaCantidad){

  p->cantidadDisponible = nuevaCantidad;
}

void liberarProducto(Producto p){
   delete(p);
}
