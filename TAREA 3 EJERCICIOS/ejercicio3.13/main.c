#include <stdio.h>

int main(void) {  // Funci�n principal del programa con retorno int
    int I, PRI = 0, SEG = 1, SIG;  // Declaraci�n e inicializaci�n de variables


    printf("\t%d \t%d", PRI, SEG);// pide los dos primeros n�meros de la serie de Fibonacci

    // Bucle para calcular los n�meros de Fibonacci
    for (I = 3; I <= 50; I++) {  // Inicia en 3 porque los dos primeros ya est�n impresos
        SIG = PRI + SEG;  // Calcula el siguiente n�mero en la serie
        PRI = SEG;  // Actualiza PRI al valor de SEG
        SEG = SIG;  // Actualiza SEG al valor de SIG
        printf("\t%d", SIG);  // dice el siguiente n�mero en la serie
    }

    printf("\n");  // Imprime una nueva l�nea al final de la serie
    return 0;  // Retorna 0 indicando que el programa finaliz� correctamente
}
