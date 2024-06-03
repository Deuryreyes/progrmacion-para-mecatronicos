#include <stdio.h>


int main(void)
{
    int I, J, NUM, SUM, C = 0; // Declaraci�n de variables enteras
    printf("\nIngrese el n�mero l�mite: "); // pide al usuario ingresar el l�mite
    scanf("%d", &NUM); // almacena n�mero l�mite ingresado por el usuario


    for (I = 1; I <= NUM; I++) // Bucle externo para iterar desde 1 hasta NUM
    {
        SUM = 0; // Inicializa la suma en 0


        for (J = 1; J <= (I / 2); J++)// Bucle interno para encontrar divisores de I
        {
            if (I % J == 0) // Si J es divisor de I
            {
                SUM += J; // Agrega J a la suma
            }
        }

        if (SUM == I) // Si la suma de los divisores de I es igual a I
        {
            printf("\n%d es un n�mero perfecto", I); // dice que I es un n�mero perfecto
            C++; // Incrementa el contador de n�meros perfectos
        }
    }

    printf("\nEntre 1 y %d hay %d n�meros perfectos\n", NUM, C); // dice el total de n�meros perfectos encontrados
    return 0; // Indica que el programa se ha ejecutado correctamente
}
