#include <stdio.h>


typedef struct // Declaración de la estructura alumno
{
    int matricula; // Número de matrícula del alumno
    char nombre[20]; // Nombre del alumno
    int carrera; // Código de la carrera del alumno
    float promedio; // Promedio del alumno
} alumno;

void escribe(FILE *); // Prototipo de función

void main(void)
{
    FILE *ar; // Declaración de un puntero de tipo FILE para manejar el archivo

    if ((ar = fopen("ad1.dat", "w")) != NULL) // Abre el archivo para escritura y verifica si se abrió correctamente
        escribe(ar); // Llama a la función escribe si el archivo se abre correctamente
    else
        printf("\nEl archivo no se puede abrir"); // Imprime un mensaje de error si no se puede abrir el archivo

    fclose(ar); // Cierra el archivo
}

void escribe(FILE *ap)
/* Esta función sirve para leer los datos de los alumnos utilizando una
estructura tipo alumno, que se almacenará posteriormente en un archivo. */
{
    alumno alu; // Declaración de una variable de tipo estructura alumno
    int i = 0, r; // Declaración de variables enteras para el índice y la respuesta del usuario

    printf("\n¿Desea ingresar información sobre alumnos? (Sí-1 No-0): "); // Pregunta al usuario si desea ingresar información sobre alumnos
    scanf("%d", &r); // Lee la respuesta del usuario

    while (r) // Mientras la respuesta sea afirmativa (1)
    {
        i++; // Incrementa el índice del alumno

        printf("Matrícula del alumno %d: ", i); // Pregunta por la matrícula del alumno
        scanf("%d", &alu.matricula); // Lee la matrícula del alumno

        printf("Nombre del alumno %d: ", i); // Pregunta por el nombre del alumno
        fflush(stdin); // Limpia el buffer de entrada
        gets(alu.nombre); // Lee el nombre del alumno

        printf("Carrera del alumno %d: ", i); // Pregunta por la carrera del alumno
        scanf("%d", &alu.carrera); // Lee el código de la carrera del alumno

        printf("Promedio del alumno %d: ", i); // Pregunta por el promedio del alumno
        scanf("%f", &alu.promedio); // Lee el promedio del alumno

        fwrite(&alu, sizeof(alumno), 1, ap); // Escribe la estructura alumno en el archivo

        /* Observa que la función fwrite tiene cuatro argumentos. El primero se
        utiliza para indicar la variable tipo estructura que se desea almacenar; el
        segundo muestra el tamaño de esa variable en términos de bytes; el tercero
        señala el número de variables que se leerán o almacenarán en el dispositivo
        de almacenamiento secundario, y el último representa el apuntador al inicio de
        la estructura FILE. */

        printf("\n¿Desea ingresar información sobre más alumnos? (Sí-1 No-0): "); // Pregunta al usuario si desea ingresar más información sobre alumnos
        scanf("%d", &r); // Lee la respuesta del usuario
    }
}
