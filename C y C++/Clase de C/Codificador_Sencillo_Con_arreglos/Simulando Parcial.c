#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*  declaramos el contador de puntos */
    int x;
    /* Declaramos los arreglos comparativos */
    char pal1[100];
    char pal2[100];
    char pal3[100];
    char pal4[100];
    char pal5[100];
    char pal6[100];
    char pal7[100];
    char pal8[100];
    char pal9[100];
    char pal10[100];
    /* Declaramos los arreglos con las respuestas */
    char pal11[100] = {"scanf,printf"};
    char pal22[] = {"camel case"};
    /* Por declarar */
    char pal33[100] = {"scanf,printf"};
    char pal44[100] = {"scanf,printf"};
    char pal55[100] = {"scanf,printf"};
    char pal66[100] = {"scanf,printf"};
    char pal77[100] = {"scanf,printf"};
    char pal88[100] = {"scanf,printf"};
    char pal99[100] = {"scanf,printf"};
    char pal100[100] = {"scanf,printf"};

    /*     Inicio de examen */

    printf("si hay más de una respuesta solo las debe separar por coma\n");
    printf("1.  Cuál es la función que lee y cual la que imprime en C");
    printf("\nIngrese una palabra: ");
    scanf("%s", pal1);
    /* Bloque de comparativas */
    // compararmos la 1
    // if (pal1==pal2) pero como compara en areglo con caracteres se usa strcmp
    if (strcmp(pal1, pal11) == 0)
    {
        printf("\nRespuesta correcta: 15 puntos \n%s\n%s", pal11, pal1);
        x += 15;
    }
    else
    {
        printf("\nRespuesta incorrecta: 0 puntos \n%s: es texto correcto\n%s :texto ingresado ", pal11, pal1);
    }

    printf("\n2. Cuál es el estilo de escritura de una función");
    printf("\nIngrese una palabra: ");
    scanf("%s", pal2);

    // comparamos la 2
    if (strcmp(pal2, pal22) == 0)
    {
        printf("\nRespuesta correcta: 15 puntos \n%s\n%s", pal22, pal2);
        x += 15;
    }
    else
    {
        printf("\nRespuesta incorrecta: 0 puntos \n%s: es texto correcto\n%s :texto ingresado ", pal22, pal2);
    }

    // Otras oraciones
    /*
        printf("1.  Cuál es la función que lee y cual la que imprime en C");
        printf("Ingrese una palabra: ");
        scanf("%s", pal3);

        printf("1.  Cuál es la función que lee y cual la que imprime en C");
        printf("Ingrese una palabra: ");
        scanf("%s", pal4);

        printf("1.  Cuál es la función que lee y cual la que imprime en C");
        printf("Ingrese una palabra: ");
        scanf("%s", pal5);

        printf("1.  Cuál es la función que lee y cual la que imprime en C");
        printf("Ingrese una palabra: ");
        scanf("%s", pal6);
     */

    printf("\n\nTotal de puntos obtenidos %i", x);
}