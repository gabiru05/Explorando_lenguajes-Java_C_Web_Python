// Reykeel Acosta
// 4-822-1166
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1, lado2, lado3;

    // lado 1
    printf("Ingrese la medida del lado 1 (valor positivo): ");
    // recordatorio:
    // con la funcion != 1 nos aseguramos que se ingrese un numero y este sea valido
    // lado1 <= 0  y a su vez verificamos sea un numero positivo debe ser mayor que 0
    // de lo contrario entrara a la condicion y marcara el ERROR  por entrada invalida
    if (scanf("%f", &lado1) != 1 || lado1 <= 0)
    {
        printf("Entrada inválida. Debe ingresar un número positivo.\n");
        return 1;
    }

    // lado 2
    printf("Ingrese la medida del lado 2 (valor positivo): ");
    if (scanf("%f", &lado2) != 1 || lado2 <= 0)
    {
        printf("Entrada inválida. Debe ingresar un número positivo.\n");
        return 1;
    }

    // lado 3
    printf("Ingrese la medida del lado 3 (valor positivo): ");
    if (scanf("%f", &lado3) != 1 || lado3 <= 0)
    {
        printf("Entrada inválida. Debe ingresar un número positivo.\n");
        return 1;
    }

    // Validar si el triángulo es posible
    if (lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 || lado2 + lado3 <= lado1)
    {
        printf("\nLos lados no forman un triángulo válido.\n");
        return 1;
    }

    // Determinar el tipo de triángulo
    if (lado1 == lado2 && lado1 == lado3)
    {
        printf("\nEl triángulo es equilátero.\n");
    }
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
    {
        printf("\nEl triángulo es isósceles.\n");
    }
    else
    {
        printf("\nEl triángulo es escaleno.\n");
    }

    return 0;
}
