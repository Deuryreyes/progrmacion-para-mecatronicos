#include <stdio.h>

int main(void) {
    int DISKM, TIE;  // Variables para la distancia entre ciudades y el tiempo de estancia
    float BIL;     // costo del billete

    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: "); // pide la distancia en KM y el tiempo al usuario
    scanf("%d %d", &DISKM, &TIE);  // Lee la distancia en KM  y el tiempo de estancia en DIAS ingresados por el usuario
    if ((DISKM *2 > 500) && (TIE > 10)) {  // Calcula el costo del billete en función de la distancia en KM y el tiempo de estancia
        BIL = DISKM * 2 * 0.19 + 0.8;
    } else {
        BIL = DISKM * 2 * 0.19;
    }

    printf("\n\nCosto del billete: $%.2f\n", BIL);  // Imprime el costo del billete

    return 0;  // Retorna 0 indicando que el programa terminó correctamente
}
