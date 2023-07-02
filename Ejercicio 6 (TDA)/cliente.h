#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

struct clienteE;
typedef struct clienteE * Cliente;

Cliente crearCliente(int d,char nom[40]);
void mostrarCliente(Cliente c);

#endif // CLIENTE_H_INCLUDED
