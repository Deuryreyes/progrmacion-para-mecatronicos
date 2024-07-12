#include <stdio.h>

void promedio(FILE *); // Prototipo de funci�n. Se pasa un archivo como par�metro.

void main(void)
{
    FILE *ar; // Declaraci�n de un puntero de tipo FILE para manejar el archivo

    if ((ar = fopen("arc9.txt", "r")) != NULL) // Abre el archivo para lectura y verifica si se abri� correctamente
    {
        promedio(ar); // Se llama a la funci�n promedio. Observa la forma como se pasa el archivo como par�metro.
        fclose(ar); // Cierra el archivo
    }
    else
    {
        printf("No se puede abrir el archivo"); // Imprime un mensaje de error si no se puede abrir el archivo
    }
}

void promedio(FILE *ar1) // Observa la forma como se recibe el archivo.
/* Esta funci�n lee los datos de los alumnos desde un archivo, e imprime tanto
la matr�cula como el promedio de cada alumno. */
{
    int i, j, n, mat; // Declaraci�n de variables enteras para �ndices, n�mero de alumnos y matr�cula
    float pro, cal; // Declaraci�n de variables flotantes para promedio y calificaci�n

    fscanf(ar1, "%d", &n); // Lee el valor de n (n�mero de alumnos)

    for (i = 0; i < n; i++) // Bucle para cada alumno
    {
        fscanf(ar1, "%d", &mat); // Lee la matr�cula de cada alumno
        printf("%d\t", mat); // Imprime la matr�cula del alumno
        pro = 0; // Inicializa el promedio en 0

        for (j = 0; j < 5; j++) // Bucle para cada calificaci�n del alumno
        {
            fscanf(ar1, "%f", &cal); // Lee las cinco calificaciones del alumno
            pro += cal; // Suma las calificaciones para calcular el promedio
        }

        printf("\t%.2f", pro / 5); // Calcula e imprime el promedio de cada alumno
        printf("\n"); // Salto de l�nea
    }
}
