#include <stdio.h>
#include <ctype.h>

/* Cuenta letras minúsculas y mayúsculas en una cadena de caracteres. */

void main(void)
{
    char cad[50];  // Declaración del arreglo de caracteres para almacenar la frase
    int i = 0, mi = 0, ma = 0;  // Variables para índice, minúsculas y mayúsculas

    printf("\nIngrese la cadena de caracteres (máximo 50 caracteres): ");
    gets(cad);  // Lee la cadena de caracteres ingresada por el usuario

    while (cad[i] != '\0')  // Itera mientras no se llegue al final de la cadena ('\0')
    {
        if (islower(cad[i]))  // Verifica si el carácter en la posición actual es minúscula
            mi++;  // Incrementa el contador de minúsculas
        else if (isupper(cad[i]))  // Verifica si el carácter en la posición actual es mayúscula
            ma++;  // Incrementa el contador de mayúsculas

        i++;  // Avanza al siguiente carácter en la cadena
    }

    printf("\n\nNúmero de letras minúsculas: %d", mi);  // Imprime el número de minúsculas
    printf("\nNúmero de letras mayúsculas: %d", ma);  // Imprime el número de mayúsculas
}
