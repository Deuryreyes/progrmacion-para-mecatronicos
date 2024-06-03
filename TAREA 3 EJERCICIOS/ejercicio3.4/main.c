#include <stdio.h>
#include <math.h>

void main(void) // Funci�n principal del programa
{
    int NUM; // variable entera para los n�meros ingresados
    long CUA, SUC = 0; // variables largas para los cuadrados y su suma


    printf("\nIngrese un n�mero entero -0 para terminar-:\t"); // pide al usuario que ingrese un n�mero entero (0 para terminar)

    scanf("%d", &NUM); //el n�mero ingresado por el usuario y lo almacena en NUM


    while (NUM != 0)// Bucle que se ejecuta mientras NUM no sea cero
    {
        CUA = pow(NUM, 2);// Calcula el cuadrado de NUM
        printf("%d al cuadrado es %ld\n", NUM, CUA); // Imprime el n�mero y su cuadrado
        SUC = SUC + CUA;// Suma el cuadrado actual a SUC
        printf("\nIngrese un n�mero entero -0 para terminar-:\t"); // pide al usuario que ingrese otro n�mero entero (0 para terminar)
        scanf("%d", &NUM); // el siguiente n�mero ingresado por el usuario y lo almacena en NUM
    }
 printf("\nLa suma de los cuadrados es %ld\n", SUC); // Imprime la suma total de los cuadrados
}
