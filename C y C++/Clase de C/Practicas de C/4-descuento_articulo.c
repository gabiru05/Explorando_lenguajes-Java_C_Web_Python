// Reykeel Acosta
// 4-822-1166
#include <stdio.h>

int main()
{

    char descripcion[100];
    float precio, descuento, precio_f;

    printf("Descripción del artículo: ");
    scanf("%s", descripcion);
    printf("Precio: ");
    scanf("%f", &precio);

    if (precio > 100.0)
    {
        descuento = precio * 0.15;
        precio_f = precio - descuento;
    }
    else
    {
        descuento = 0.0;
        precio_f = precio;
    }

    printf("\nDescripción: %s\n", descripcion);
    printf("Precio original: %.2f\n", precio);
    printf("Descuento: %.2f\n", descuento);
    printf("Precio final: %.2f\n", precio_f);

    return 0;
}
