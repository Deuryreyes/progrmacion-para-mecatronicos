#include <stdio.h>

int main(void)
{
    int I = 0; // Inicialización del contador de profesores
    float SAL, PRO, NOM = 0; // Inicialización de variables

    printf("Ingrese el salario del profesor:\t"); // pide el salario
    scanf("%f", &SAL); // almacena el primer salario


    do
    {
        NOM = NOM + SAL; // Acumulación de los salarios
        I = I + 1; // Incremento del contador de profesores
        printf("Ingrese el salario del profesor (-0 para terminar):\t");
        scanf("%f", &SAL); // alamacena el salario del profesor
    } while (SAL != 0); // Continuar el bucle hasta que se ingrese 0


    if (I != 0)
    {
        PRO = NOM / I; // Cálculo del promedio de los salarios
    }
    else
    {
        PRO = 0; // Si no se ingresó ningún salario, el promedio es 0
    }


    printf("\nNómina: %.2f \t Promedio de salarios: %.2f\n", NOM, PRO); // dice el promedio de los salarios

    return 0; //  indica 0 para dar a entender que el  programa se ejecutó correctamente
}
