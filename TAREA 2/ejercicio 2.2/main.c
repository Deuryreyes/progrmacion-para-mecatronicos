#include <stdio.h>  

int main(void)  // main es el punto de entrada de este programa y int indica que devolverá un valor entero
{
    float PRE, NPR;  // declara dos variables de tipo float, PRE para el precio original y NPR para el nuevo precio

    printf("Ingrese el precio del producto: ");  // Muestra el mensaje al usuario solicitando el precio del producto
    scanf("%f", &PRE);  // lee el valor ingresado por el usuario y lo almacena en PRE

    if (PRE < 1500)  // evalua la condición si PRE es menor que 1500
    {
        NPR = PRE * 1.11;  // si la condición es verdadera, incrementa precio en un 11% 
    }
    else
    {
        NPR = PRE;  // si la condición es falsa, NPR permanece igual a PRE
    }

    printf("\nNuevo precio: %.2f\n", NPR);  // me da el nuevo precio con dos decimales

    return 0;  // devuelve 0 indicando que el programa terminó correctamente
}
