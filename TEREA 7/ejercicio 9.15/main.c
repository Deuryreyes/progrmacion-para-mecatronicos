#include <stdio.h>
#include <ctype.h>

void minymay(FILE *); //Prototipo de funci�n

void main(void)
{
    FILE *ap;

    // Intenta abrir el archivo "arc.txt" en modo lectura
    if ((ap = fopen("arc.txt", "r")) != NULL)
    {
        minymay(ap); // Llama a la funci�n minymay y pasa el archivo ap como par�metro
        fclose(ap); // Cierra el archivo despu�s de usarlo
    }
    else
    {
        printf("No se puede abrir el archivo\n");
    }
}

void minymay(FILE *ap1)
{
    char cad[30];
    int i, mi = 0, ma = 0;

    // Lee l�neas completas del archivo hasta el final
    while (fgets(cad, 30, ap1) != NULL)
    {
        // Itera sobre cada caracter de la cadena cad
        i = 0;
        while (cad[i] != '\0')
        {
            // Verifica si el caracter actual es min�scula o may�scula
            if (islower(cad[i]))
            {
                mi++; // Incrementa el contador de min�sculas
            }
            else if (isupper(cad[i]))
            {
                ma++; // Incrementa el contador de may�sculas
            }
            i++;
        }
    }

    // Imprime los resultados
    printf("\n\nN�mero de letras min�sculas: %d", mi);
    printf("\nN�mero de letras may�sculas: %d", ma);
}
