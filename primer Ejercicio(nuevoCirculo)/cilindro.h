#ifndef CILINDRO_H_INCLUDED
#define CILINDRO_H_INCLUDED

typedef struct{
    float radio;
    float altura;
} Cilindro;

float calcularDiametro1(Cilindro cilindro);
float calcularPerimetro1(Cilindro cilindro);
float calcularVolumen (Cilindro cilindro);
float calcularArea(Cilindro cilindro);

#endif // CILINDRO_H_INCLUDED
