#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

void main(void)
{
    int i, j, n, mat; // Declaración de variables enteras para índices, número de alumnos y matrícula
    float cal, pro; // Declaración de variables flotantes para calificación y promedio
    FILE *ar; // Declaración de un puntero de tipo FILE para manejar el archivo

    if ((ar = fopen("arc9.txt", "r")) != NULL) // Abre el archivo para lectura y verifica si se abrió correctamente
    {
        fscanf(ar, "%d", &n); // Lee el valor de n (número de alumnos)

        for (i = 0; i < n; i++) // Bucle para cada alumno
        {
            fscanf(ar, "%d", &mat); // Lee la matrícula de cada alumno
            printf("%d\t", mat); // Imprime la matrícula del alumno
            pro = 0; // Inicializa el promedio en 0

            for (j = 0; j < 5; j++) // Bucle para cada calificación del alumno
            {
                fscanf(ar, "%f", &cal); // Lee las cinco calificaciones del alumno
                pro += cal; // Suma las calificaciones para calcular el promedio
            }

            printf("\t%.2f", pro / 5); // Calcula e imprime el promedio de cada alumno
            printf("\n"); // Salto de línea
        }

        fclose(ar); // Cierra el archivo
    }
    else
    {
        printf("No se puede abrir el archivo"); // Imprime un mensaje de error si no se puede abrir el archivo
    }
}
