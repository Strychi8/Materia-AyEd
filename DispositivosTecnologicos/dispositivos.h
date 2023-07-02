#ifndef DISPOSITIVOS_H_INCLUDED
#define DISPOSITIVOS_H_INCLUDED
#define TAM 2

struct dispositivoE;
typedef struct dispositivoE * Dispositivo;

Dispositivo crearDispositivoTeclado();
Dispositivo crearDispositivo(char t[40],char m[40],int p,int memory);
void mostrarDispositivo(Dispositivo d);

char * getTipo(Dispositivo d);
char * getMarca(Dispositivo d);
int getPrecio(Dispositivo d);
int getMemoria(Dispositivo d);

void setTipo(Dispositivo d,char nuevoTipo[40]);
void setMarca(Dispositivo d,char nuevaMarca[40]);
void setPrecio(Dispositivo d,int nuevoPrecio);
void setMemoria(Dispositivo d,int nuevaMemoria);


#endif // DISPOSITIVOS_H_INCLUDED
