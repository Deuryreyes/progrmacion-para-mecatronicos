
#include <stdio.h>

int main(void)  // Función principal del programa que devuelve un entero
{
    float SAL;  // Variable  para almacenar el salario
    int NIV;     // Variable  para almacenar el nivel académico del profesor

    printf("Ingrese el nivel académico del profesor: ");  // le pide al usuario que ingrese el nivel académico
    scanf("%d", &NIV);  // lee el nivel académico colocado por el usuario y lo almacena en la variable NIV

    printf("Ingrese el salario: ");  // Solicita al usuario que ingrese el salario
    scanf("%f", &SAL);  // Lee el salario ingresado por el usuario y lo almacena en la variable SAL

    switch (NIV)  // Estructura de control que selecciona el bloque de código a ejecutar según el valor de NIV
    {
        case 1:  // Caso cuando NIV es 1
            SAL *= 1.0035;  // Incrementa el salario en un 0.35%
            break;  // Termina la ejecución del caso 1

        case 2:  // Caso cuando NIV es 2
            SAL *= 1.0041;  // Incrementa el salario en un 0.41%
            break;  // Termina la ejecución del caso 2

        case 3:  // Caso cuando NIV es 3
            SAL *= 1.0048;  // Incrementa el salario en un 0.48%
            break;  // Termina la ejecución del caso 3

        case 4:  // Caso cuando NIV es 4
            SAL *= 1.0053;  // Incrementa el salario en un 0.53%
            break;  // Termina la ejecución del caso 4


        default:  // Caso por defecto cuando NIV no coincide con ningún caso anterior
            printf("Nivel no válido.");  // me da un mensaje diciendo que el nivel no es válido
            return 1;  // Devuelve 1 indicando un error
    }

    // Imprime el nuevo salario y el nivel académico del profesor
    printf("\n\nNivel: %d\nNuevo salario: %.2f\n", NIV, SAL);

    return 0;  // Devuelve 0 indicando que el programa terminó correctamente
}
