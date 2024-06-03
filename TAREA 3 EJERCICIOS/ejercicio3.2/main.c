#include <stdio.h>

void main(void) // Funci�n principal del programa
{
    int I, N, NUM, SUM; // Declaraci�n de variables enteras
    SUM = 0; // Inicializaci�n de SUM a 0 para la suma de n�meros positivos

    printf("Ingrese el n�mero de datos:\t"); // pide al usuario el n�mero de datos
    scanf("%d", &N); // Lee el n�mero de datos y lo almacena en N

    for (I = 1; I <= N; I++) // Bucle que se ejecuta N veces
    {
        printf("Ingrese el dato n�mero %d:\t", I); // pide al usuario el dato n�mero I
        scanf("%d", &NUM); // Lee el dato ingresado por el usuario y lo almacena en NUM

        if (NUM > 0) // Verifica si el n�mero es positivo
            SUM = SUM + NUM; // Si es positivo, lo suma a SUM
    }
    printf("\nLa suma de los n�meros positivos es: %d\n", SUM); // Imprime la suma de los n�meros positivos
}
