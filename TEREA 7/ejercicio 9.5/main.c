#include <stdio.h>

void main(void)
{
    int i, j, n, mat; // Declaración de variables enteras para índices, número de alumnos y matrícula
    float cal; // Declaración de variable flotante para la calificación
    FILE *ar; // Declaración de un puntero de tipo FILE para manejar el archivo

    printf("Ingrese el número de alumnos: "); // Solicita el número de alumnos al usuario
    scanf("%d", &n); // Lee el número de alumnos ingresado por el usuario
    // Se asume que el valor que ingresa el usuario está comprendido entre 1 y 35.

    if ((ar = fopen("arc8.txt", "w")) != NULL) // Abre el archivo para escritura y verifica si se abrió correctamente
    {
        fprintf(ar, "%d ", n); // Escribe el número de alumnos en el archivo

        for (i = 0; i < n; i++) // Bucle para cada alumno
        {
            printf("\nIngrese la matrícula del alumno %d: ", i + 1); // Solicita la matrícula del alumno
            scanf("%d", &mat); // Lee la matrícula ingresada por el usuario
            fprintf(ar, "\n%d ", mat); // Escribe la matrícula en el archivo

            for (j = 0; j < 5; j++) // Bucle para cada calificación del alumno
            {
                printf("Calificación %d: ", j + 1); // Solicita la calificación
                scanf("%f", &cal
