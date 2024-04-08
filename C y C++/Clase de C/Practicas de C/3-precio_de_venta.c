// Reykeel Acosta
// 4-822-1166
#include <stdio.h>

int main()
{

    char descripcion[100];
    float costo_p, precio_v, utilidad = 1.12, impuesto = 1.15;

    printf("Ingresa la descripcion del articulo: ");
    scanf("%s", descripcion);
    printf("Ingresa el costo de produccion: ");
    scanf("%f", &costo_p);

    // Calcular el precio de venta
    precio_v = (costo_p * utilidad) * impuesto;

    // Imprimir el resultado
    printf("La descripcion del articulo es: %s", descripcion);
    printf("El precio de venta del articulo es: %.2f\n", precio_v);

    return 0;
}
