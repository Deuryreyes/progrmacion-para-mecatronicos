#include <stdio.h>


typedef struct // Declaraci�n de la estructura alumno
{
    int matricula; // N�mero de matr�cula del alumno
    char nombre[20]; // Nombre del alumno
    int carrera; // C�digo de la carrera del alumno
    float promedio; // Promedio del alumno
} alumno;

void escribe(FILE *); // Prototipo de funci�n

void main(void)
{
    FILE *ar; // Declaraci�n de un puntero de tipo FILE para manejar el archivo

    if ((ar = fopen("ad1.dat", "w")) != NULL) // Abre el archivo para escritura y verifica si se abri� correctamente
        escribe(ar); // Llama a la funci�n escribe si el archivo se abre correctamente
    else
        printf("\nEl archivo no se puede abrir"); // Imprime un mensaje de error si no se puede abrir el archivo

    fclose(ar); // Cierra el archivo
}

void escribe(FILE *ap)
/* Esta funci�n sirve para leer los datos de los alumnos utilizando una
estructura tipo alumno, que se almacenar� posteriormente en un archivo. */
{
    alumno alu; // Declaraci�n de una variable de tipo estructura alumno
    int i = 0, r; // Declaraci�n de variables enteras para el �ndice y la respuesta del usuario

    printf("\n�Desea ingresar informaci�n sobre alumnos? (S�-1 No-0): "); // Pregunta al usuario si desea ingresar informaci�n sobre alumnos
    scanf("%d", &r); // Lee la respuesta del usuario

    while (r) // Mientras la respuesta sea afirmativa (1)
    {
        i++; // Incrementa el �ndice del alumno

        printf("Matr�cula del alumno %d: ", i); // Pregunta por la matr�cula del alumno
        scanf("%d", &alu.matricula); // Lee la matr�cula del alumno

        printf("Nombre del alumno %d: ", i); // Pregunta por el nombre del alumno
        fflush(stdin); // Limpia el buffer de entrada
        gets(alu.nombre); // Lee el nombre del alumno

        printf("Carrera del alumno %d: ", i); // Pregunta por la carrera del alumno
        scanf("%d", &alu.carrera); // Lee el c�digo de la carrera del alumno

        printf("Promedio del alumno %d: ", i); // Pregunta por el promedio del alumno
        scanf("%f", &alu.promedio); // Lee el promedio del alumno

        fwrite(&alu, sizeof(alumno), 1, ap); // Escribe la estructura alumno en el archivo

        /* Observa que la funci�n fwrite tiene cuatro argumentos. El primero se
        utiliza para indicar la variable tipo estructura que se desea almacenar; el
        segundo muestra el tama�o de esa variable en t�rminos de bytes; el tercero
        se�ala el n�mero de variables que se leer�n o almacenar�n en el dispositivo
        de almacenamiento secundario, y el �ltimo representa el apuntador al inicio de
        la estructura FILE. */

        printf("\n�Desea ingresar informaci�n sobre m�s alumnos? (S�-1 No-0): "); // Pregunta al usuario si desea ingresar m�s informaci�n sobre alumnos
        scanf("%d", &r); // Lee la respuesta del usuario
    }
}
