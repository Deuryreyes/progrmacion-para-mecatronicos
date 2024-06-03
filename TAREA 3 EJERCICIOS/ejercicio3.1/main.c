#include <stdio.h>


void main(void) // Funci�n principal del programa
{
    int I; // Declaraci�n de la variable entera I,que se usar� en el bucle
    float SAL, NOM; // Declaraci�n de las variables SAL (salario) y NOM (n�mina)

    NOM = 0; // Inicializaci�n de la variable NOM a 0, que almacenar� el total de la n�mina

    for (I = 1; I <= 15; I++) // Bucle que se ejecuta 15 veces
    {
        printf("Ingrese el salario del profesor %d:\t", I); // Solicita el salario del profesor I
        scanf("%f", &SAL); // Lee el salario introducido por el usuario y lo almacena en SAL
        NOM = NOM + SAL; // A�ade el salario ingresado al total de la n�mina
    }

    printf("\nEl total de la n�mina es: %.2f\n", NOM); // Muestra el total de la n�mina con dos decimales
}
