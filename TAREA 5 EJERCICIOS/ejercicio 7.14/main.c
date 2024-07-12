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
/* Esta función calcula la longitud de la cadena en forma recursiva. */
{
    if (cadena[0] == '\0')  // Si el primer caracter de la cadena es el carácter nulo ('\0')
        return 0;  // Retorna 0, indicando que la longitud es 0 (fin de la cadena)
    else
        return (1 + cuenta(&cadena[1]));  // Retorna 1 más la longitud de la cadena restante recursivamente
}
