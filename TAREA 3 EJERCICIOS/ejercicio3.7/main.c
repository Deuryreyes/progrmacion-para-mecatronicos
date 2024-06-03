#include <stdio.h> // Incluye la biblioteca est�ndar de entrada y salida


int main(void) { // Funci�n principal del programa
    int I, N; // Declaraci�n de variables enteras I (contador) y N (n�mero de lanzamientos)
    float LAN, SLA = 0; // Declaraci�n de variables flotantes LAN (lanzamiento) y SLA (suma de lanzamientos), SLA inicializada a 0


    do { // Inicio del bucle do-while
        printf("Ingrese el n�mero de lanzamientos:\t"); //  pide el n�mero de lanzamientos
        scanf("%d", &N); // toma el n�mero de lanzamientos ingresado por el usuario y lo almacena en N
    } while (N < 1 || N > 11); // Repite el bucle mientras N no est� entre 1 y 11

    for (I = 1; I <= N; I++) { // Inicio del bucle for que se repite desde 1 hasta N
        printf("\nIngrese el lanzamiento %d: ", I); // pide el lanzamiento n�mero I
        scanf("%f", &LAN); // toma la distancia del lanzamiento ingresado por el usuario y lo almacena en LAN
        SLA = SLA + LAN; // Acumula la distancia del lanzamiento en la variable SLA
    }

    SLA = SLA / N; // Calcula el promedio dividiendo la suma total de lanzamientos entre el n�mero de lanzamientos
    printf("\nEl promedio de lanzamientos es: %.2f\n", SLA); // me dice el promedio de los lanzamientos con dos decimales

    return 0; // Indica que el programa termin� correctamente
}
