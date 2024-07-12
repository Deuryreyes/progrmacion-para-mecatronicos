#include <stdio.h>
#include <stdlib.h>


void main(void);

void main(void)
{
    char c, cad[10];  // Declaración de variables: c para el carácter S/N, cad para almacenar la cadena de caracteres
    int i = 0;        // Variable contador para contar las cadenas ingresadas
    float sum = 0.0;  // Variable para almacenar la suma de los números convertidos

    printf("\nDesea ingresar una cadena de caracteres (S/N)? ");
    c = getchar();  // Captura la respuesta del usuario (S/N)

    while (c == 'S')  // Bucle while que se ejecuta mientras el usuario responda con 'S'
    {
        printf("\nIngrese la cadena de caracteres: ");
        fflush(stdin);  // Limpia el buffer de entrada para evitar problemas de lectura residual

        gets(cad);  // Lee la cadena de caracteres ingresada por el usuario

        i++;  // Incrementa el contador de cadenas ingresadas
        sum += atof(cad);  // Convierte la cadena a float y la suma a la variable sum

        printf("\nDesea ingresar otra cadena de caracteres (S/N)? ");
        c = getchar();  // Captura la respuesta del usuario para continuar (S/N)
    }

    printf("\nSuma: %.2f", sum);  // Muestra la suma de todos los números ingresados

    if (i > 0)
    {
        printf("\nPromedio: %.2f", sum / i);  // Calcula y muestra el promedio si se ingresaron números
    }
    else
    {
        printf("\nPromedio: No se ingresaron números.");  // Mensaje si no se ingresaron números
    }
}

