#include <stdio.h>

void main(void) // Función principal del programa
{
    float PAG, SPA; // Declaración de variables de tipo real
    SPA = 0; // Inicialización de SPA a 0 para la suma de los pagos


    printf("Ingrese el primer pago:\t"); // pide al usuario el primer pago

    scanf("%f", &PAG); // toma el primer pago ingresado por el usuario y lo almacena en PAG


    while (PAG != 0) // Bucle que se ejecuta mientras PAG no sea cero
    {
        SPA = SPA + PAG; // Suma el pago actual a SPA
        printf("Ingrese el siguiente pago:\t "); // pide al usuario el siguiente pago
        scanf("%f", &PAG); // toma el pago ingresado por el usuario y lo almacena en PAG
    }
    printf("\nEl total de pagos del mes es: %.2f\n", SPA);  // Imprime la suma total de los pagos
}
