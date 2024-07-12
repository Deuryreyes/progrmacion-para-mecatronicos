#include <stdio.h>
#include <ctype.h>

// Prototipo de función
void minymay(FILE *);

// Función principal
void main(void)
{
    FILE *ar;

    // Abre el archivo en modo lectura
    if ((ar = fopen("arc5.txt", "r")) != NULL)
    {
        minymay(ar); // Llama a la función minymay
        fclose(ar); // Cierra el archivo después de usarlo
    }
    else
    {
        printf("No se pudo abrir el archivo\n");
    }
}

// Función minymay para contar minúsculas y mayúsculas
void minymay(FILE *arc)
{
    int min = 0, may = 0;
    char p;

    // Lee caracteres hasta el final del archivo
    while ((p = fgetc(arc)) != EOF)
    {
        if (islower(p)) // Verifica si el caracter es minúscula
        {
            min++; // Incrementa el contador de minúsculas
        }
        else if (isupper(p)) // Verifica si el caracter es mayúscula
        {
            may++; // Incrementa el contador de mayúsculas
        }
        // No es necesario contar otros tipos de caracteres
    }

    // Imprime los resultados
    printf("\nNúmero de minúsculas: %d\n", min);
    printf("Número de mayúsculas: %d\n", may);
}

