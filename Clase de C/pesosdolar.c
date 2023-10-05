#include <stdio.h>
#include <stdlib.h>

#include <math.h>

void conver(float peso)
{
    float dolar, resultado;
    dolar = 19.45;
    resultado = (peso / dolar);
    printf("Usted tiene en dolares %f $ ", resultado);
}

int main()
{
    float peso;
    printf("Ingrese los siguientes datos ");
    printf("Cuantos pesos mexicanos tienes :");
    scanf("%f", &peso);
    conver(peso);
}
