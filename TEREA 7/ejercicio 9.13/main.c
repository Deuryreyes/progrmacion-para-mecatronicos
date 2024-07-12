#include <stdio.h>


int cuenta(char);

// Función principal
void main(void)
{
    int res;
    char car;

    printf("\nIngrese el caracter que se va a buscar en el archivo: ");
    car = getchar(); // Lee el caracter desde la entrada estándar

    res = cuenta(car); // Llama a la función cuenta() para obtener el número de veces que aparece el caracter

    if (res != -1)
        printf("\n\nEl caracter %c se encuentra en el archivo %d veces", car, res);
    else
        printf("No se pudo abrir el archivo");
}

/* Función cuenta() */
int cuenta(char car)
{
    int res = 0, con = 0;
    char p;
    FILE *ar;

    if ((ar = fopen("arc.txt", "r")) != NULL) // Abre el archivo para lectura
    {
        while ((p = getc(ar)) != EOF) // Lee caracteres del archivo hasta llegar al final
        {
            if (p == car) // Compara el caracter leído con el caracter buscado
                con++; // Incrementa el contador si encuentra una coincidencia
        }

        fclose(ar); // Cierra el archivo después de terminar de leerlo
        res = con; // Asigna el valor del contador al resultado
    }
    else
    {
        res = -1; // Retorna -1 si no se pudo abrir el archivo
    }

    return res; // Retorna el número de veces que se encontró el caracter en el archivo
}
