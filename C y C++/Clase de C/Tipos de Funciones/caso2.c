#include <stdio.h>
#include <stdlib.h>

float area()
{
    float a, r;

    printf("Introduzca el radio del circulo");
    scanf("%f", &r);
    return (3.14 * r * r);
}

int main()
{

    printf("El area del circulo es %f:", area());
}