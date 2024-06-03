#include <stdio.h>


int main(void) {  // Función principal del programa con retorno int
    int I, NUM;  // Declaración de variables enteras para el índice y el número
    long FAC;  // Declaración de variable long para almacenar el factorial

    printf("\nIngrese el número: ");  // pide al usuario ingresar un número
    scanf("%d", &NUM);  // Lee el número ingresado por el usuario

    if (NUM >= 0) {  // Verifica si el número es no negativo
        FAC = 1;  // Inicializa el factorial en 1
        for (I = 1; I <= NUM; I++)  // Bucle para calcular el factorial
            FAC *= I;  // Multiplica FAC por I en cada iteración
        printf("\nEl factorial de %d es: %ld\n", NUM, FAC);  // dice el resultado del factorial
    } else {
        printf("\nError en el dato ingresado\n");  // indica de error para números negativos
    }

    return 0;  // Retorna 0 indicando que el programa finalizó correctamente
}
