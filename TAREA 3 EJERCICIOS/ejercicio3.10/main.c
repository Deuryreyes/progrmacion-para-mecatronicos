#include <stdio.h>
#include <math.h>


int main(void) {  // Función principal del programa
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;  // Declaración e inicialización de variables
    printf("Ingrese el número de datos que se van a procesar:\t");  // pide la cantidad de números a procesar
    scanf("%d", &N);  // Lee el número de datos

    if (N > 0) {  // Verifica que el número de datos sea positivo
        for (I = 1; I <= N; I++) {  // Bucle para procesar cada número
            printf("\nIngrese el número %d: ", I);  // pide el siguiente número
            scanf("%d", &NUM);  // Lee el número ingresado

            if (NUM % 2 == 0) {  // Verifica si el número es par
                SPA += NUM;  // Suma el número par a SPA
            } else {  // Si el número es impar
                SIM += NUM;  // Suma el número impar a SIM
                CIM++;  // Incrementa el contador de números impares
            }
        }

        printf("\nLa suma de los números pares es: %d", SPA);  // dice  la suma de los números pares
        if (CIM > 0) {  // Verifica si hay números impares para evitar división por cero
            printf("\nEl promedio de números impares es: %5.2f\n", (float)SIM / CIM);  // dice el promedio de números impares
        } else {
            printf("\nNo se ingresaron números impares.\n");  // Mensaje si no hay números impares
        }
    } else {
        printf("\nEl valor de N es incorrecto\n");  // Mensaje de error si N no es positivo
    }

    return 0;  // Retorna 0 indicando que el programa finalizó correctamente
}
