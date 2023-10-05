#include <stdio.h>
#include <stdlib.h>

#include <math.h>

float area()
{
    float x, xx, y, yy, d;
    printf("Ingrese los siguientes datos: ");
    printf("La distancia Inicial");
    scanf("%f", &x);
    printf("La distancia Final");
    scanf("%f", &xx);
    printf("La Altura Inicial");
    scanf("%f", &y);
    printf("La Altura Final");
    scanf("%f", &yy);
    d = sqrt((xx - x) * (xx - x) + (yy - y) * (yy - y));
    return (d);
}

int main()
{

    printf("El area del circulo es %f:", area());
}