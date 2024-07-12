#include <stdio.h>


void main(void)
{
    char p1; // Declara una variable de tipo char para almacenar el car�cter ingresado
    FILE *ar; // Declara un puntero de tipo FILE para manejar el archivo
    ar = fopen("arc.txt", "w"); // Abre el archivo arc.txt para escritura y asigna el puntero a 'ar'
    if (ar != NULL) // Verifica si el archivo se abri� correctamente
    {
        while ((p1 = getchar()) != '\n') // Lee caracteres desde la entrada est�ndar hasta encontrar un salto de l�nea
            fputc(p1, ar); // Escribe el car�cter le�do en el archivo
        fclose(ar); // Cierra el archivo
    }
    else
        printf("No se puede abrir el archivo"); // Muestra un mensaje de error si el archivo no se pudo abrir
}

