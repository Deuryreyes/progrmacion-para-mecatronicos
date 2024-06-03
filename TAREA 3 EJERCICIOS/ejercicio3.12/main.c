#include <stdio.h>  // Se incluye la biblioteca estándar de entrada y salida

int main(void) {  // Función principal del programa con retorno int
    int NUM;  // Declaración de la variable para el número

    printf("Ingresa el número para calcular la serie: ");  // pide el número al usuario
    scanf("%d", &NUM);  // lee el número ingresado

    if (NUM > 0) {  // Verifica que el número sea positivo
        printf("\nSerie de ULAM\n");  // dice el encabezado de la serie
        printf("%d \t", NUM);  // dice el número inicial

        while (NUM != 1) {  // Bucle que continúa hasta que el número sea 1
            if (NUM % 2 == 0)  // Verifica si el número es par
                NUM = NUM / 2;  // Si es par lo divide entre 2
            else  // Si el número es impar
                NUM = NUM * 3 + 1;  // Lo multiplica por 3 y le suma 1

            printf("%d \t", NUM);  // Imprime el siguiente número de la serie
        }
        printf("\n");  // Imprime una nueva línea al final de la serie
    } else {
        printf("\nNUM debe ser un entero positivo\n");  // Mensaje de error si el número no es positivo
    }

    return 0;  // Retorna 0 indicando que el programa finalizó correctamente
}
