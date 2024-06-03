#include <stdio.h>


void main(void) // Función principal del programa
{
    int I; // Declaración de la variable entera I,que se usará en el bucle
    float SAL, NOM; // Declaración de las variables SAL (salario) y NOM (nómina)

    NOM = 0; // Inicialización de la variable NOM a 0, que almacenará el total de la nómina

    for (I = 1; I <= 15; I++) // Bucle que se ejecuta 15 veces
    {
        printf("Ingrese el salario del profesor %d:\t", I); // Solicita el salario del profesor I
        scanf("%f", &SAL); // Lee el salario introducido por el usuario y lo almacena en SAL
        NOM = NOM + SAL; // Añade el salario ingresado al total de la nómina
    }

    printf("\nEl total de la nómina es: %.2f\n", NOM); // Muestra el total de la nómina con dos decimales
}
