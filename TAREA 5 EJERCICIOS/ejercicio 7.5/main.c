#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    double d;
    long l;
    char cad0[20], *cad1;

    // Solicitar al usuario ingresar una cadena de caracteres
    printf("\nIngrese una cadena de caracteres: ");
    gets(cad0); // Leer la cadena de caracteres (¡Evitar gets por ser inseguro!)

    // Convertir la cadena a entero usando atoi
    i = atoi(cad0);
    printf("\n%s \t %d", cad0, i + 3); // Imprimir la cadena y el entero incrementado en 3

    // Solicitar al usuario ingresar otra cadena de caracteres
    printf("\nIngrese otra cadena de caracteres: ");
    gets(cad0); // Leer la segunda cadena de caracteres (¡Evitar gets por ser inseguro!)

    // Convertir la cadena a double usando atof
    d = atof(cad0);
    printf("\n%s \t %.2lf", cad0, d + 1.50); // Imprimir la cadena y el double incrementado en 1.50

    // Convertir la cadena a double usando strtod
    d = strtod(cad0, &cad1);
    printf("\n%s \t %.2lf", cad0, d + 1.50); // Imprimir la cadena y el double incrementado en 1.50
    puts(cad1); // Imprimir el resto de la cadena no convertida

    // Convertir la cadena a long usando atol
    l = atol(cad0);
    printf("\n%s \t %ld", cad0, l + 10); // Imprimir la cadena y el long incrementado en 10

    // Convertir la cadena a long usando strtol
    l = strtol(cad0, &cad1, 0);
    printf("\n%s \t %ld", cad0, l + 10); // Imprimir la cadena y el long incrementado en 10
    puts(cad1); // Imprimir el resto de la cadena no convertida

    return 0;
}
