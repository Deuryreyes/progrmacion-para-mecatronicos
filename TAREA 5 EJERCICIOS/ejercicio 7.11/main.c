# include <stdio.h>
# include <ctype.h>



void main(void) // Verifica si un car�cter en una posici�n espec�fica de una cadena es una letra min�scula. */
{
    char p, cad[50];  // Declaraci�n de variables: p para el car�cter en la posici�n espec�fica, cad para la cadena
    int n;  // Variable para almacenar la posici�n deseada por el usuario

    printf("\nIngrese la cadena de caracteres (m�ximo 50): ");
    gets(cad);  // Lee la cadena de caracteres ingresada por el usuario

    printf("\nIngrese la posici�n en la cadena que desea verificar: ");
    scanf("%d", &n);  // Lee la posici�n espec�fica ingresada por el usuario

    if ((n >= 1) && (n <= strlen(cad)))  // Verifica si la posici�n est� dentro de los l�mites v�lidos de la cadena
    {
        p = cad[n-1];  // Obtiene el car�cter en la posici�n n-1 (debido a la indexaci�n de cadenas en C)

        if (islower(p))  // Verifica si el car�cter es una letra min�scula
            printf("\n%c es una letra min�scula", p);
        else
            printf("\n%c no es una letra min�scula", p);
    }
    else
    {
        printf("\nEl valor ingresado de n es incorrecto");  // Mensaje si la posici�n ingresada es incorrecta
    }
}
