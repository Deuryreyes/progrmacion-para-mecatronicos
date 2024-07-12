#include <stdio.h>


void main(void)
{
    char p1;
    FILE *ar;

    ar = fopen("libro.txt", "a"); // Abre el archivo con la opción para incorporar caracteres al final

    if (ar != NULL)
    {
        while ((p1 = getchar()) != '\n') // Lee caracteres desde la entrada estándar hasta que se presione Enter
        {
            fputc(p1, ar); // Escribe el caracter en el archivo
        }
        fclose(ar); // Cierra el archivo después de escribir todos los caracteres
    }
    else
    {
        printf("No se puede abrir el archivo"); // Imprime un mensaje de error si no se puede abrir el archivo
    }
}
