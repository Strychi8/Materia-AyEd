#include <iostream>

using namespace std;

struct empresa{
   int id;
   char direccion[50];
   char zona[5];
};
enum opciones {norte,sur,oeste,este,centro};
void cargar_id ();

int main()
{
    int opcion = 0;
    do{
    cout<<"\nBievenido :D "<<endl;
    cout<<"1-Ingresar sucursal(ID) "<<endl;
    cout<<"2-Lista del total de facturacion de cada zona "<<endl;
    cout<<"3-Mostrar minimo y maximo de la facturacion "<<endl;
    cout<<"Ingrese una opcion: "<<endl;
    cin>>opcion;
    cout<<"\n";
    switch(opcion){
     case 1: cargar_id();
     case 0: break;
     default: cout<<"ERROR. Ingrese otra opcion valida"; break;
    }
    }while(opcion!=0);

    return 0;
}
void cargar_id(){
  int id;
  do{
     cout<<"Ingrese su sucursal(ID):\n";
     cin>>id;
  }while(id<100 || id>1000);
}
