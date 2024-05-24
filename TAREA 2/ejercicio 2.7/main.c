#include <stdio.h>
#include <stdlib.h>

int main()
{
    float P, S, R;  // Declaración de variables para las ventas de los tres vendedores

printf("\nIngrese las ventas de los tres vendedores: ");// Solicita al usuario ingresar las ventas de los tres vendedores.
    scanf("%f %f %f", &P, &S, &R); // Comprobación para determinar el orden de las ventas y mostrar el resultado
    if (P > R)  // Si las ventas de P son mayores que las de R
    {
        if (P > S)  // Si las ventas de P son mayores que las de S
        {
            if (S > R)  // Si las ventas de S son mayores que las de R
            {
                printf("\n\nEl orden es P, S y R: %.2f %.2f %.2f", P, S, R);  //  el orden P, S y R
            }
            else  // Si las ventas de R son mayores que las de S
            {
                printf("\n\nEl orden es P, R y S: %.2f %.2f %.2f", P, R, S);  //  el orden P, R y S
            }
        }
        else  // Si las ventas de S son mayores que las de P
        {
            printf("\n\nEl orden es S, P y R: %.2f %.2f %.2f", S, P, R);  //  el orden S, P y R
        }
    }
    else  // Si las ventas de R son mayores que las de P
    {
        if (S > R)  // Si las ventas de S son mayores que las de R
        {
            if (P > R)  // Si las ventas de P son mayores que las de R
            {
                printf("\n\nEl orden es S, P y R: %.2f %.2f %.2f", S, P, R);  //  el orden S, P y R
            }
            else  // Si las ventas de R son mayores que las de P
            {
                printf("\n\nEl orden es S, R y P: %.2f %.2f %.2f", S, R, P);  // el orden S, R y P
            }
        }
        else  // Si las ventas de R son mayores que las de S
        {
            printf("\n\nEl orden es R, S y P: %.2f %.2f %.2f", R, S, P);  // el orden R, S y P
        }
    }

    return 0;
}
