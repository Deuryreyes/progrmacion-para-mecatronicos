#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida


typedef struct { // Declaración de la estructura alumno
    int matricula; // Número de matrícula del alumno
    char nombre[20]; // Nombre del alumno
    int carrera; // Código de la carrera del alumno
    float promedio; // Promedio del alumno
} alumno;

void lee(FILE *); // Prototipo de función

void main(void)
{
    FILE *ar; // Declaración de un puntero de tipo FILE para manejar el archivo

    if ((ar = fopen("ad1.dat", "r")) != NULL) // Abre el archivo para lectura y verifica si se abrió correctamente
        lee(ar); // Llama a la función lee si el archivo se abre correctamente
    else
        printf("\nEl archivo no se puede abrir"); // Imprime un mensaje de error si no se puede abrir el archivo

    fclose(ar); // Cierra el archivo
}

void lee(FILE *ap)
/* Esta función se utiliza para leer bloques de un archivo de acceso directo. */
{
    alumno alu; // Declaración de una variable de tipo estructura alumno

    fread(&alu, sizeof(alumno), 1, ap); // Lee el primer bloque del archivo y lo almacena en alu


    while (!feof(ap)) // Mientras no se detecte el fin del archivo
    {
        printf("\nMatrícula: %d", alu.matricula); // Imprime la matrícula del alumno
        printf("\tCarrera: %d", alu.carrera); // Imprime la carrera del alumno
        printf("\tPromedio: %f\t ", alu.promedio); // Imprime el promedio del alumno
        puts(alu.nombre); // Imprime el nombre del alumno

        fread(&alu, sizeof(alumno), 1, ap); // Lee el siguiente bloque del archivo y lo almacena en alu
    }
}
