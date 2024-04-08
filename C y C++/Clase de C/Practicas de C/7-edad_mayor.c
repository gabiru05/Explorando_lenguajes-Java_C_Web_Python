// Reykeel Acosta
// 4-822-1166
#include <stdio.h>

int main()
{
    char nombre[30];
    int f_nacimiento, edad;

    printf("Nombre del estudiante: ");
    scanf("%s", nombre);
    printf("A%co de nacimiento: ", 164); // Utilizamos el código ascii para la letra -ñ-
    scanf("%d", &f_nacimiento);

    edad = 2024 - f_nacimiento;

    if (f_nacimiento <= 1920)
    {
        printf("--Atencion: Puede que no sea una edad valida--\n");
    }

    // Verificamos que sea mayor de edad
    if (edad >= 18)
    {
        // Utilizamos codigo ascii porque en algunos compiladores no aparece la tilde o letra ñ
        // 164 para la letra ñ
        // 161 para la letra i tildada
        printf("%s tiene %d a%cos. S%c es mayor de edad.\n", nombre, edad, 164, 161);
    }
    else
    {
        printf("%s tiene %d a%cos. NO es mayor de edad.\n", nombre, edad, 164);
    }

    return 0;
}
