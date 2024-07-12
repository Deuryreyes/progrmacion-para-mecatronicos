#include <stdio.h>

typedef struct
{
    char materia[20];
    int calificacion;
} matcal;

typedef struct
{
    int matricula;
    char nombre[20];
    matcal cal[5];
} alumno;

// Prototipos de funciones
void F1(FILE *);
void F2(FILE *);
float F3(FILE *);

void main(void)
{
    float pro;
    FILE *ap;

    if ((ap = fopen("esc.dat", "rb")) != NULL) // Apertura en modo lectura binaria
    {
        F1(ap);
        F2(ap);
        pro = F3(ap);
        printf("\n\nPROMEDIO GENERAL MATERIA 4: %f", pro);
        fclose(ap); // Cierre del archivo al finalizar su uso
    }
    else
    {
        printf("\nEl archivo no se puede abrir");
    }
}

void F1(FILE *ap)
{
    alumno alu;
    int j;
    float sum, pro;

    printf("\nMATRÍCULA y PROMEDIOS");

    fread(&alu, sizeof(alumno), 1, ap); // Lectura del primer registro

    while (!feof(ap))
    {
        printf("\nMatrícula: %d", alu.matricula);
        sum = 0.0;

        for (j = 0; j < 5; j++)
        {
            sum += alu.cal[j].calificacion;
        }

        pro = sum / 5.0; // Cálculo del promedio general
        printf("\tPromedio: %f", pro);

        fread(&alu, sizeof(alumno), 1, ap); // Lectura del siguiente registro
    }
}

void F2(FILE *ap)
{
    alumno alu;

    rewind(ap); // Reinicio del puntero de archivo al inicio

    printf("\n\nALUMNOS CON CALIFICACIÓN > 9 EN MATERIA 3");

    fread(&alu, sizeof(alumno), 1, ap); // Lectura del primer registro

    while (!feof(ap))
    {
        if (alu.cal[2].calificacion > 9) // Verificación de calificación en materia 3
        {
            printf("\nMatrícula del alumno: %d", alu.matricula);
        }

        fread(&alu, sizeof(alumno), 1, ap); // Lectura del siguiente registro
    }
}

float F3(FILE *ap)
{
    alumno alu;
    int i = 0;
    float sum = 0, pro;

    rewind(ap); // Reinicio del puntero de archivo al inicio

    fread(&alu, sizeof(alumno), 1, ap); // Lectura del primer registro

    while (!feof(ap))
    {
        i++;
        sum += alu.cal[3].calificacion; // Suma de calificaciones de materia 4
        fread(&alu, sizeof(alumno), 1, ap); // Lectura del siguiente registro
    }

    if (i > 0)
    {
        pro = sum / i; // Cálculo del promedio
    }
    else
    {
        pro = 0.0; // En caso de que no haya registros, se asigna 0
    }

    return pro;
}
