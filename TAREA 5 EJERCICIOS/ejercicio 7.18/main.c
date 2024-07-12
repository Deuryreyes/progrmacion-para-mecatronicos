#include <stdio.h>

 void inverso(char *cadena);  // Funci�n inverso esta funci�n imprime una cadena de caracteres en orden inverso utilizando recursividad.

int main(void)
{
    char fra[50];

    // Se solicita al usuario ingresar una cadena de texto
    printf("\nIngrese la l�nea de texto: ");
    gets(fra);

    // Se imprime la cadena original proporcionada por el usuario
    printf("\nL�nea de texto en forma inversa: ");

    // Se llama a la funci�n inverso para imprimir la cadena invertida
    inverso(fra);
    printf("\n");

    return 0;
}

void inverso(char *cadena)
{
    // Verifica si el caracter actual no es el terminador nulo
    if (cadena[0] != '\0')
    {
        // Llama recursivamente a inverso con el siguiente caracter
        inverso(&cadena[1]);

        // Imprime el caracter actual
        putchar(cadena[0]);
    }
}
