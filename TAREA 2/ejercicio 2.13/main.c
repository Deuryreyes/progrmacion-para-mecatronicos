#include <stdio.h>
#include <math.h>
int main(void) {
    float X;  // Variable para el resultado de la funci�n.
    int Y;    // Variable para el valor de entrada

    printf("Ingrese el valor de Y: ");
    scanf("%d", &Y);  // Lee el valor de Y ingresado por el usuario

    // Calcula el resultado de la funci�n en funci�n del valor de Y
    if (Y < 0 || Y > 50) {  // Si Y est� fuera del rango [0, 50]
        X = 0;  // Establece X como 0
    } else if (Y <= 10) {  // Si Y es menor o igual a 1
        X = 4 / (float)Y - Y;  // Calcula X seg�n la f�rmula correspondiente
    } else if (Y <= 25) {  // Si Y es igual a 2.
        X = pow(Y, 3) - 12;  // Calcula X seg�n la f�rmula correspondiente
    } else {  // Para cualquier otro valor de Y.
        X = pow(Y, 2) + pow(Y, 3) - 18;  // Calcula X seg�n la f�rmula correspondiente
    }


    printf("\n\nResultado de la funci�n: %.2f\n", X);// Imprime el resultado de la funci�n

    return 0;  // Retorna 0 indicando que el programa termin� correctamente
}
