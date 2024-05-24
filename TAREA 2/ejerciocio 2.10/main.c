#include <stdio.h>
#include <math.h>

int main(void) {
    int NUM;  //  almacena el n�mero ingresado por el usuario

    printf("Ingrese el n�mero: ");  // pide al usuario ingresar un n�mero
    scanf("%d", &NUM);  // almacena el n�mero ingresado por el usuario
    if (NUM == 0) {  // Si el n�mero es igual a cero
        printf("\nNulo");  // Imprime que el n�mero es nulo
    } else if (pow(-1, NUM) > 0) {  // Si el n�mero es par
        printf("\nPar");  // Imprime que el n�mero es par
    } else {  // Si no es nulo ni par, entonces es impar.
        printf("\nImpar");  // Imprime que el n�mero es impar
    }

    return 0;  // Retorna 0 indicando que el programa termin� correctamente
}
