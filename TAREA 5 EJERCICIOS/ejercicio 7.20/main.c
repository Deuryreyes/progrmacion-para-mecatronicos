#include <stdio.h>
#include <string.h>

int longitud(char *);

void main(void)
{
    int i, n, l = -1, p, t;
    char cad[50], FRA[20][50];

    // Se solicita al usuario ingresar el n�mero de filas del arreglo
    printf("\nIngrese el n�mero de filas del arreglo: ");
    scanf("%d", &n);

    // Se llena el arreglo FRA con cadenas de texto ingresadas por el usuario
    for (i = 0; i < n; i++)
    {
        printf("Ingrese la l�nea %d de texto. M�ximo 50 caracteres: ", i + 1);
        fflush(stdin);
        gets(FRA[i]); // Se lee la cadena de caracteres dentro del ciclo
    }

    printf("\n");

    // Se busca la cadena m�s larga en el arreglo FRA
    for (i = 0; i < n; i++)
    {
        strcpy(cad, FRA[i]);
        t = longitud(cad);

        // Se compara la longitud actual con la longitud m�xima encontrada hasta ahora
        if (t > l)
        {
            l = t;
            p = i; // Se guarda la posici�n de la cadena m�s larga
        }
    }

    // Se imprime la cadena m�s larga y su longitud
    printf("\nLa cadena con mayor longitud es: ");
    puts(FRA[p]);
    printf("Longitud: %d", l);
}

int longitud(char *cadena)
{
    // Contador para la longitud de la cadena
    int cue = 0;

    // Mientras no se encuentre el caracter nulo '\0', se incrementa el contador
    while (!cadena[cue] == '\0')
        cue++;

    return (cue); // Se retorna la longitud de la cadena
}
