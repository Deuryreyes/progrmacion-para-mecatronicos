#include <stdio.h>

void main(void)
{
    char cad[50]; // Declara un arreglo de caracteres para almacenar la cadena le�da
    FILE *ap; // Declara un puntero de tipo FILE para manejar el archivo

    if ((ap = fopen("arc.txt", "r")) != NULL) // Abre el archivo para lectura y verifica si se abri� correctamente
    {
        // Se abre el archivo para lectura y se verifica si se abri� correctamente.
        while (!feof(ap)) // Mientras no se detecte el fin de archivo se siguen leyendo cadenas de caracteres
        {
            fgets(cad, 50, ap); // Lee una cadena del archivo
            // Observa que la instrucci�n para leer cadenas requiere de tres argumentos.
            puts(cad); // Despliega la cadena en la pantalla
        }

        fclose(ap); // Cierra el archivo
    }
    else
        printf("No se puede abrir el archivo"); // Muestra un mensaje de error si el archivo no se pudo abrir
}
