#include <stdio.h>
#include <stdlib.h>

void sumypro(FILE *); // Prototipo de funci�n

void main(void)
{
    FILE *ap;

    // Intenta abrir el archivo "arc2.txt" en modo lectura
    if ((ap = fopen("arc2.txt", "r")) != NULL)
    {
        sumypro(ap); // Llama a la funci�n sumypro y pasa el archivo ap como par�metro
        fclose(ap); // Cierra el archivo despu�s de usarlo
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

    // Lee l�neas completas del archivo hasta el final
    while (fgets(cad, 30, ap1) != NULL)
    {
        r = atof(cad); // Convierte la cadena cad a un n�mero flotante

        // Verifica si r es distinto de 0 (es decir, si la conversi�n fue exitosa)
        if (r != 0)
        {
            i++; // Incrementa el contador de n�meros v�lidos
            sum += r; // Suma el valor r al acumulador sum
        }
    }

    printf("\nSuma: %.2f", sum); // Imprime la suma de los n�meros

    if (i > 0)
    {
        printf("\nPromedio: %.2f", sum / i); // Calcula e imprime el promedio si hay n�meros v�lidos
    }
}
