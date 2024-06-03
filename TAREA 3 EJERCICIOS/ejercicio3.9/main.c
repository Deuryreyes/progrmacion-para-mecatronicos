#include <stdio.h>


int main(void) {  // Función principal del programa con retorno int
    int I = 2;  // Inicializa la variable I en 2
    int CAM = 1;  // Inicializa la variable CAM en 1
    long SSE = 0;  // Inicializa la suma SSE en 0

    while (I <= 2500) {  // Bucle que se ejecuta mientras I sea menor o igual a 2500
        SSE = SSE + I;  // Suma el valor de I a SSE
        printf("\t %d", I);  // dice el valor de I

        if (CAM) {  // Si CAM es verdadero
            I += 5;  // Incrementa I en 5
            CAM--;  // Decrementa CAM
        } else {  // Si CAM es falso
            I += 3;  // Incrementa I en 3
            CAM++;  // Incrementa CAM
        }
    }

    printf("\nLa suma de la serie es: %ld\n", SSE);  // dice la suma total de la serie

    return 0;  // Retorna 0 indicando que el programa finalizó correctamente
}
