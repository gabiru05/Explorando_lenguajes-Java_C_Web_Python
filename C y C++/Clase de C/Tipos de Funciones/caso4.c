#include <stdio.h>
#include <stdlib.h>
#define N 4

void cargar(int cifras[4])
{
#define N 4
    int c, i, n;

    /* Cifrado */
    int x, w, f, d, sum[10], resi[10];
    for (x = 0; x <= 4; x++)
    {
        /* suma */
        w = cifras[x];
        w = w + 7;
        sum[x] = w;
        /* residuo */
        f = sum[x];
        d = f % 10;
        resi[x] = d;
    }

    /* Intercambio */
    int cryp[10];
    cryp[0] = resi[2];
    cryp[1] = resi[3];
    cryp[2] = resi[0];
    cryp[3] = resi[1];

    /* Impresion */

    // Originial
    printf(" \n Original: ");
    int s;
    for (s = 0; s < n; ++s)
    {

        printf("%i", cifras[s]);
    }

    // Suma
    printf(" \n Suma: ");
    for (s = 0; s < n; ++s)
    {

        printf("%i", sum[s]);
    }

    // residuo
    printf(" \n con residuo: ");
    for (s = 0; s < n; ++s)
    {

        printf("%i", resi[s]);
    }
    // intercambiada
    printf("\n intercambiada: ");
    for (s = 0; s < n; ++s)
    {
        printf("%i", cryp[s]);
    }
}

int main()
{
#define N 4
    int eleccion, numm;
    int cifras[N], n, c, i;
    unsigned long long int num;

    printf("Ingrese modo: \n ");
    scanf("%i", &eleccion);

    printf("Escribe un numero de %d cifras como maximo: ", N);
    /*   fflush(stdout); */
    num = 0;
    for (n = 0; n < N && (c = getchar()) != '\n'; n++)
    {
        cifras[n] = c - '0';
        num *= 10;
        num += cifras[n];
    }
    /* Comprobamos las cifras */
    printf("cifras: ");

    for (i = 0; i < n; ++i)
    {
        printf(" %d,", cifras[i]);
    }

    switch (eleccion)
    {
    case 1:
        cargar(cifras);

        break;

    default:
        break;
    }
}