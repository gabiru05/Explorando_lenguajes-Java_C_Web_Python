// Reykeel Acosta
// 4-822-1166
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base1, base2, altura, area;

    // Ingreso base que es menor
    printf("Ingrese la base que es menor: ");
    // recordatorio:
    // con la funcion != 1 nos aseguramos que se ingrese un numero y este sea valido
    if (scanf("%f", &base1) != 1)
    {
        printf("Entrada invalida. Debe ingresar un nu8mero.\n");
        return 1;
    }
    if (base1 <= 0)
    {
        printf("La base debe ser un número positivo.\n");
        return 1;
    }

    // Ingreso la base que es mayor
    printf("Ingrese la base que es mayor: ");
    if (scanf("%f", &base2) != 1)
    {
        printf("Entrada invalida. Debe ingresar un numero.\n");
        return 1;
    }
    if (base2 <= 0)
    {
        printf("La base debe ser un numero positivo.\n");
        return 1;
    }

    // Ingreso de altura
    printf("Ingrese la altura: ");
    if (scanf("%f", &altura) != 1)
    {
        printf("Entrada invalida. Debe ingresar un numero.\n");
        return 1;
    }
    if (altura <= 0)
    {
        printf("La altura debe ser un numero positivo.\n");
        return 1;
    }

    // Fórmula  del área de un trapecio
    area = (base1 + base2) * altura / 2;

    printf("\nEl area del trapecio es: %.2f\n", area);

    return 0;
}
