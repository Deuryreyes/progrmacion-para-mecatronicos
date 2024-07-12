#include <stdio.h>



int cuenta(char *);

void main(void)
{
    int i;
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);  // Lee la cadena de caracteres ingresada por el usuario

    i = cuenta(cad);  // Llama a la función cuenta para obtener la longitud de la cadena

    printf("\nLongitud de la cadena: %d", i);  // Imprime la longitud de la cadena
}

int cuenta(char *cadena)
/* Esta función calcula la longitud de la cadena. */
{
    int c = 0;

    while (cadena[c] != '\0')  // Itera mientras no se llegue al final de la cadena ('\0')
        c++;  // Incrementa el contador de longitud de la cadena

    return (c);  // Retorna la longitud calculada de la cadena
}
