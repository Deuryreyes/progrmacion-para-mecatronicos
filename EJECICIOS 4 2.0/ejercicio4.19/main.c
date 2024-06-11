#include <stdio.h>

int a, b, c, d;
void funcion1(int, int *, int *);
int funcion2(int *, int);

void main(void)
{
    int local_a;
    local_a = 1;
    b = 2;
    c = 3;
    d = 4;
    printf("\n%d %d %d %d", local_a, b, c, d);
    local_a = funcion2(&local_a, c);
    printf("\n%d %d %d %d", local_a, b, c, d);
}

void funcion1(int r, int *b, int *c)
{
    int local_d;
    a = *c;
    local_d = a + 3 + *b;
    if (r)
    {
        *b = *b + 2;
        *c = *c + 3;
        printf("\n%d %d %d %d", a, *b, *c, local_d);
    }
    else
    {
        *b = *b + 5;
        *c = *c + 4;
        printf("\n%d %d %d %d", a, *b, *c, local_d);
    }
}

int funcion2(int *d, int c)
{
    int local_b;
    a = 1;
    local_b = 7;
    funcion1(-1, d, &local_b);
    printf("\n%d %d %d %d", a, local_b, c, *d);
    c += 3;
    (*d) += 2;
    printf("\n%d %d %d %d", a, local_b, c, *d);
    return (c);
}
