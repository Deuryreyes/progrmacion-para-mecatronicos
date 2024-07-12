#include <stdio.h>
#include <string.h>



void main(void)
{
    char cad1[50], cad2[50], *cad0; // Se eliminó la inicialización innecesaria de cad0
    int i = 0;

    printf("\nIngrese la primera cadena de caracteres: ");
    gets(cad1);  // Lee la primera cadena

    printf("\nIngrese la cadena a buscar: ");
    gets(cad2);  // Lee la segunda cadena que se va a buscar

    cad0 = cad1; // Se asigna el inicio de la cadena cad1 a cad0

    cad0 = strstr(cad0, cad2); // Busca la primera ocurrencia de cad2 en cad1

    while (cad0 != NULL)
    {
        i++; // Incrementa el contador de ocurrencias

        cad0 = strstr(cad0 + 1, cad2); // Busca la siguiente ocurrencia de cad2 en cad1
    }

    printf("\nEl número de veces que aparece la segunda cadena es: %d", i);
}
