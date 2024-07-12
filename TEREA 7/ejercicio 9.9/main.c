#include <stdio.h> // Incluye la biblioteca est�ndar de entrada y salida


typedef struct { // Declaraci�n de la estructura alumno
    int matricula; // N�mero de matr�cula del alumno
    char nombre[20]; // Nombre del alumno
    int carrera; // C�digo de la carrera del alumno
    float promedio; // Promedio del alumno
} alumno;

void lee(FILE *); // Prototipo de funci�n

void main(void)
{
    FILE *ar; // Declaraci�n de un puntero de tipo FILE para manejar el archivo

    if ((ar = fopen("ad1.dat", "r")) != NULL) // Abre el archivo para lectura y verifica si se abri� correctamente
        lee(ar); // Llama a la funci�n lee si el archivo se abre correctamente
    else
        printf("\nEl archivo no se puede abrir"); // Imprime un mensaje de error si no se puede abrir el archivo

    fclose(ar); // Cierra el archivo
}

void lee(FILE *ap)
/* Esta funci�n se utiliza para leer bloques de un archivo de acceso directo. */
{
    alumno alu; // Declaraci�n de una variable de tipo estructura alumno

    fread(&alu, sizeof(alumno), 1, ap); // Lee el primer bloque del archivo y lo almacena en alu


    while (!feof(ap)) // Mientras no se detecte el fin del archivo
    {
        printf("\nMatr�cula: %d", alu.matricula); // Imprime la matr�cula del alumno
        printf("\tCarrera: %d", alu.carrera); // Imprime la carrera del alumno
        printf("\tPromedio: %f\t ", alu.promedio); // Imprime el promedio del alumno
        puts(alu.nombre); // Imprime el nombre del alumno

        fread(&alu, sizeof(alumno), 1, ap); // Lee el siguiente bloque del archivo y lo almacena en alu
    }
}
