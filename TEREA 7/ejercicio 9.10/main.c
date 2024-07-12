#include <stdio.h>

typedef struct {
    int matricula; // Número de matrícula del alumno
    char nombre[20]; // Nombre del alumno
    int carrera; // Código de la carrera del alumno
    float promedio; // Promedio del alumno
} alumno;

void modifica(FILE *); // Prototipo de función

void main(void)
{
    FILE *ar;

    if ((ar = fopen("ad1.dat", "r+")) != NULL) // Abre el archivo para lectura y escritura
        modifica(ar); // Llama a la función modifica si el archivo se abre correctamente
    else
        printf("\nEl archivo no se puede abrir"); // Imprime un mensaje de error si no se puede abrir el archivo

    fclose(ar); // Cierra el archivo
}

void modifica(FILE *ap)
/* Esta función se utiliza para modificar el promedio de un alumno. */
{
    int d;
    alumno alu;

    printf("\nIngrese el número de registro que desea modificar: ");

    scanf("%d", &d);

    fseek(ap, (d-1)*sizeof(alumno), 0);


    fread(&alu, sizeof(alumno), 1, ap);
    /* Luego de posicionarnos en el registro que nos interesa, lo
    leemos. */

    printf("\nIngrese el promedio correcto del alumno: ");
    scanf("%f", &alu.promedio); // Modificamos el registro con el nuevo promedio.

    fseek(ap, (d-1)*sizeof(alumno), 0);


    fwrite(&alu, sizeof(alumno), 1, ap);
}
