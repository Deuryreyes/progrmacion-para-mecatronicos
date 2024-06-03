#include <stdio.h>


int main(void)
{
    int I, J, NUM, SUM, C = 0; // Declaración de variables enteras
    printf("\nIngrese el número límite: "); // pide al usuario ingresar el límite
    scanf("%d", &NUM); // almacena número límite ingresado por el usuario


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
            printf("\n%d es un número perfecto", I); // dice que I es un número perfecto
            C++; // Incrementa el contador de números perfectos
        }
    }

    printf("\nEntre 1 y %d hay %d números perfectos\n", NUM, C); // dice el total de números perfectos encontrados
    return 0; // Indica que el programa se ha ejecutado correctamente
}
