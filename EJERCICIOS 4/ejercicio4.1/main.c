#include <stdio.h>


int cubo(int n);

int main(void)
{
    int I, CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo(I);
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
    return 0;
}

int cubo(int n)

{
    return (n * n * n);
}
