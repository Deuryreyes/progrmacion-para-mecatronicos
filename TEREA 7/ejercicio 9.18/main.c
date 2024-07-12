#include <stdio.h>

void mezcla(FILE *, FILE *, FILE *); // Prototipo de función.

void main(void)
{
    FILE *ar, *ar1, *ar2;
    ar = fopen("arc9.dat", "r");
    ar1 = fopen("arc10.dat", "r");
    ar2 = fopen("arc11.dat", "w");

    if (ar != NULL && ar1 != NULL && ar2 != NULL)
    {
        mezcla(ar, ar1, ar2);
        fclose(ar);
        fclose(ar1);
        fclose(ar2);
    }
    else
    {
        printf("No se pueden abrir los archivos\n");
    }
}

void mezcla(FILE *ar, FILE *ar1, FILE *ar2)
{
    int mat, mat1;
    float ca[3], ca1[3], cal;
    int b = 1, b1 = 1;

    while ((!feof(ar) || !b) && (!feof(ar1) || !b1))
    {
        if (b) // Lee del archivo ar la matrícula y las tres calificaciones del alumno.
        {
            fscanf(ar, "%d", &mat);
            for (int i = 0; i < 3; i++)
                fscanf(ar, "%f", &ca[i]);
            b = 0;
        }

        if (b1) // Lee del archivo ar1 la matrícula y las tres calificaciones del alumno.
        {
            fscanf(ar1, "%d", &mat1);
            for (int i = 0; i < 3; i++)
                fscanf(ar1, "%f", &ca1[i]);
            b1 = 0;
        }

        if (mat < mat1)
        {
            fprintf(ar2, "%d\t", mat);
            for (int i = 0; i < 3; i++)
                fprintf(ar2, "%f\t", ca[i]);
            fputs("\n", ar2);
            b = 1;
        }
        else
        {
            fprintf(ar2, "%d\t", mat1);
            for (int i = 0; i < 3; i++)
                fprintf(ar2, "%f\t", ca1[i]);
            fputs("\n", ar2);
            b1 = 1;
        }
    }

    // Copia el resto de datos del archivo ar.
    if (!b)
    {
        fprintf(ar2, "%d\t", mat);
        for (int i = 0; i < 3; i++)
        {
            fscanf(ar, "%f", &cal);
            fprintf(ar2, "%f\t", cal);
        }
        fputs("\n", ar2);
        while (!feof(ar))
        {
            fscanf(ar, "%d", &mat);
            fprintf(ar2, "%d\t", mat);
            for (int i = 0; i < 3; i++)
            {
                fscanf(ar, "%f", &cal);
                fprintf(ar2, "%f\t", cal);
            }
            fputs("\n", ar2);
        }
    }

    // Copia el resto de datos del archivo ar1.
    if (!b1)
    {
        fprintf(ar2, "%d\t", mat1);
        for (int i = 0; i < 3; i++)
        {
            fscanf(ar1, "%f", &cal);
            fprintf(ar2, "%f\t", cal);
        }
        fputs("\n", ar2);
        while (!feof(ar1))
        {
            fscanf(ar1, "%d", &mat1);
            fprintf(ar2, "%d\t", mat1);
            for (int i = 0; i < 3; i++)
            {
                fscanf(ar1, "%f", &cal);
                fprintf(ar2, "%f\t", cal);
            }
            fputs("\n", ar2);
        }
    }
}
