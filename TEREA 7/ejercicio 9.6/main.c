#include <stdio.h> // Incluye la biblioteca est�ndar de entrada y salida

void main(void)
{
    int i, j, n, mat; // Declaraci�n de variables enteras para �ndices, n�mero de alumnos y matr�cula
    float cal, pro; // Declaraci�n de variables flotantes para calificaci�n y promedio
    FILE *ar; // Declaraci�n de un puntero de tipo FILE para manejar el archivo

    if ((ar = fopen("arc9.txt", "r")) != NULL) // Abre el archivo para lectura y verifica si se abri� correctamente
    {
        fscanf(ar, "%d", &n); // Lee el valor de n (n�mero de alumnos)

        for (i = 0; i < n; i++) // Bucle para cada alumno
        {
            fscanf(ar, "%d", &mat); // Lee la matr�cula de cada alumno
            printf("%d\t", mat); // Imprime la matr�cula del alumno
            pro = 0; // Inicializa el promedio en 0

            for (j = 0; j < 5; j++) // Bucle para cada calificaci�n del alumno
            {
                fscanf(ar, "%f", &cal); // Lee las cinco calificaciones del alumno
                pro += cal; // Suma las calificaciones para calcular el promedio
            }

            printf("\t%.2f", pro / 5); // Calcula e imprime el promedio de cada alumno
            printf("\n"); // Salto de l�nea
        }

        fclose(ar); // Cierra el archivo
    }
    else
    {
        printf("No se puede abrir el archivo"); // Imprime un mensaje de error si no se puede abrir el archivo
    }
}
