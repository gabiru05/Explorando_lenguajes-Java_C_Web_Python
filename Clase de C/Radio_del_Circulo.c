#include <stdio.h>
#include <stdlib.h>

float cir(float g)
{
    return (3.14 * g * g);
}
main()
{
    float r, area;
    printf("Introduzca el radio del circulo");
    scanf("%f", &r);
    area = cir(r);
    printf("El area del circulo es %f:", area);
    
}