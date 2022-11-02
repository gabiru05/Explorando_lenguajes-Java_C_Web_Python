#include <iostream>
using namespace ::std;

#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <stdio.h>

int manos; // Manos-Para-Jugadores
const int Tipo_Carta = 4;
const int Cartas_de_Palo = 13;
const int n = Cartas_de_Palo + 1;
// Inicio de las funciones
void Barajar(int[][n], int[], int[]);
void Repartir(int[][n]);
int Revision(int[][n], int[], int[]);
int Corrida(int[]);
int Flor_i(int[]);

// Las funciones Corrida y Flor_i son llamadas por la funcion de Revision

int main()
{ // Inicia main
    cout << "Loading.\n\n\n";
    sleep(1);
    cout << "Loading..\n\n\n";
    sleep(1);
    cout << "Loading...\n\n\n";
    sleep(1);
    cout << "\t---------BIENVENIDO CASINO GABY---------";
    cout << "\n---------ESTAMOS JUGANDO POQUER---------";
    cout << "\n\n\n";

    int continuar = 1;

    cout << "***Cuantas Rondas quieres tirar POR PARTIDA: ***"
         << "\n";
    cout << "Ingresa numero:";
    cin >> manos;

    while (1 == continuar)
    { // Abre while de continuar
        int valor = 0;
        int Valores_Manos[manos + 1] = {0};
        int Manos_Personas = 1; // Empezamos el contador

        //  los valores de las manos se guardan esta mano
        int mano1[Tipo_Carta + 1] = {0};

        cout << "\nNumero de manos por partida es: " << manos << endl;

        // cantidad de veces reparta a las personas
        while (Manos_Personas <= manos)
        { // Abre while
            int cartas[Tipo_Carta + 1][n] = {{0, 0}};
            int xF[53] = {0};
            int xN[53] = {0};

            Barajar(cartas, xF, xN);
            cout << "\n------- Mano Repartida-------- " << Manos_Personas << " : ";
            cout << endl;
            Repartir(cartas);
            // Esta funcion debe repartir 5 cartas del arreglo cartas
            //  solo hay que imprimir los numeros 1 a 5 ;

            if (1 == Manos_Personas)
            {
                for (int cont = 1; cont <= 5; cont++)
                    mano1[cont] = xN[cont];
            }
            valor = Revision(cartas, xF, xN);
            Valores_Manos[Manos_Personas] = valor;

            Manos_Personas++;

        } // Cierra while

        cout << "Desea continuar jugando si= 1, no=0"
             << "\n\n";
        cout << "Ingrese solo el numero:";
        cin >> continuar;

    } // Cierra while de continuar
    return 0;
} // Cierra main

void Barajar(int Mazo[][14], int xFiguras[], int xNumeros[])
{
    // Declaramos variables a revolver
    int contador, tipo_carta, numero_carta;
    int condicion, type, value;
    cout << "\nIngrese modo de juego" << endl;
    cout << "\nCasino = 1";
    cout << "\nRevisar condiciones = 2 "
         << "\nIngrese solo numero:" << endl;
    cin >> condicion;
    if (condicion == 1)
    {
        for (contador = 1; contador <= 52; contador++)
        { // Abre for
            // El numero de cartas a llenar es 52, las entradas de la variable
            // mazo.
            do
            { // Abre do
                // seleccion aleatoria de tipo carta
                tipo_carta = 1 + rand() % 4;
                numero_carta = 1 + rand() % 13;
                // seleccion aleatoria de numero carta
                // se pondra el numero siguiente
            } while (0 != Mazo[tipo_carta][numero_carta]); // Cierra do
            // No se llene otra carta en mismo lugar ya llenado

            if (0 == Mazo[tipo_carta][numero_carta])
            // Este if es porque es muy probable que la fila y columna elegida
            { // Abre if
                Mazo[tipo_carta][numero_carta] = contador;
                xFiguras[contador] = tipo_carta;
                xNumeros[contador] = numero_carta;
            } // Cierra if
        }     // Cierra for
    }         // Condicion ==1
    else if (condicion == 2)
    {

        for (int r = 1; r <= 5; r++)
        { // Abre for reparte las 5 cartas
            cout << "\nSeleccione tipo carta \n 1 = ♥ \n 2 = ♣ \n 3 = ♠ \n 4=♦"
                 << "\nIngrese solo numero:" << endl;
            cin >> type;

            cout << "\n valor de la carta\n 1= AS, 2 3 4 5 6 7 8 9 10 \n 11 = jota \n 12 = Reina \n 13 = Rey "
                 << "\nIngrese solo numero:" << endl;
            cin >> value;
        }

    } // Condicion ==2
    return;
} // Cierra barajar

// Inicia repartir

void Repartir(int barajadas[][14])

{ // Abre Repartir
    const char *Numero[14] = {"-", "As", "2", "3", "4", "5",
                              "6", "7", "8", "9", "10",
                              "Jota", "Reina", "Rey"};

    const char *Palos[5] = {"-", "♥Corazones", "♣Treboles", "♠Picas",
                            "♦Diamantes"};

    for (int r = 1; r <= 5; r++)
    { // Abre for reparte las 5 cartas
        for (int y = 1; y <= 4; y++)
        {
            cout << Palos[y];
            for (int z = 1; z <= 13; z++)
            { // Abre for doble anidado
                cout << Numero[z];
                if (r == barajadas[y][z])
                    cout << Numero[z] << " de " << Palos[y] << endl;

            } // Cierra for doble anidado
        }     // Cierra for anidado
    }         // Cierra for

} // Cierra Repartir
// Inicia la funcion para revisar

