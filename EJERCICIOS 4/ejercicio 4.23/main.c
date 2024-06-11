#include <stdio.h>

void trueque(int *x, int *y) {
    int tem;
    tem = *x;
    *x = *y;
    *y = tem;
}

int suma(int x) {
    return (x + x);
}

int main() {
    int x = 5, y = 10, z;


    printf("Resultado de suma(10): %d\n", suma(10));


    y = suma(10);
    printf("Valor de y: %d\n", y);


    printf("Valores de x e y antes de trueque: %d %d\n", x, y);
    trueque(&x, &y);
    printf("Valores de x e y después de trueque: %d %d\n", x, y);

    return 0;
}
