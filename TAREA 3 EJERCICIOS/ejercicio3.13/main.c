#include <stdio.h>

int main(void) {  // Función principal del programa con retorno int
    int I, PRI = 0, SEG = 1, SIG;  // Declaración e inicialización de variables


    printf("\t%d \t%d", PRI, SEG);// pide los dos primeros números de la serie de Fibonacci

    // Bucle para calcular los números de Fibonacci
    for (I = 3; I <= 50; I++) {  // Inicia en 3 porque los dos primeros ya están impresos
        SIG = PRI + SEG;  // Calcula el siguiente número en la serie
        PRI = SEG;  // Actualiza PRI al valor de SEG
        SEG = SIG;  // Actualiza SEG al valor de SIG
        printf("\t%d", SIG);  // dice el siguiente número en la serie
    }

    printf("\n");  // Imprime una nueva línea al final de la serie
    return 0;  // Retorna 0 indicando que el programa finalizó correctamente
}
