#include <stdio.h>
#include <stdlib.h>

void cir(float g)
{
    float gaby;
    gaby = (3.14 * g * g);
    printf("El area del circulo es %f:", gaby);
}
main()
{

    float r, area;
    printf("Introduzca el radio del circulo");
    scanf("%f", &r);
    cir(r);
}