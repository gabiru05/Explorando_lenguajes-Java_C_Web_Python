// Reykeel Acosta
// 4-822-1166
#include <stdio.h>

int main()
{

    char name[20];
    float h_worked, h_tarifa, t_deduccion, salario;

    printf("Ingresa el nombre del empleado: ");
    scanf("%s", name);
    printf("Ingrese las horas que trabajo el empleado: ");
    scanf("%f", &h_worked);
    printf("Ingresa su tarifa x hora: ");
    scanf("%f", &h_tarifa);
    printf("Ingrese las deducciones totales: ");
    scanf("%f", &t_deduccion);

    salario = (h_worked * h_tarifa) - t_deduccion;

    printf("El salario neto para %s es de:  %.2f$ \n", name, salario);

    return 0;
}