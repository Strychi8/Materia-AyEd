#include <iostream>
#include "circulo.h"
#include "cilindro.h"

using namespace std;

// ESTA ES UNA POSIBLE FORMA DE ESTRUCTURAR CUALQUIER APLICACION
// NO USAR VARIABLES GLOBALES!!!
int main(int argc, char *argv[]) {
    // declaro e inicializo las variables.
    int opcion = 0;
    bool seguir = true;
    float grados = 0;

    Circulo circulo;


    cout << "Ingrese el radio del circulo" << endl;
    cin >> circulo.radio;

    // Itero hasta que no quiera seguir.
    while (seguir == true) {
          cout << "\n=========================================\n ingrese la opci�n deseada" << endl;
          cout << "0.- Salir" << endl;
          cout << "1.- Informar el radio del c�rculo" << endl;
          cout << "2.- Informar el per�metro del c�rculo" << endl;
          cout << "3.- Informar el di�metro del c�rculo" << endl;
          cout << "4.- Informar el �rea del c�rculo" << endl;
          cout << "5.- Informar longitud de un arco" << endl;
          cin >> opcion;

          switch (opcion) {
                 case 0:
                      cout << "Gracias por utilizar nuestro sistema" << endl;
                      seguir = false;
                 break;
                 case 1:
                      cout << "El radio es: " << circulo.radio << endl;
                 break;
                 case 2:
                      cout << "El perimetro es: " << calcularPerimetro(circulo) << endl;
                 break;
                 case 3:
                      cout << "El di�metro es: " << calcularDiametro(circulo) << endl;
                 break;
                 case 4:
                      cout << "El �rea es: " << calcularSuperficie(circulo) << endl;
                 break;
                 case 5:
                      cout << "Ingrese los grados del arco" << endl;
                      cin >> grados;
                      cout << "La longitud del arco es: " << calcularLongitudArco(circulo, grados) << endl;
                 break;
                 default:
                      cout << "Opci�n incorrecta, vuelva a intentar" << endl;
                 break;
          }
    }

    int opcion1 = 0;

    Cilindro cilindro;

    cout<<"\nIngrese el radio del cilindro:\n"<< endl;
    cin>>cilindro.radio;

    cout<<"\nIngrese la altura del cilindro:\n"<< endl;
    cin>>cilindro.altura;

    while(seguir==false){
        cout<<"\n\nIngrese la opcion:\n"<< endl;
        cout<<"0-Salir"<< endl;
        cout<<"1-Mostrar el radio del cilindro"<<endl;
        cout<<"2-Mostrar la altura del cilindro"<<endl;
        cout<<"3-Mostrar el diametro del cilindro"<<endl;
        cout<<"4-Mostrar el perimetro del cilindro"<<endl;
        cout<<"5-Mostar el area del cilindro"<<endl;
        cout<<"6-Mostrar el volumen del cilindro"<<endl;
        cin>>opcion1;
    switch(opcion1){
     case 0: seguir = true; break;
     case 1: cout<<"\nEl radio es: "<<cilindro.radio<<endl; break;
     case 2: cout<<"\nLa altura es: "<<cilindro.altura<<endl; break;
     case 3: cout<<"\nEl diametro es: "<<calcularDiametro1(cilindro)<<endl; break;
     case 4: cout<<"\nEl perimetro es: "<<calcularPerimetro1(cilindro)<<endl; break;
     case 5: cout<<"\nEl area es: "<<calcularArea(cilindro)<<endl; break;
     case 6: cout<<"\nEl volumen es: "<<calcularVolumen(cilindro)<<endl; break;
     default: cout<<"\nERROR. INGRESE UNA OPCION VALIDA\n"; break;

    }

    }

    //Cual es la salida de pantalla del siguiente codigo?
    /*int * a = new int;
    *a = 4;

    void* b;
    b = a;

    cout << "El numero es: " << (int*)b <<endl;
    cout << "El numero es: " <<  *(int*)b <<endl;
    cout << "El numero es: " << a <<endl;
    cout << "El numero es: " << *a <<endl;

    delete a;

    int p=25;
    int * p1;
    cout <<"Puntero 1: " << p1 << endl;
    p1=&p;

    cout <<"Puntero 2: " << p1 <<endl;
    cout <<"La direccion de memoria es: " << &p <<endl;
    cout <<"El valor es: "<<*p1<<endl;*/

    return 0;
}
