#include <stdio.h>
#include <math.h>

void parimp(int, int *, int *);
void main(void)
{
    int I, N, NUM, PAR = 0, IMP = 0;
    printf("Ingresa el n�mero de datos: ");
    scanf("%d", &N);
    for (I = 1; I <= N; I++)
    {
        printf("Ingresa el n�mero %d: ", I);
        scanf("%d", &NUM);
        parimp(NUM, &PAR, &IMP);
    printf("\nN�mero de pares: %d", PAR);
    printf("\nN�mero de impares: %d", IMP);
}
}
void parimp(int NUM, int *P, int *I)
{
    if (NUM % 2 == 0)
        *P += 1;
    else
        *I += 1;
}

