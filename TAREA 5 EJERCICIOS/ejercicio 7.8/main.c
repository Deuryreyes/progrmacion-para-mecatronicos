#include <stdio.h>
#include <string.h>
#include <ctype.h>

void minymay(char *cadena); /* Prototipo de funci�n */

void main(void)
{
    int i, n;
    char FRA[20][50]; /* Arreglo bidimensional para almacenar las l�neas de texto */

    printf("\nIngrese el n�mero de l�neas de texto: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        /* Para cada l�nea, se solicita al usuario ingresar el texto */
        printf("Ingrese la l�nea %d de texto: ", i + 1);
        fflush(stdin); /* Limpiar el buffer de entrada */
        gets(FRA[i]);  /* Leer la l�nea de texto y almacenarla en FRA[i] */
    }

    printf("\n\n");

    /* Calcular y mostrar el n�mero de min�sculas y may�sculas para cada l�nea */
    for (i = 0; i < n; i++)
    {
        minymay(FRA[i]); /* Llamar a la funci�n minymay para cada l�nea de texto */
    }
}

void minymay(char *cadena)
{
    int i = 0, mi = 0, ma = 0; /* Inicializar contadores para min�sculas y may�sculas */

    while (cadena[i] != '\0')
    {
        if (islower(cadena[i])) /* Verificar si el car�cter actual es min�scula */
        {
            mi++; /* Incrementar el contador de min�sculas */
        }
        else if (isupper(cadena[i])) /* Verificar si el car�cter actual es may�scula */
        {
            ma++; /* Incrementar el contador de may�sculas */
        }
        i++; /* Mover al siguiente car�cter */
    }

    /* Mostrar el n�mero de min�sculas y may�sculas encontradas en la cadena */
    printf("\nN�mero de letras min�sculas: %d", mi);
    printf("\nN�mero de letras may�sculas: %d", ma);
}
