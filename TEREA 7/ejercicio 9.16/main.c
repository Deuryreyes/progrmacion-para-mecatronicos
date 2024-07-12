#include <stdio.h>
#include <stdlib.h>

void sumypro(FILE *); // Prototipo de función

void main(void)
{
    FILE *ap;

    // Intenta abrir el archivo "arc2.txt" en modo lectura
    if ((ap = fopen("arc2.txt", "r")) != NULL)
    {
        sumypro(ap); // Llama a la función sumypro y pasa el archivo ap como parámetro
        fclose(ap); // Cierra el archivo después de usarlo
    }
    else
    {
        printf("No se puede abrir el archivo\n");
    }
}

void sumypro(FILE *ap1)
{
    char cad[30];
    int i = 0;
    float sum = 0.0, r;

    // Lee líneas completas del archivo hasta el final
    while (fgets(cad, 30, ap1) != NULL)
    {
        r = atof(cad); // Convierte la cadena cad a un número flotante

        // Verifica si r es distinto de 0 (es decir, si la conversión fue exitosa)
        if (r != 0)
        {
            i++; // Incrementa el contador de números válidos
            sum += r; // Suma el valor r al acumulador sum
        }
    }

    printf("\nSuma: %.2f", sum); // Imprime la suma de los números

    if (i > 0)
    {
        printf("\nPromedio: %.2f", sum / i); // Calcula e imprime el promedio si hay números válidos
    }
}
