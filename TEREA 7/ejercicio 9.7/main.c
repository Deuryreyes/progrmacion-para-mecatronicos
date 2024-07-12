#include <stdio.h>

void promedio(FILE *); // Prototipo de función. Se pasa un archivo como parámetro.

void main(void)
{
    FILE *ar; // Declaración de un puntero de tipo FILE para manejar el archivo

    if ((ar = fopen("arc9.txt", "r")) != NULL) // Abre el archivo para lectura y verifica si se abrió correctamente
    {
        promedio(ar); // Se llama a la función promedio. Observa la forma como se pasa el archivo como parámetro.
        fclose(ar); // Cierra el archivo
    }
    else
    {
        printf("No se puede abrir el archivo"); // Imprime un mensaje de error si no se puede abrir el archivo
    }
}

void promedio(FILE *ar1) // Observa la forma como se recibe el archivo.
/* Esta función lee los datos de los alumnos desde un archivo, e imprime tanto
la matrícula como el promedio de cada alumno. */
{
    int i, j, n, mat; // Declaración de variables enteras para índices, número de alumnos y matrícula
    float pro, cal; // Declaración de variables flotantes para promedio y calificación

    fscanf(ar1, "%d", &n); // Lee el valor de n (número de alumnos)

    for (i = 0; i < n; i++) // Bucle para cada alumno
    {
        fscanf(ar1, "%d", &mat); // Lee la matrícula de cada alumno
        printf("%d\t", mat); // Imprime la matrícula del alumno
        pro = 0; // Inicializa el promedio en 0

        for (j = 0; j < 5; j++) // Bucle para cada calificación del alumno
        {
            fscanf(ar1, "%f", &cal); // Lee las cinco calificaciones del alumno
            pro += cal; // Suma las calificaciones para calcular el promedio
        }

        printf("\t%.2f", pro / 5); // Calcula e imprime el promedio de cada alumno
        printf("\n"); // Salto de línea
    }
}
