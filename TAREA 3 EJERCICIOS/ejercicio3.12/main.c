#include <stdio.h>  // Se incluye la biblioteca est�ndar de entrada y salida

int main(void) {  // Funci�n principal del programa con retorno int
    int NUM;  // Declaraci�n de la variable para el n�mero

    printf("Ingresa el n�mero para calcular la serie: ");  // pide el n�mero al usuario
    scanf("%d", &NUM);  // lee el n�mero ingresado

    if (NUM > 0) {  // Verifica que el n�mero sea positivo
        printf("\nSerie de ULAM\n");  // dice el encabezado de la serie
        printf("%d \t", NUM);  // dice el n�mero inicial

        while (NUM != 1) {  // Bucle que contin�a hasta que el n�mero sea 1
            if (NUM % 2 == 0)  // Verifica si el n�mero es par
                NUM = NUM / 2;  // Si es par lo divide entre 2
            else  // Si el n�mero es impar
                NUM = NUM * 3 + 1;  // Lo multiplica por 3 y le suma 1

            printf("%d \t", NUM);  // Imprime el siguiente n�mero de la serie
        }
        printf("\n");  // Imprime una nueva l�nea al final de la serie
    } else {
        printf("\nNUM debe ser un entero positivo\n");  // Mensaje de error si el n�mero no es positivo
    }

    return 0;  // Retorna 0 indicando que el programa finaliz� correctamente
}
