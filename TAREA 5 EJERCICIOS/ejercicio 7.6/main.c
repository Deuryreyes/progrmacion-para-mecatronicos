#include <stdio.h>
#include <string.h>

/* Funciones de la biblioteca string.h para el manejo de cadenas de caracteres. */
void main(void)
{
    char *cad0 = "Hola México"; // Cadena inicial
    char cad1[20], cad2[20], cad3[20] = ", buenos días!!!"; // Cadenas para copiar y concatenar

    // Copiar cad0 a cad1 usando strcpy
    strcpy(cad1, cad0);
    printf("\nPrueba de la función strcpy. Se copia la cadena cad0 a cad1: %s\n", cad1);

    // Copiar cad3 a cad1 usando strcpy
    strcpy(cad1, cad3);
    printf("\nPrueba de la función strcpy. Se copia la cadena cad3 a cad1: %s\n", cad1);

    // Copiar "XX" a cad1 usando strcpy
    strcpy(cad1, "XX");
    printf("\nPrueba de la función strcpy. Se copia la cadena XX a cad1: %s\n", cad1);

    // Copiar los primeros 4 caracteres de cad0 a cad2 usando strncpy y asegurar la terminación nula
    strncpy(cad2, cad0, 4);
    cad2[4] = '\0';
    printf("\nPrueba de la función strncpy. Se copian 4 caracteres de cad0 a cad2: %s\n", cad2);

    // Copiar los primeros 3 caracteres de cad3 a cad2 usando strncpy y asegurar la terminación nula
    strncpy(cad2, cad3, 3);
    cad2[3] = '\0';
    printf("\nPrueba de la función strncpy. Se copian 3 caracteres de cad3 a cad2: %s\n", cad2);

    // Concatenar cad3 a cad0 usando strcat
    strcat(cad0, cad3);
    printf("\nPrueba de la función strcat. Se incorpora la cadena cad3 a cad0: %s\n", cad0);

    // Concatenar " YY" a cad1 usando strcat
    strcat(cad1, " YY");
    printf("\nPrueba de la función strcat. Se incorpora la cadena YY a cad1: %s\n", cad1);

    // Concatenar los primeros 4 caracteres de cad0 a cad2 usando strncat
    strcat(cad2, " ");
    strncat(cad2, cad0, 4);
    printf("\nPrueba de la función strncat. Se incorporan 4 caracteres de cad0 a cad2:\n%s\n", cad2);

    // Buscar "México" dentro de cad0 usando strstr
    cad0 = strstr(cad0, "México");
    printf("\nPrueba de la función strstr. Se trata de localizar la cadena México dentro de cad0: %s\n", cad0);

    // Intentar buscar "Guatemala" dentro de cad0 usando strstr
    cad0 = strstr(cad0, "Guatemala");
    printf("\nPrueba de la función strstr. Se trata de localizar la cadena Guatemala dentro de cad0: %s\n", cad0);
}
