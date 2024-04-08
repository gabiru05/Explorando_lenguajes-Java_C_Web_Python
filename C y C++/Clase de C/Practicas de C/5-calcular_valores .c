// Reykeel Acosta
// 4-822-1166
#include <stdio.h>

int main()
{

    float a, b, x, y, resultado;

    printf("Valor de a: ");
    scanf("%f", &a);
    printf("Valor de b: ");
    scanf("%f", &b);
    printf("Valor de x: ");
    scanf("%f", &x);
    printf("Valor de y: ");
    scanf("%f", &y);

    if (a < 0 || b < 0 || x < 0 || y < 0)
    {
        printf("Error: Los datos no pueden ser negativos.\n");
        return 1;
    }
    resultado = 3 * (a + b) - 4 * (x + y);
    printf("\nResultado de la ecuación: %.2f\n", resultado);

    return 0;
}
