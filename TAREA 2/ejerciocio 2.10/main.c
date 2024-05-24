#include <stdio.h>
#include <math.h>

int main(void) {
    int NUM;  //  almacena el número ingresado por el usuario

    printf("Ingrese el número: ");  // pide al usuario ingresar un número
    scanf("%d", &NUM);  // almacena el número ingresado por el usuario
    if (NUM == 0) {  // Si el número es igual a cero
        printf("\nNulo");  // Imprime que el número es nulo
    } else if (pow(-1, NUM) > 0) {  // Si el número es par
        printf("\nPar");  // Imprime que el número es par
    } else {  // Si no es nulo ni par, entonces es impar.
        printf("\nImpar");  // Imprime que el número es impar
    }

    return 0;  // Retorna 0 indicando que el programa terminó correctamente
}
