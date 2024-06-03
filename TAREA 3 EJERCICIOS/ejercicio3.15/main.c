#include <stdio.h>
#include <math.h>  // biblioteca de matemáticas



int main(void) {  // Función principal del programa con retorno int
    int I = 1, B = 0, C;  // Declaración e inicialización de variables
    double RES;  // Declaración de variable de doble precisión

    RES = 4.0 / I;  // Inicializa RES con 4 dividido por 1
    C = 1;  // Inicializa el contador de términos

    while (fabs(3.1415 - RES) > 0.0005) {  // Bucle hasta que la diferencia con π sea menor que 0.0005
        I += 2;  // Incrementa I en 2 para los términos impares

        if (B) {  // Alterna entre suma y resta
            RES += (double)(4.0 / I);  // Suma el término actual a RES
            B = 0;  // Cambia el valor de B
        } else {
            RES -= (double)(4.0 / I);  // Resta el término actual de RES
            B = 1;  // Cambia el valor de B
        }

        C++;  // Incrementa el contador de términos
    }


    printf("\nNúmero de términos: %d\n", C);// dice el número de términos necesarios para la aproximación

    return 0;  // Retorna 0 indicando que el programa finalizó correctamente
}
