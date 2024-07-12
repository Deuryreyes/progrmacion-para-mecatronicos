#include <stdio.h>
#include <string.h>


void main(void)
{
    int i;
    char cad0[20] = "Hola México";
    char cad1[20] = "Hola Guatemala";
    char cad2[20] = "Hola Venezuela";
    char cad3[20] = "Hola México";
    char *c, c3;

    // Comparar cad0 con cad1 usando strcmp
    i = strcmp(cad0, cad1);
    printf("\nResultado de la comparación —cad0 y cad1—: %d", i);

    // Comparar cad0 con cad2 usando strcmp
    i = strcmp(cad0, cad2);
    printf("\nResultado de la comparación —cad0 y cad2—: %d", i);

    // Comparar cad0 con cad3 usando strcmp
    i = strcmp(cad0, cad3);
    printf("\nResultado de la comparación —cad0 y cad3—: %d", i);

    // Obtener la longitud de cad0 usando strlen
    i = strlen(cad0);
    printf("\nLongitud cadena cad0: %d", i);

    // Obtener la longitud de cad1 usando strlen
    i = strlen(cad1);
    printf("\nLongitud cadena cad1: %d", i);

    // Buscar el caracter 'G' en cad1 usando strchr
    c = strchr(cad1, 'G');
    /* c es un apuntador de tipo caracter. La función strchr busca la posición en la que se encuentra un
       determinado caracter en la cadena de caracteres. Si lo encuentra regresa un apuntador a la primera ocurrencia del caracter en la cadena, de otra forma regresa NULL. */
    if (c != NULL)
    {
        c3 = *c; /* c3 toma el contenido de la celda de memoria a la que apunta c.*/
        printf("\nEl valor de c3 es: %c", c3);
    }

    // Buscar el caracter 'V' en cad2 usando strchr
    c = strchr(cad2, 'V');
    if (c != NULL)
    {
        c3 = *c;
        printf("\nEl valor de c3 es: %c", c3);
    }
}
