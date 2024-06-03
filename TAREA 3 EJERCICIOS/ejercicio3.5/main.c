#include <stdio.h>

int main(void)
{
    float PAG, SPA = 0; // Declaración e inicialización de variables
    printf("Ingrese el primer pago:\t"); // pide el rimer pago
    scanf("%f", &PAG); // almacena el  primer pago

    do
    {
        SPA = SPA + PAG; // Suma del pago al total acumulado
        printf("Ingrese el siguiente pago (ingrese 0 para terminar):\t "); //piede el siguinte pago hasta que se ponga 0
        scanf("%f", &PAG); // almacena el  siguiente pago
    } while (PAG != 0); // Continuar el bucle hasta que se ingrese 0

    printf("\nEl total de pagos del mes es: %.2f\n", SPA); // Da la suma total de los pagos

    return 0; //indica 0 que significa que el programa se ejecutó correctamente
}
