#include <stdio.h>

void main(void)
{
    int i, j, n, mat; // Declaraci�n de variables enteras para �ndices, n�mero de alumnos y matr�cula
    float cal; // Declaraci�n de variable flotante para la calificaci�n
    FILE *ar; // Declaraci�n de un puntero de tipo FILE para manejar el archivo

    printf("Ingrese el n�mero de alumnos: "); // Solicita el n�mero de alumnos al usuario
    scanf("%d", &n); // Lee el n�mero de alumnos ingresado por el usuario
    // Se asume que el valor que ingresa el usuario est� comprendido entre 1 y 35.

    if ((ar = fopen("arc8.txt", "w")) != NULL) // Abre el archivo para escritura y verifica si se abri� correctamente
    {
        fprintf(ar, "%d ", n); // Escribe el n�mero de alumnos en el archivo

        for (i = 0; i < n; i++) // Bucle para cada alumno
        {
            printf("\nIngrese la matr�cula del alumno %d: ", i + 1); // Solicita la matr�cula del alumno
            scanf("%d", &mat); // Lee la matr�cula ingresada por el usuario
            fprintf(ar, "\n%d ", mat); // Escribe la matr�cula en el archivo

            for (j = 0; j < 5; j++) // Bucle para cada calificaci�n del alumno
            {
                printf("Calificaci�n %d: ", j + 1); // Solicita la calificaci�n
                scanf("%f", &cal
