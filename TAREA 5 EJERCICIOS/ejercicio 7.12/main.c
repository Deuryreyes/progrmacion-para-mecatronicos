#include <stdio.h>
#include <ctype.h>

/* Cuenta letras min�sculas y may�sculas en una cadena de caracteres. */

void main(void)
{
    char cad[50];  // Declaraci�n del arreglo de caracteres para almacenar la frase
    int i = 0, mi = 0, ma = 0;  // Variables para �ndice, min�sculas y may�sculas

    printf("\nIngrese la cadena de caracteres (m�ximo 50 caracteres): ");
    gets(cad);  // Lee la cadena de caracteres ingresada por el usuario

    while (cad[i] != '\0')  // Itera mientras no se llegue al final de la cadena ('\0')
    {
        if (islower(cad[i]))  // Verifica si el car�cter en la posici�n actual es min�scula
            mi++;  // Incrementa el contador de min�sculas
        else if (isupper(cad[i]))  // Verifica si el car�cter en la posici�n actual es may�scula
            ma++;  // Incrementa el contador de may�sculas

        i++;  // Avanza al siguiente car�cter en la cadena
    }

    printf("\n\nN�mero de letras min�sculas: %d", mi);  // Imprime el n�mero de min�sculas
    printf("\nN�mero de letras may�sculas: %d", ma);  // Imprime el n�mero de may�sculas
}
