#include <stdio.h>


void main(void)
{
    // Declaraci�n de variables de tipo char
    char p1, p2, p3 = '$';

    // pide al usuario que ingrese un car�cter
    printf("\nIngrese un caracter: ");

    // Leer un car�cter desde la entrada est�ndar
    p1 = getchar();

    // Mostrar el car�cter le�do
    putchar(p1);

    // Limpia el buffer de entrada para evitar errores
    printf("\n");
    fflush(stdin);

    // Imprimir el valor de p3
    printf("\nEl caracter p3 es: ");
    putchar(p3);

    // pide al usuario que ingrese otro car�cter
    printf("\n\nIngrese otro caracter: ");
    fflush(stdin);

    // Leer el segundo car�cter ingresado por el usuario
    scanf(" %c", &p2);

    // Mostrar el segundo car�cter ingresado
    printf("%c", p2);
}
