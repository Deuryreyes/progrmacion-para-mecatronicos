#include <stdio.h>
#include <string.h>
#include <ctype.h>

int cuentap(char *);

void main(void)
{
    int i;
    char fra[50];

    // Se pide al usuario ingresar una l�nea de texto
    printf("\nIngrese la l�nea de texto: ");
    gets(fra);

    // Se agrega un espacio en blanco al final de la cadena
    strcat(fra, " ");

    // Se llama a la funci�n cuentap para contar las palabras
    i = cuentap(fra);
    printf("\nLa l�nea de texto tiene %d palabras", i);
}

int cuentap(char *cad)
{
    // Puntero para almacenar la posici�n del primer espacio en blanco
    char *cad0 = "";

    // Contador de palabras
    int i = 0;

    // Se busca el primer espacio en blanco en la cadena
    cad0 = strstr(cad, " ");

    // Mientras la cadena no sea igual a un espacio en blanco
    while (strcmp(cad, " "))
    {
        // Se copia cad0 a cad y se incrementa el contador de palabras
        strcpy(cad, cad0);
        i++;

        // Se busca un espacio en blanco a partir de la siguiente posici�n
        cad0 = strstr(cad + 1, " ");
    }

    return (i);
}
