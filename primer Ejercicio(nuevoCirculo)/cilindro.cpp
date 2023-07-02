#include "cilindro.h"

float calcularDiametro1(Cilindro cilindro){
    return cilindro.radio*2;
}
float calcularPerimetro1(Cilindro cilindro){
    return 2*3.14159*cilindro.radio;
}
float calcularVolumen (Cilindro cilindro){
    return (2*cilindro.radio)*3.14159*cilindro.altura;
}
float calcularArea(Cilindro cilindro){
   return 2*3.14159*cilindro.radio*cilindro.altura + 2*3.14159*(cilindro.radio*2);
}
