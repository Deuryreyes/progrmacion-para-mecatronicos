#include <stdio.h>
#include <math.h>


int main(void) {  // Funci�n principal del programa
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;  // Declaraci�n e inicializaci�n de variables
    printf("Ingrese el n�mero de datos que se van a procesar:\t");  // pide la cantidad de n�meros a procesar
    scanf("%d", &N);  // Lee el n�mero de datos

    if (N > 0) {  // Verifica que el n�mero de datos sea positivo
        for (I = 1; I <= N; I++) {  // Bucle para procesar cada n�mero
            printf("\nIngrese el n�mero %d: ", I);  // pide el siguiente n�mero
            scanf("%d", &NUM);  // Lee el n�mero ingresado

            if (NUM % 2 == 0) {  // Verifica si el n�mero es par
                SPA += NUM;  // Suma el n�mero par a SPA
            } else {  // Si el n�mero es impar
                SIM += NUM;  // Suma el n�mero impar a SIM
                CIM++;  // Incrementa el contador de n�meros impares
            }
        }

        printf("\nLa suma de los n�meros pares es: %d", SPA);  // dice  la suma de los n�meros pares
        if (CIM > 0) {  // Verifica si hay n�meros impares para evitar divisi�n por cero
            printf("\nEl promedio de n�meros impares es: %5.2f\n", (float)SIM / CIM);  // dice el promedio de n�meros impares
        } else {
            printf("\nNo se ingresaron n�meros impares.\n");  // Mensaje si no hay n�meros impares
        }
    } else {
        printf("\nEl valor de N es incorrecto\n");  // Mensaje de error si N no es positivo
    }

    return 0;  // Retorna 0 indicando que el programa finaliz� correctamente
}
