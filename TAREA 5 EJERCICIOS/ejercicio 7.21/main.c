#include <stdio.h>
#include <string.h>


void intercambia(char FRA[][30], int);

void main(void)
{
    int i, n;
    char FRA[20][30];

    // Se solicita al usuario ingresar el número de filas del arreglo
    printf("\nIngrese el número de filas del arreglo: ");
    scanf("%d", &n);

    // Se llena el arreglo FRA con cadenas de texto ingresadas por el usuario
    for (i = 0; i < n; i++)
    {
        printf("Ingrese la línea de texto número %d: ", i + 1);
        fflush(stdin);
        gets(FRA[i]);
    }

    printf("\n\n");

    // Se llama a la función intercambia para intercambiar las filas del arreglo
    intercambia(FRA, n);

    // Se imprime el arreglo FRA después de intercambiar las filas
    for (i = 0; i < n; i++)
    {
        printf("Impresión de la línea de texto %d: ", i + 1);
        puts(FRA[i]);
    }
}

void intercambia(char FRA[][30], int n)
{
    // Función que intercambia las filas del arreglo bidimensional FRA

    int i, j;
    j = n - 1;
    char cad[30];

    // Se itera sobre la mitad del arreglo para intercambiar las filas
    for (i = 0; i < (n / 2); i++)
    {
        strcpy(cad, FRA[i]);
        strcpy(FRA[i], FRA[j]);
        strcpy(FRA[j], cad);
        j--; // Se decrementa j para acceder a la siguiente fila desde el final
    }
}
