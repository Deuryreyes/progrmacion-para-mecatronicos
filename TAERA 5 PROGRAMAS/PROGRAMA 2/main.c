#include <stdio.h>
#include <ctype.h>
#include <string.h>

void contarCaracteres(char *cadena, int *minusculas, int *mayusculas, int *numeros) {
    int i = 0;
    while (cadena[i] != '\0') {
        if (islower(cadena[i])) {
            (*minusculas)++;
        } else if (isupper(cadena[i])) {
            (*mayusculas)++;
        } else if (isdigit(cadena[i])) {
            (*numeros)++;
        }
        i++;
    }
}

int main() {
    char cadena[100];
    int minusculas = 0, mayusculas = 0, numeros = 0;

    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);
    if (cadena[strlen(cadena) - 1] == '\n') {
        cadena[strlen(cadena) - 1] = '\0';
    }

    contarCaracteres(cadena, &minusculas, &mayusculas, &numeros);

    printf("\nEn la cadena \"%s\" hay:\n", cadena);
    printf("- Letras minúsculas: %d\n", minusculas);
    printf("- Letras mayúsculas: %d\n", mayusculas);
    printf("- Números: %d\n", numeros);

    return 0;
}
