#include <stdio.h>
#include <ctype.h>

// Prototipo de funci�n
void minymay(FILE *);

// Funci�n principal
void main(void)
{
    FILE *ar;

    // Abre el archivo en modo lectura
    if ((ar = fopen("arc5.txt", "r")) != NULL)
    {
        minymay(ar); // Llama a la funci�n minymay
        fclose(ar); // Cierra el archivo despu�s de usarlo
    }
    else
    {
        printf("No se pudo abrir el archivo\n");
    }
}

// Funci�n minymay para contar min�sculas y may�sculas
void minymay(FILE *arc)
{
    int min = 0, may = 0;
    char p;

    // Lee caracteres hasta el final del archivo
    while ((p = fgetc(arc)) != EOF)
    {
        if (islower(p)) // Verifica si el caracter es min�scula
        {
            min++; // Incrementa el contador de min�sculas
        }
        else if (isupper(p)) // Verifica si el caracter es may�scula
        {
            may++; // Incrementa el contador de may�sculas
        }
        // No es necesario contar otros tipos de caracteres
    }

    // Imprime los resultados
    printf("\nN�mero de min�sculas: %d\n", min);
    printf("N�mero de may�sculas: %d\n", may);
}

