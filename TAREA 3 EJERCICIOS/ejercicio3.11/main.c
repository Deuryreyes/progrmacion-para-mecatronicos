#include <stdio.h>


int main(void) {  // Funci�n principal del programa con retorno int
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0;  // Inicializaci�n de contadores para cada rango
    float CAL;  // Declaraci�n de la variable para la calificaci�n

    printf("Ingresa la calificaci�n del alumno: ");  // pide la calificaci�n del alumno
    scanf("%f", &CAL);  // Lee la calificaci�n ingresada

    while (CAL != -1) {  // Bucle que contin�a hasta que se ingrese -1
        if (CAL < 4)  // Verifica si la calificaci�n es menor que 4
            R1++;  // Incrementa el contador del rango 1
        else if (CAL < 6)  // Verifica si la calificaci�n es menor que 6
            R2++;  // Incrementa el contador del rango 2
        else if (CAL < 8)  // Verifica si la calificaci�n es menor que 8
            R3++;  // Incrementa el contador del rango 3
        else if (CAL < 9)  // Verifica si la calificaci�n es menor que 9
            R4++;  // Incrementa el contador del rango 4
        else  // Para calificaciones entre 9 y 10
            R5++;  // Incrementa el contador del rango 5

        printf("Ingresa la calificaci�n del alumno: ");  // pide la siguiente calificaci�n
        scanf("%f", &CAL);  // Lee la calificaci�n ingresada
    }

    // dice los resultados de cada rango
    printf("\n0..3.99 = %d", R1);
    printf("\n4..5.99 = %d", R2);
    printf("\n6..7.99 = %d", R3);
    printf("\n8..8.99 = %d", R4);
    printf("\n9..10 = %d\n", R5);

    return 0;  // Retorna 0 indicando que el programa finaliz� correctamente
}
