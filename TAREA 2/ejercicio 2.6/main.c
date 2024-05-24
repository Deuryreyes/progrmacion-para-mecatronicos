
#include <stdio.h>

int main(void)  // Funci�n principal del programa que devuelve un entero
{
    float SAL;  // Variable  para almacenar el salario
    int NIV;     // Variable  para almacenar el nivel acad�mico del profesor

    printf("Ingrese el nivel acad�mico del profesor: ");  // le pide al usuario que ingrese el nivel acad�mico
    scanf("%d", &NIV);  // lee el nivel acad�mico colocado por el usuario y lo almacena en la variable NIV

    printf("Ingrese el salario: ");  // Solicita al usuario que ingrese el salario
    scanf("%f", &SAL);  // Lee el salario ingresado por el usuario y lo almacena en la variable SAL

    switch (NIV)  // Estructura de control que selecciona el bloque de c�digo a ejecutar seg�n el valor de NIV
    {
        case 1:  // Caso cuando NIV es 1
            SAL *= 1.0035;  // Incrementa el salario en un 0.35%
            break;  // Termina la ejecuci�n del caso 1

        case 2:  // Caso cuando NIV es 2
            SAL *= 1.0041;  // Incrementa el salario en un 0.41%
            break;  // Termina la ejecuci�n del caso 2

        case 3:  // Caso cuando NIV es 3
            SAL *= 1.0048;  // Incrementa el salario en un 0.48%
            break;  // Termina la ejecuci�n del caso 3

        case 4:  // Caso cuando NIV es 4
            SAL *= 1.0053;  // Incrementa el salario en un 0.53%
            break;  // Termina la ejecuci�n del caso 4


        default:  // Caso por defecto cuando NIV no coincide con ning�n caso anterior
            printf("Nivel no v�lido.");  // me da un mensaje diciendo que el nivel no es v�lido
            return 1;  // Devuelve 1 indicando un error
    }

    // Imprime el nuevo salario y el nivel acad�mico del profesor
    printf("\n\nNivel: %d\nNuevo salario: %.2f\n", NIV, SAL);

    return 0;  // Devuelve 0 indicando que el programa termin� correctamente
}
