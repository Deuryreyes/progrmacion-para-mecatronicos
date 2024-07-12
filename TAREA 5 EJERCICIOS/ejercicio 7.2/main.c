#include <stdio.h>
#include <ctype.h>

// Función principal del programa
void main(void)
{
    char p1;

    // Solicitamos al usuario que ingrese un carácter para verificar si es un dígito
    printf("\nIngrese un caracter para analizar si éste es un dígito: ");
    p1 = getchar();
    // Verificamos si el carácter es un dígito
    if (isdigit(p1)) {
        printf("%c es un dígito \n", p1);
    } else {
        printf("%c no es un dígito \n", p1);
    }

    // Limpiamos el buffer de entrada para evitar errores
    fflush(stdin);

    // Solicitamos al usuario que ingrese un carácter para verificar si es una letra
    printf("\nIngrese un caracter para examinar si éste es una letra: ");
    p1 = getchar();

    // Verificamos si el carácter es una letra
    if (isalpha(p1)) {
        printf("%c es una letra \n", p1);
    } else {
        printf("%c no es una letra \n", p1);
    }

    // Limpiamos el buffer de entrada nuevamente
    fflush(stdin);

    // Solicitamos al usuario que ingrese un carácter para verificar si es una letra minúscula
    printf("\nIngrese un caracter para examinar si éste es una letra minúscula: ");
    p1 = getchar();

    // Verificamos si el carácter es una letra y luego si es minúscula
    if (isalpha(p1)) {
        if (islower(p1)) {
            printf("%c es una letra minúscula \n", p1);
        } else {
            printf("%c no es una letra minúscula \n", p1);
        }
    } else {
        printf("%c no es una letra \n", p1);
    }

    // Limpiamos el buffer de entrada nuevamente
    fflush(stdin);

    // Solicitamos al usuario que ingrese una letra para convertirla de mayúscula a minúscula
    printf("\nIngrese una letra para convertirla de mayúscula a minúscula: ");
    p1 = getchar();

    // Verificamos si el carácter es una letra y luego si es mayúscula
    if (isalpha(p1)) {
        if (isupper(p1)) {
            printf("%c fue convertida de mayúscula a minúscula \n", tolower(p1));
        } else {
            printf("%c es una letra minúscula \n", p1);
        }
    } else {
        printf("%c no es una letra \n", p1);
    }
}
