// Reykeel Acosta
// 4-822-1166

#include <stdio.h>

int main()
{
    float centi, fahre;

    printf("Ingrese los grados centigrados: ");
    scanf("%f", &centi);

    // Formula para calcular celsio a fahrenheit
    fahre = ((centi * 1.8)) + 32;

    // Imprimir el resultado
    printf("%.0f C°  son:  %.0f grados fahrenheit.\n", centi, fahre);

    return 0;
}
