#include <stdio.h>
#include <string.h>
#include <ctype.h>

void minymay(char *cadena); /* Prototipo de función */

void main(void)
{
    int i, n;
    char FRA[20][50]; /* Arreglo bidimensional para almacenar las líneas de texto */

    printf("\nIngrese el número de líneas de texto: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        /* Para cada línea, se solicita al usuario ingresar el texto */
        printf("Ingrese la línea %d de texto: ", i + 1);
        fflush(stdin); /* Limpiar el buffer de entrada */
        gets(FRA[i]);  /* Leer la línea de texto y almacenarla en FRA[i] */
    }

    printf("\n\n");

    /* Calcular y mostrar el número de minúsculas y mayúsculas para cada línea */
    for (i = 0; i < n; i++)
    {
        minymay(FRA[i]); /* Llamar a la función minymay para cada línea de texto */
    }
}

void minymay(char *cadena)
{
    int i = 0, mi = 0, ma = 0; /* Inicializar contadores para minúsculas y mayúsculas */

    while (cadena[i] != '\0')
    {
        if (islower(cadena[i])) /* Verificar si el carácter actual es minúscula */
        {
            mi++; /* Incrementar el contador de minúsculas */
        }
        else if (isupper(cadena[i])) /* Verificar si el carácter actual es mayúscula */
        {
            ma++; /* Incrementar el contador de mayúsculas */
        }
        i++; /* Mover al siguiente carácter */
    }

    /* Mostrar el número de minúsculas y mayúsculas encontradas en la cadena */
    printf("\nNúmero de letras minúsculas: %d", mi);
    printf("\nNúmero de letras mayúsculas: %d", ma);
}
