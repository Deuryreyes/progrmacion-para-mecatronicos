#include <stdio.h>


void main(void)
{
    // Declaración de variables de tipo char
    char p1, p2, p3 = '$';

    // pide al usuario que ingrese un carácter
    printf("\nIngrese un caracter: ");

    // Leer un carácter desde la entrada estándar
    p1 = getchar();

    // Mostrar el carácter leído
    putchar(p1);

    // Limpia el buffer de entrada para evitar errores
    printf("\n");
    fflush(stdin);

    // Imprimir el valor de p3
    printf("\nEl caracter p3 es: ");
    putchar(p3);

    // pide al usuario que ingrese otro carácter
    printf("\n\nIngrese otro caracter: ");
    fflush(stdin);

    // Leer el segundo carácter ingresado por el usuario
    scanf(" %c", &p2);

    // Mostrar el segundo carácter ingresado
    printf("%c", p2);
}
