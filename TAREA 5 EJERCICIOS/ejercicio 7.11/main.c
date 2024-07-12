# include <stdio.h>
# include <ctype.h>



void main(void) // Verifica si un carácter en una posición específica de una cadena es una letra minúscula. */
{
    char p, cad[50];  // Declaración de variables: p para el carácter en la posición específica, cad para la cadena
    int n;  // Variable para almacenar la posición deseada por el usuario

    printf("\nIngrese la cadena de caracteres (máximo 50): ");
    gets(cad);  // Lee la cadena de caracteres ingresada por el usuario

    printf("\nIngrese la posición en la cadena que desea verificar: ");
    scanf("%d", &n);  // Lee la posición específica ingresada por el usuario

    if ((n >= 1) && (n <= strlen(cad)))  // Verifica si la posición está dentro de los límites válidos de la cadena
    {
        p = cad[n-1];  // Obtiene el carácter en la posición n-1 (debido a la indexación de cadenas en C)

        if (islower(p))  // Verifica si el carácter es una letra minúscula
            printf("\n%c es una letra minúscula", p);
        else
            printf("\n%c no es una letra minúscula", p);
    }
    else
    {
        printf("\nEl valor ingresado de n es incorrecto");  // Mensaje si la posición ingresada es incorrecta
    }
}
