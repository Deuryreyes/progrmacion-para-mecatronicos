#include <stdio.h>
#include <ctype.h>

// Funci�n principal del programa
void main(void)
{
    char p1;

    // Solicitamos al usuario que ingrese un car�cter para verificar si es un d�gito
    printf("\nIngrese un caracter para analizar si �ste es un d�gito: ");
    p1 = getchar();
    // Verificamos si el car�cter es un d�gito
    if (isdigit(p1)) {
        printf("%c es un d�gito \n", p1);
    } else {
        printf("%c no es un d�gito \n", p1);
    }

    // Limpiamos el buffer de entrada para evitar errores
    fflush(stdin);

    // Solicitamos al usuario que ingrese un car�cter para verificar si es una letra
    printf("\nIngrese un caracter para examinar si �ste es una letra: ");
    p1 = getchar();

    // Verificamos si el car�cter es una letra
    if (isalpha(p1)) {
        printf("%c es una letra \n", p1);
    } else {
        printf("%c no es una letra \n", p1);
    }

    // Limpiamos el buffer de entrada nuevamente
    fflush(stdin);

    // Solicitamos al usuario que ingrese un car�cter para verificar si es una letra min�scula
    printf("\nIngrese un caracter para examinar si �ste es una letra min�scula: ");
    p1 = getchar();

    // Verificamos si el car�cter es una letra y luego si es min�scula
    if (isalpha(p1)) {
        if (islower(p1)) {
            printf("%c es una letra min�scula \n", p1);
        } else {
            printf("%c no es una letra min�scula \n", p1);
        }
    } else {
        printf("%c no es una letra \n", p1);
    }

    // Limpiamos el buffer de entrada nuevamente
    fflush(stdin);

    // Solicitamos al usuario que ingrese una letra para convertirla de may�scula a min�scula
    printf("\nIngrese una letra para convertirla de may�scula a min�scula: ");
    p1 = getchar();

    // Verificamos si el car�cter es una letra y luego si es may�scula
    if (isalpha(p1)) {
        if (isupper(p1)) {
            printf("%c fue convertida de may�scula a min�scula \n", tolower(p1));
        } else {
            printf("%c es una letra min�scula \n", p1);
        }
    } else {
        printf("%c no es una letra \n", p1);
    }
}
