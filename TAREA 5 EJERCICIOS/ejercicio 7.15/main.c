# include <stdio.h>
# include <ctype.h>



void interpreta(char *);

void main(void)
{
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);  // Lee la cadena de caracteres ingresada por el usuario

    interpreta(cad);  // Llama a la función interpreta para decodificar la cadena
}

void interpreta(char *cadena)
// Esta función se utiliza para decodificar la cadena de caracteres. */
{
    int i = 0, j, k;

    while (cadena[i] != '\0')
    {
        if (isalpha(cadena[i])) // Se utiliza isalpha para observar si el caracter es una letra. */
        {
            k = cadena[i - 1] - '0';


            for (j = 0; j < k; j++)
            {
                putchar(cadena[i]);
            }
        }
        i++;
    }
}

