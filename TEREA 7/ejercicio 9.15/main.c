#include <stdio.h>
#include <ctype.h>

void minymay(FILE *); //Prototipo de función

void main(void)
{
    FILE *ap;

    // Intenta abrir el archivo "arc.txt" en modo lectura
    if ((ap = fopen("arc.txt", "r")) != NULL)
    {
        minymay(ap); // Llama a la función minymay y pasa el archivo ap como parámetro
        fclose(ap); // Cierra el archivo después de usarlo
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

    // Lee líneas completas del archivo hasta el final
    while (fgets(cad, 30, ap1) != NULL)
    {
        // Itera sobre cada caracter de la cadena cad
        i = 0;
        while (cad[i] != '\0')
        {
            // Verifica si el caracter actual es minúscula o mayúscula
            if (islower(cad[i]))
            {
                mi++; // Incrementa el contador de minúsculas
            }
            else if (isupper(cad[i]))
            {
                ma++; // Incrementa el contador de mayúsculas
            }
            i++;
        }
    }

    // Imprime los resultados
    printf("\n\nNúmero de letras minúsculas: %d", mi);
    printf("\nNúmero de letras mayúsculas: %d", ma);
}
