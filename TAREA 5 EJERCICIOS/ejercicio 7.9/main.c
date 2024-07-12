#include <stdio.h>


int cuenta(char *, char);

void main(void)
{
    char car, cad[50];
    int res;

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad); /* Leer la cadena de caracteres */

    fflush(stdin); /* Limpiar el buffer de entrada */

    printf("\nIngrese el caracter: ");
    car = getchar(); /* Leer el caracter */

    res = cuenta(cad, car); /* Llamar a la funci�n cuenta */

    /* Mostrar el resultado */
    printf("\n\n%c se encuentra %d veces en la cadena %s", car, res, cad);
}

/* Funci�n para contar la cantidad de veces que aparece un caracter en una cadena */
int cuenta(char *cad, char car)
{
    int i = 0, r = 0;

    /* Recorrer la cadena hasta encontrar el car�cter nulo '\0' */
    while (cad[i] != '\0')
    {
        if (cad[i] == car) /* Si el caracter en la posici�n i es igual al car�cter buscado */
        {
            r++; /* Incrementar el contador de ocurrencias */
        }
        i++; /* Pa
