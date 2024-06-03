#include <stdio.h>

void main(void) // Función principal del programa
{
    int I, N, NUM, SUM; // Declaración de variables enteras
    SUM = 0; // Inicialización de SUM a 0 para la suma de números positivos

    printf("Ingrese el número de datos:\t"); // pide al usuario el número de datos
    scanf("%d", &N); // Lee el número de datos y lo almacena en N

    for (I = 1; I <= N; I++) // Bucle que se ejecuta N veces
    {
        printf("Ingrese el dato número %d:\t", I); // pide al usuario el dato número I
        scanf("%d", &NUM); // Lee el dato ingresado por el usuario y lo almacena en NUM

        if (NUM > 0) // Verifica si el número es positivo
            SUM = SUM + NUM; // Si es positivo, lo suma a SUM
    }
    printf("\nLa suma de los números positivos es: %d\n", SUM); // Imprime la suma de los números positivos
}
