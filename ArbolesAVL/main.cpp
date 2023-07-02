#include <iostream>
#include "arbolAVL.h"

using namespace std;

int main()
{
    ArbolAVL un_arbol = NULL;

    insertar(&un_arbol,1);
    insertar(&un_arbol,55);
    insertar(&un_arbol,24);
    insertar(&un_arbol,12);
    insertar(&un_arbol,13);

    mostrar(un_arbol);






    return 0;
}
