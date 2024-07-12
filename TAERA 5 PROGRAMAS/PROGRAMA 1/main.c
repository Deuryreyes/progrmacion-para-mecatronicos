#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convertirCadena(char *cadena) {
    int i = 0;
    while (cadena[i] != '\0') {
        if (islower(cadena[i])) {
            printf("%c", toupper(cadena[i]));
        } else if (isupper(cadena[i])) {
            printf("%c", tolower(cadena[i]));
        } else {
            printf("%c", cadena[i]);
        }
        i++;
    }
    printf("\n");
}

int main() {
    char cadena[100];
    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);
    if (cadena[strlen(cadena) - 1] == '\n') {
        cadena[strlen(cadena) - 1] = '\0';
    }
    printf("\nCadena original: %s\n", cadena);
    printf("Cadena con minúsculas a mayúsculas y viceversa:\n");
    convertirCadena(cadena);
    return 0;
}
