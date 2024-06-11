#include <stdio.h>

int main(void)
{
    int ELE[5] = {0};
    int I, VOT;

    printf("Ingresa el primer voto (0 - Para terminar): ");
    scanf("%d", &VOT);

    while (VOT)
    {
        if (VOT >= 1 && VOT <= 5)
            ELE[VOT - 1]++;
        else
            printf("\nEl voto ingresado es incorrecto.\n");

        printf("Ingresa el siguiente voto (0 - Para terminar): ");
        scanf("%d", &VOT);
    }

    printf("\n\nResultados de la Elección\n");

    for (I = 0; I < 5; I++)
        printf("\nCandidato %d: %d votos", I + 1, ELE[I]);

    printf("\n");

    return 0;
}

