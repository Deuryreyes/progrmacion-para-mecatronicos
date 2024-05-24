#include <stdio.h>
#include <math.h>


int main(void)  // la función principal del programa y me devuelve un entero.
{
    int OP, T;  // declara las variables OP y T de tipo entero.
    float RES;  // declara la variable RES de tipo float para almacenar el resultado.

    printf("Ingrese la opción del cálculo y el valor entero: ");  // muestra un mensaje solicitando la opción y el valor.
    scanf("%d %d", &OP, &T);  // lee dos valores enteros ingresados por el usuario y los almacena en OP y T.

    switch(OP)  // Estructura de control que selecciona el bloque de código a ejecutar basado en el valor de OP.
    {
        case 1:  // Caso cuando OP es 1.
            RES = T / 5.0;  // Calcula T dividido por 5.0 y lleva el resultado a RES.
            break;  // Termina la ejecución del caso 1.

        case 2:  // Caso cuando OP es 2.
            RES = pow(T, T);  // Calcula T elevado a la potencia T usando la función pow y lleva el resultado a RES.
            break;  // Termina la ejecución del caso 2.

        case 3:  // Caso cuando OP es 3.
            RES = 6 * T / 2.0;  // calcula 6 multiplicado por T dividido por 2.0 y lleva el resultado a RES.
            break;  // termina la ejecución del caso 3.

        default:  // caso por defecto cuando OP no coincide con ningún caso anterior.
            RES = -1;  // asigna -1 a RES indicando una opción inválida.
            break;  // termina la ejecución del caso por defecto.
    }

    printf("\nResultado: %.2f\n", RES);  // me da el resultado con dos decimales.

    return 0;  // devuelve 0 indicando que el programa terminó correctamente.
}

}
