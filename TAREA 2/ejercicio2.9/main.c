#include <stdio.h>
#include <math.h>

int main(void) {
    float RES;  // Variable para almacenar el resultado de la expresión
    int R, T, Q;  // Variables para los valores enteros R, T y Q

    printf("Ingrese los valores de R, T y Q: ");  // pide al usuario ingresar los valores de R, T y Q
    scanf("%d %d %d", &R, &T, &Q);  // Lee y almacena los valores ingresados por el usuario

    RES = pow(R, 4) * pow(T, 3) + 4 * pow(Q, 2);  // Calcula la expresión.

    if (RES < 820) {  // Si el resultado si es menor que 820
        printf("\nA = %d\tT = %d\tQ = %d\n", R, T, Q);  // Muestra los valores de R, T y Q
    }

    return 0;  // Retorna 0 indicando que el programa terminó correctamente
}
