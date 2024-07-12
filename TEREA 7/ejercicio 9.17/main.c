#include <stdio.h>
#include <ctype.h>
#include <string.h>

void cambia(FILE *, FILE *); // Prototipo de función. Se pasan dos archivos como parámetros.

void main(void)
{
    FILE *ar;
    FILE *ap;

    ar = fopen("arc.txt", "r"); // Se abre el archivo arc.txt para lectura.
    ap = fopen("arc1.txt", "w"); // Se abre el archivo arc1.txt para escritura.

    if (ar != NULL && ap != NULL)
    {
        cambia(ar, ap); // Llama a la función cambia para reemplazar y escribir.
        fclose(ar);
        fclose(ap);
    }
    else
    {
        printf("No se pueden abrir los archivos\n");
    }
}

void cambia(FILE *ap1, FILE *ap2)
{
    char cad[30], *cad1 = "", *cad2 = "", aux[30];

    while (fgets(cad, 30, ap1) != NULL)
    {
        strcpy(cad1, cad); // Copia la línea leída a cad1.
        cad2 = strstr(cad1, "méxico"); // Busca la subcadena "méxico" en cad1.

        while (cad2 != NULL)
        {
            cad2[0] = 'M'; // Reemplaza la primera letra por mayúscula.

            int i = strlen(cad1);
            int j = strlen(cad2);
            int k = i - j; // Diferencia de longitudes entre cad1 y cad2.

            if (k)
            {
                strncpy(aux, cad1, k); // Copia los primeros k caracteres de cad1 a aux.
                aux[k] = '\0';
                strcat(aux, cad2); // Concatena cad2 al final de aux.
                strcpy(cad1, aux); // Copia aux de regreso a cad1.
            }
            else
            {
                strcpy(cad1, cad2); // Si k es 0, copia cad2 directamente a cad1.
            }

            cad2 = strstr(cad1, "méxico"); // Busca la próxima ocurrencia de "méxico".
        }

        fputs(cad1, ap2); // Escribe la línea corregida en el archivo de salida ap2.
    }
}
