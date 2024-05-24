#include <stdio.h>

int main(void)  // main es el punto de entrada de este programa y int indica que devolver un valor entero
{
    float PRE, NPR;  // declara dos variables de tipo float, PRE para el precio original y NPR para el nuevo precio

    printf("Ingrese el precio del producto: ");  // muestra el mensaje al usuario solicitando el precio del producto
    scanf("%f", &PRE);  // lee el valor ingresado por el usuario y lo almacena en PRE

    if (PRE < 1500)  // evalua la condicion si PRE es menor que 1500
    {
        NPR = PRE * 1.11;  // si la condicion es verdadera, incrementa precio en un 11%
    }
    else if (PRE >= 1500)  // evalua la condicion si PRE es mayor o igual que 1500
    {
        NPR = PRE * 1.08;  // incrementa el precio en un 8%
    }

    printf("\nNuevo precio: %.2f\n", NPR);  // muestra el nuevo precio con dos decimales

    return 0;  // devuelve 0 indicando que el programa termina correctamente
}

