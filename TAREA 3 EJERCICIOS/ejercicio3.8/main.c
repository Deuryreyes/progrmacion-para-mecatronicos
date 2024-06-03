#include <stdio.h>


int main(void) {  // Funci�n principal del programa con retorno int
    int I, NUM;  // Declaraci�n de variables enteras para el �ndice y el n�mero
    long FAC;  // Declaraci�n de variable long para almacenar el factorial

    printf("\nIngrese el n�mero: ");  // pide al usuario ingresar un n�mero
    scanf("%d", &NUM);  // Lee el n�mero ingresado por el usuario

    if (NUM >= 0) {  // Verifica si el n�mero es no negativo
        FAC = 1;  // Inicializa el factorial en 1
        for (I = 1; I <= NUM; I++)  // Bucle para calcular el factorial
            FAC *= I;  // Multiplica FAC por I en cada iteraci�n
        printf("\nEl factorial de %d es: %ld\n", NUM, FAC);  // dice el resultado del factorial
    } else {
        printf("\nError en el dato ingresado\n");  // indica de error para n�meros negativos
    }

    return 0;  // Retorna 0 indicando que el programa finaliz� correctamente
}
