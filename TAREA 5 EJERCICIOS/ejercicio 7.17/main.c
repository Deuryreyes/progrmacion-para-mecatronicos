#include <stdio.h>
#include <string.h>



char *inverso(char *);

void main(void)
{
    char fra[50], aux[50];

    printf("\nIngrese la l�nea de texto: ");
    gets(fra); // Lee la l�nea de texto ingresada por el usuario

    strcpy(aux, inverso(fra)); // Copia la cadena invertida a aux

    printf("\nLa l�nea de texto en forma inversa es: ");
    puts(aux); // Imprime la cadena invertida
}

char *inverso(char *cadena)
/* La funci�n calcula el inverso de una cadena y regresa el resultado al programa principal. */
{
    int i = 0, j, lon;
    char cad;
    lon = strlen(cadena); // Obtiene la longitud de la cadena

    j = lon - 1; // �ndice del �ltimo caracter de la cadena

    while (i < j)
    {
        cad = cadena[i]; // Guarda el caracter inicial
        cadena[i] = cadena[j]; // Cambia el primer caracter por el �ltimo
        cadena[j] = cad; // Cambia el �ltimo caracter por el primero

        i++; // Avanza hacia el siguiente caracter
        j--; // Retrocede hacia el anterior caracter
    }

    return cadena; // Devuelve la cadena invertida
}
