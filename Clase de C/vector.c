#include <stdio.h>
#include <stdlib.h>

void cargar(int vec[5])
{
    int x;
    for (x = 0; x < 5; x++)
    {
        printf("Ingrese elemento");
        scanf("%i", &vec[x]);
    }
}

void imprimir(int vec[5])
{
    int x;
    printf("IContenido completo del vector: ");
    for (x = 0; x < 5; x++)
    {
        printf("%i", vec[x]);
    }
}

int main()
{
    int vector[5];
    cargar(vector);
    imprimir(vector);
}