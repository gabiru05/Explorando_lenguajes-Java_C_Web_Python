// Reykeel Acosta
// 4-822-1166
#include <stdio.h>

int main()
{

    char nombre[30];
    float salario, aumento, s_final;

    printf("Ingresa el nombre del empleado: ");
    scanf("%s", nombre);
    printf("Ingresa el salario: ");
    scanf("%f", &salario);

    if (salario < 1000.0 && salario >= 1)
    {
        aumento = salario * 0.1;
        s_final = salario + aumento;
    }
    else if (salario <= 0)
    {
        printf("Error: Intente nuevamente ingresando un salario valido");
        return 1;
    }
    else
    {
        // sino es mayor se mantiene igual el salario
        s_final = salario;
    }

    printf("\nEmpleado: %s$\n", nombre);
    printf("Salario original: %.2f$\n", salario);
    printf("El aumento: %.2f$\n", aumento);
    printf("El Salario final: %.2f$\n", s_final);

    return 0;
}
