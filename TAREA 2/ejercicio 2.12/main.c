#include <stdio.h>
#include <math.h>

int main(void) {
    int T, P, N;  // Variables para T, P y N.

    printf("Ingrese los valores de T, P y N: ");  // pide al usuario ingresar los valores de T, P y N
    scanf("%d %d %d", &T, &P, &N);  // Lee y almacena los valores ingresados por el usuario

    if (P != 0) {  // Si P es diferente de cero
        if (pow(T / P, N) == (pow(T, N) / pow(P, N))) {  // Comprueba la igualdad de las expresiones
            printf("\nSe comprueba la igualdad");  // dice que comprueba la igualdad
        } else {
            printf("\nNo se comprueba la igualdad");  // dice que  no se comprueba la igualdad
        }
    } else {
        printf("\nP tiene que ser diferente de cero");  // dice que  P debe ser diferente de cero
    }

    return 0;  // Retorna 0 indicando que el programa terminó correctamente
}
