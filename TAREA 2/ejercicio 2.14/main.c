#include <stdio.h>
int main(void) {
    int CLA, TIE;    // Variables para la clave de la zona y el tiempo de llamada
    float COS = -1;  // Variable para el costo de la llamada, inicializada a detectar errores

    printf("Ingresa la clave y el tiempo: ");
    scanf("%d %d", &CLA, &TIE);  // Lee la clave y el tiempo ingresados por el usuario

    switch (CLA) {
        case 1:
            COS = TIE * 0.13 / 60;  // Calcula el costo para la clave 1
            break;
        case 2:
            COS = TIE * 0.11 / 60;  // Calcula el costo para la clave 2
            break;
        case 5:
        case 6:
            COS = TIE * 0.22 / 60;  // Calcula el costo para las claves 5 y 6
            break;
        case 7:
        case 9:
            COS = TIE * 0.17 / 60;  // Calcula el costo para las claves 7 y 9
            break;
        case 10:
        case 15:
            COS = TIE * 0.20 / 60;  // Calcula el costo para las claves 10 y 15
            break;
        case 20:
            COS = TIE * 0.28 / 60;  // Calcula el costo para la clave 20
            break;
        default:
            printf("\nError en la clave");  // Imprime un mensaje de error si la clave no es válida
            break;
    }

    if (COS != -1) {  // Si COS no es igual a -1 se calculó un costo válido
        printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f", CLA, TIE, COS);  // Imprime los resultados
    }

    return 0;  // Retorna 0 indicando que el programa terminó correctamente
}
