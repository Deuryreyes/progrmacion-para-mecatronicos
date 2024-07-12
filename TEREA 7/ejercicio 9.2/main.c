#include <stdio.h>

void main(void)
{
    char p1; // Declara una variable de tipo char para almacenar el car�cter le�do
    FILE *ar; // Declara un puntero de tipo FILE para manejar el archivo

    if ((ar = fopen("arc.txt", "r")) != NULL) // Abre el archivo arc.txt para lectura y verifica si se abri� correctamente
    {
        // Observa que las dos instrucciones del programa 9.1 necesarias para abrir un archivo y verificar que �ste en realidad se haya abierto, se pueden agrupar en una sola instrucci�n.
        while (!feof(ar)) // Se leen caracteres del archivo mientras no se detecte el fin del archivo
        {
            p1 = fgetc(ar); // Lee el car�cter del archivo
            putchar(p1); // Despliega el car�cter en la pantalla
        }
        fclose(ar); // Cierra el archivo
    }
    else
        printf("No se puede abrir el archivo"); // Muestra un mensaje de error si el archivo no se pudo abrir
}
