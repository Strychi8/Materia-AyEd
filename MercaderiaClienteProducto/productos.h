#ifndef PRODUCTOS_H_INCLUDED
#define PRODUCTOS_H_INCLUDED
#define TAM 3

struct productosE;
typedef struct productosE*Producto;

//Constructor
Producto crearProducto(char nom[40],int pre,char cod[40],int cant);
//Muestra de Datos
void mostrarProducto(Producto p);

//getters de Producto
char*getNombre(Producto p);
int getPrecio(Producto p);
char*getCodigo(Producto p);
int getCantidad(Producto p);

//setters de Producto
void setNombre(Producto p,char nuevoNombre[40]);
void setPrecio(Producto p,int nuevoPrecio);
void setCodigo(Producto p,char nuevoCodigo[40]);
void setCantidad(Producto p,int nuevaCantidad);

//Destructor
void liberarProducto(Producto p);

#endif // PRODUCTOS_H_INCLUDED