int Revision(int xcartas[][14], int Fig[], int Num[])
{ // Abre Revision
    int temp = Fig[1];
    int iguales = 1;
    int corrida = 0;
    int valor = 1; // El valor de la mano es 1, siempre habra una carta
    // de mayor valor;

    // Aqui se revisa los numeros

    int temp2[14] = {0};
    for (int s = 1; s <= 5; s++)
    { // Abre for
        temp2[Num[s]]++;

    } // Cierra for

    int contador_pares = 0;
    int contador_trio = 0;
    int contador_poquer = 0;

    for (int p = 1; p <= 14; p++)
    { // Abre for
        if (2 == temp2[p])
            contador_pares++; // pueden haber dos pares

        if (3 == temp2[p])
            contador_trio = 1; // Porque solo puede haber un trio

        if (4 == temp2[p])
        {
            contador_poquer = 1; // solo puede haber un poquer 4 cartas
        }

    } // Cierra for

    if (contador_pares != 0)
    {
        cout << "\nUsted tiene " << (contador_pares == 1 ? " 1 par " : " dos pares") << endl;
        if (contador_pares == 1)
            valor = 2;
        else
            valor = 3;
    }

    if (contador_trio == 1)
    { // Abre if
        cout << (0 != contador_pares ? "y 1 trio ( Un full). " : "\nUsted tiene una trio. ");
        if (contador_pares == 1)
            valor = 7;
        else
            valor = 4;
    } // Cierra if

    // Acordarse == para condiciones o revisar todo el rato por error
    if (contador_poquer == 1)
    {
        cout << "\nUsted tiene un poquer. " << endl;
        valor = 8;
    }

    // En este ciclo for se Revisan las figuras
    // Evitar que repitan mismo carta en mazo
    // Eliminamos Iguales

    for (int i = 2; i <= 5; i++)
    { // Abre for
        if (Fig[i] != temp)
        { // Abre if
            iguales = -1;
        } // Cierra if
    }     // Cierra for
    // Despues de haber revisado el color, se usa esa informacion

    if (1 == iguales)
    { // Abre if de iguales
        corrida = Corrida(Num);
        // La funcion corrida verifica que los numeros sean consecutivos
        int flor; // Se verifica que haya flor imperial
        if (0 == corrida)
        { // Abre if anidado
            flor = Flor_i(Num);
            if (0 == flor)
            { // Abre if doble anidado
                cout << "\n\nUsted tiene un flush!" << endl;
                cout << "\n\nFlush – Color Cinco cartas del mismo TIPO. Supera a escalera y pierde con full" << endl;
                valor = 6;
            } // Cierra if doble anidado
            else
            { // Abre else doble anidado
                cout << "\n\nUSTED TIENE UNA FLOR IMPERIAL!" << endl
                     << endl;
                valor = 10;
            } // Cierra else doble anidado
        }     // Cierra if anidado

        else // Abre else anidado
        {
            cout << "\nUsted tiene una escalera de color!" << endl;
            valor = 9;
        } // Cierra else anidado
    }     // Cierra if de colore iguales

    else
    { // Revisamos la escalera para el caso de colores distintos
        int escalera;
        escalera = Corrida(Num);

        if (1 == escalera)
        { // Abre if anidado
            cout << "\nUsted tiene una escalera. " << endl;
            valor = 5;
        } // cierra if anidado
    }     // Cierra else

    cout << "\nEl valor de su mano es: " << valor << endl;
    return valor;
} // Cierra de Revision

// Inicia la funcion corrida, esta funcion se llama por la funcion
// de revision

int Corrida(int X[])
{ // Abre la funcion Corrida

    int temporal;
    for (int l = 1; l < 5; l++)
    { // Abre for
        for (int d = 1; d < 5; d++)
        { // Abre for dentro
            if (X[d + 1] < X[d])
            { // Abre if
                temporal = X[d];
                X[d] = X[d + 1];
                X[d + 1] = temporal;
            } // Cierra if
        }     // Cierra for dentro
    }         // Cierra for

    int ordenados = 0;
    for (int t = 1; t < 5; t++)
    { // Abre for
        if (X[t + 1] == X[t] + 1)
        { // Abre if
            // cout << X[t] << " ";
            ordenados++;
        } // Cierra if
    }     // Cierra for

    // cout << X[5] << endl;
    if (4 != ordenados)
        return 0;
    else

        return 1;
} // cierre funcion corrida

/// Flor_i

int Flor_i(int Y[])
{ // Abre la funcion
    int tempor;
    for (int f = 1; f < 5; f++)
    { // Abre for
        for (int d = 1; d < 5; d++)
        { // Abre for anidado
            if (Y[d + 1] < Y[d])
            { // Abre if
                tempor = Y[d];
                Y[d] = Y[d + 1];
                Y[d + 1] = tempor;
            } // Cierra if
        }     // Cierra for anidado
    }         // Cierra for

    // El doble ciclo for anterior ordeno de menor a mayor el arreglo
    // de numeros de las cartas

    int variable = 10;
    int orden = 0;

    if (Y[1] != 1)
        return 0;

    else
    { // Abre else

        for (int z = 2; z <= 5; z++)
        { // Abre for
            if (Y[z] != variable)
            {
                orden = 1;
            }
            variable++;
        } // Cierra for
    }     // Cierra else

    if (orden != 0)
        return 0;
    else
        return 1;
} // Cierra la funcion flor imperial