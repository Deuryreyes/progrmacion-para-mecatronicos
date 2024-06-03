#include <stdio.h>  // Se incluye la biblioteca estándar de entrada y salida

int main(void) {  // Función principal del programa con retorno int
    int I, MAT, MAMAT = 0, MEMAT = 0;  // Declaración e inicialización de variables enteras
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0;  // Declaración e inicialización de variables de tipo real

    printf("Ingrese la matrícula del primer alumno:\t");  // pide la matrícula del primer alumno
    scanf("%d", &MAT);  // Lee la matrícula ingresada

    while (MAT) {  // Bucle que continúa hasta que se ingrese una matrícula igual a 0
        SUM = 0;  // Inicializa la suma de calificaciones a 0

        for (I = 1; I <= 5; I++) {  // Bucle para leer 5 calificaciones
            printf("\tIngrese la calificación %d del alumno: ", I);  //pide la calificación del alumno
            scanf("%f", &CAL);  // Lee la calificación ingresada
            SUM += CAL;  // Suma la calificación al total
        }

        PRO = SUM / 5;  // Calcula el promedio de las calificaciones
        printf("\nMatrícula: %d\tPromedio: %5.2f", MAT, PRO);  // dice la matrícula y el promedio

        if (PRO > MAPRO) {  // Verifica si el promedio actual es el mayor
            MAPRO = PRO;  // Actualiza el mejor promedio
            MAMAT = MAT;  // Actualiza la matrícula del alumno con mejor promedio
        }

        if (PRO < MEPRO) {  // Verifica si el promedio actual es el menor
            MEPRO = PRO;  // Actualiza el peor promedio
            MEMAT = MAT;  // Actualiza la matrícula del alumno con peor promedio
        }

        printf("\n\nIngrese la matrícula del siguiente alumno (0 para terminar): ");  // pide la matrícula del siguiente alumno
        scanf("%d", &MAT);  // almacena matrícula ingresada
    }

    // dice los resultados del alumno con mejor y peor promedio
    printf("\n\nAlumno con mejor Promedio:\t%d\t%5.2f", MAMAT, MAPRO);
    printf("\n\nAlumno con peor Promedio:\t%d\t%5.2f\n", MEMAT, MEPRO);

    return 0;  // Retorna 0 indicando que el programa finalizó correctamente
}
