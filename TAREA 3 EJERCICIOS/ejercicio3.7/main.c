#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida


int main(void) { // Función principal del programa
    int I, N; // Declaración de variables enteras I (contador) y N (número de lanzamientos)
    float LAN, SLA = 0; // Declaración de variables flotantes LAN (lanzamiento) y SLA (suma de lanzamientos), SLA inicializada a 0


    do { // Inicio del bucle do-while
        printf("Ingrese el número de lanzamientos:\t"); //  pide el número de lanzamientos
        scanf("%d", &N); // toma el número de lanzamientos ingresado por el usuario y lo almacena en N
    } while (N < 1 || N > 11); // Repite el bucle mientras N no esté entre 1 y 11

    for (I = 1; I <= N; I++) { // Inicio del bucle for que se repite desde 1 hasta N
        printf("\nIngrese el lanzamiento %d: ", I); // pide el lanzamiento número I
        scanf("%f", &LAN); // toma la distancia del lanzamiento ingresado por el usuario y lo almacena en LAN
        SLA = SLA + LAN; // Acumula la distancia del lanzamiento en la variable SLA
    }

    SLA = SLA / N; // Calcula el promedio dividiendo la suma total de lanzamientos entre el número de lanzamientos
    printf("\nEl promedio de lanzamientos es: %.2f\n", SLA); // me dice el promedio de los lanzamientos con dos decimales

    return 0; // Indica que el programa terminó correctamente
}
