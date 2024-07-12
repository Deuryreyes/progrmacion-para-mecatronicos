#include <stdio.h>


typedef struct {
    int clave; // Clave del empleado
    int departamento; // N�mero de departamento
    float salario; // Salario del empleado
    float ventas[12]; // Ventas mensuales del empleado
} empleado;

void incrementa(FILE *); // Prototipo de funci�n

void main(void)
{
    FILE *ar;

    if ((ar = fopen("ad5.dat", "r+")) != NULL) // Abre el archivo para lectura y escritura
    {
        incrementa(ar); // Llama a la funci�n incrementa si el archivo se abre correctamente
        rewind(ar); // Se posiciona al inicio del archivo (sin utilidad pr�ctica en este contexto)
        fclose(ar); // Cierra el archivo
    }
    else
    {
        printf("\nEl archivo no se puede abrir"); // Imprime un mensaje de error si no se puede abrir el archivo
    }
}

void incrementa(FILE *ap)

{
    int i, j, t;
    float sum;
    empleado emple;
    t = sizeof(empleado); // Obtiene el tama�o de la estructura empleado

    fread(&emple, sizeof(empleado), 1, ap); // Lee el primer registro del archivo

    while (!feof(ap))
    {
        i = ftell(ap) / t; // Obtiene la posici�n actual del apuntador en el archivo

        sum = 0;
        for (j = 0; j < 12; j++)
        {
            sum += emple.ventas[j]; // Calcula el total de ventas del empleado
        }

        if (sum > 1000000)
        {
            emple.salario *= 1.10; // Incrementa el salario en un 10%

            fseek(ap, (i - 1) * sizeof(empleado), 0); // Reposiciona para escribir el registro actualizado
            fwrite(&emple, sizeof(empleado), 1, ap);

            fseek(ap, i * sizeof(empleado), 0); // Reposiciona para leer el siguiente registro
            // Esta instrucci�n se a�ade por precauci�n, aunque no deber�a ser necesaria en teor�a
        }

        fread(&emple, sizeof(empleado), 1, ap); // Lee el siguiente registro del archivo
    }
}
