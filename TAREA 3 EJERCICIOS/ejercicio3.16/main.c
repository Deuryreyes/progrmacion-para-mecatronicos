#include <stdio.h>  // Se incluye la biblioteca est�ndar de entrada y salida

int main(void) {  // Funci�n principal del programa con retorno int
    int I, MAT, MAMAT = 0, MEMAT = 0;  // Declaraci�n e inicializaci�n de variables enteras
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0;  // Declaraci�n e inicializaci�n de variables de tipo real

    printf("Ingrese la matr�cula del primer alumno:\t");  // pide la matr�cula del primer alumno
    scanf("%d", &MAT);  // Lee la matr�cula ingresada

    while (MAT) {  // Bucle que contin�a hasta que se ingrese una matr�cula igual a 0
        SUM = 0;  // Inicializa la suma de calificaciones a 0

        for (I = 1; I <= 5; I++) {  // Bucle para leer 5 calificaciones
            printf("\tIngrese la calificaci�n %d del alumno: ", I);  //pide la calificaci�n del alumno
            scanf("%f", &CAL);  // Lee la calificaci�n ingresada
            SUM += CAL;  // Suma la calificaci�n al total
        }

        PRO = SUM / 5;  // Calcula el promedio de las calificaciones
        printf("\nMatr�cula: %d\tPromedio: %5.2f", MAT, PRO);  // dice la matr�cula y el promedio

        if (PRO > MAPRO) {  // Verifica si el promedio actual es el mayor
            MAPRO = PRO;  // Actualiza el mejor promedio
            MAMAT = MAT;  // Actualiza la matr�cula del alumno con mejor promedio
        }

        if (PRO < MEPRO) {  // Verifica si el promedio actual es el menor
            MEPRO = PRO;  // Actualiza el peor promedio
            MEMAT = MAT;  // Actualiza la matr�cula del alumno con peor promedio
        }

        printf("\n\nIngrese la matr�cula del siguiente alumno (0 para terminar): ");  // pide la matr�cula del siguiente alumno
        scanf("%d", &MAT);  // almacena matr�cula ingresada
    }

    // dice los resultados del alumno con mejor y peor promedio
    printf("\n\nAlumno con mejor Promedio:\t%d\t%5.2f", MAMAT, MAPRO);
    printf("\n\nAlumno con peor Promedio:\t%d\t%5.2f\n", MEMAT, MEPRO);

    return 0;  // Retorna 0 indicando que el programa finaliz� correctamente
}
