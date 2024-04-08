// Reykeel Acosta
// 4-822-1166
#include <stdio.h>

int main()
{

    int anio;

    printf("Ingrese el a%co: ", 164);
    scanf("%d", &anio);

    // validamos si es un año es bisiesto
    if (anio % 4 == 0)
    {
        if (anio % 100 == 0 && anio % 400 != 0)
        {
            printf("\nEl a%co %d no es bisiesto.\n", 164, anio);
        }
        else
        {
            printf("\nEl a%co %d es bisiesto.\n", 164, anio);
        }
    }
    else
    {
        printf("\nEl a%co %d no es bisiesto.\n", 164, anio);
    }

    return 0;
}

// Explicacion:
// Un año es bisiesto si es divisible entre 4: anio % 4 == 0.
// Pero si un año es divisible entre 100, no es bisiesto, a menos que también sea divisible entre 400: (anio % 100 == 0 && anio % 400 != 0).
