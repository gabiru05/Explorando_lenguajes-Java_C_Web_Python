#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

void cargar()
{
    float r;
    float gaby;
    printf("Introduzca el radio del circulo");
    scanf("%f", &r);
    gaby = 3.14 * r * r;
    printf("%f", gaby);
}

int main()
{

    cargar();
}