#include <stdio.h>

typedef struct
{
    int clave;
    char nombre[20];
    int carrera;
    float promedio;
    float examen;
    char telefono[12];
} alumno;

// Prototipos de funciones
float F1(FILE *);
void F2(FILE *, FILE *, FILE *, FILE *, FILE *, FILE *);
void F3(FILE *, FILE *, FILE *, FILE *, FILE *);

void main(void)
{
    float pro;
    FILE *ap, *c1, *c2, *c3, *c4, *c5;

    ap = fopen("alu1.dat", "rb"); // Apertura en modo lectura binaria
    c1 = fopen("car1.dat", "w+b"); // Apertura en modo lectura/escritura binaria
    c2 = fopen("car2.dat", "w+b"); // Apertura en modo lectura/escritura binaria
    c3 = fopen("car3.dat", "w+b"); // Apertura en modo lectura/escritura binaria
    c4 = fopen("car4.dat", "w+b"); // Apertura en modo lectura/escritura binaria
    c5 = fopen("car5.dat", "w+b"); // Apertura en modo lectura/escritura binaria

    if ((ap != NULL) && (c1 != NULL) && (c2 != NULL) && (c3 != NULL) &&
        (c4 != NULL) && (c5 != NULL))
    {
        pro = F1(ap);
        printf("\nPROMEDIO EXAMEN DE ADMISIÓN: %.2f", pro);
        F2(ap, c1, c2, c3, c4, c5);
        F3(c1, c2, c3, c4, c5);
    }
    else
    {
        printf("\nEl o los archivos no se pudieron abrir");
    }

    fclose(ap);
    fclose(c1);
    fclose(c2);
    fclose(c3);
    fclose(c4);
    fclose(c5);
}

float F1(FILE *ap)
{
    alumno alu;
    float sum = 0, pro;
    int i = 0;

    fread(&alu, sizeof(alumno), 1, ap); // Lectura del primer registro

    while (!feof(ap))
    {
        i++;
        sum += alu.examen;
        fread(&alu, sizeof(alumno), 1, ap); // Lectura del siguiente registro
    }

    if (i > 0)
    {
        pro = sum / i; // Cálculo del promedio del examen de admisión
    }
    else
    {
        pro = 0.0; // Si no hay registros, se asigna 0
    }

    return pro;
}

void F2(FILE *ap, FILE *c1, FILE *c2, FILE *c3, FILE *c4, FILE *c5)
{
    alumno alu;

    rewind(ap); // Reinicio del puntero del archivo de alumnos

    fread(&alu, sizeof(alumno), 1, ap); // Lectura del primer registro

    while (!feof(ap))
    {
        // Evaluación de condiciones para admisión en cada carrera
        if (((alu.examen >= 1300) && (alu.promedio >= 8)) || ((alu.examen >= 1400) && (alu.promedio >= 7)))
        {
            switch (alu.carrera)
            {
                case 1: fwrite(&alu, sizeof(alumno), 1, c1); break;
                case 2: fwrite(&alu, sizeof(alumno), 1, c2); break;
                case 3: fwrite(&alu, sizeof(alumno), 1, c3); break;
                case 4: fwrite(&alu, sizeof(alumno), 1, c4); break;
                case 5: fwrite(&alu, sizeof(alumno), 1, c5); break;
            }
        }

        fread(&alu, sizeof(alumno), 1, ap); // Lectura del siguiente registro
    }
}

void F3(FILE *c1, FILE *c2, FILE *c3, FILE *c4, FILE *c5)
{
    alumno alu;
    float cal[5] = {0}; // Arreglo para almacenar los promedios de cada carrera
    float sum;
    int i;

    // Cálculo del promedio de examen para cada carrera
    FILE *carreras[5] = {c1, c2, c3, c4, c5};

    for (i = 0; i < 5; i++)
    {
        sum = 0;
        rewind(carreras[i]); // Reinicio del puntero del archivo de la carrera

        fread(&alu, sizeof(alumno), 1, carreras[i]); // Lectura del primer registro

        while (!feof(carreras[i]))
        {
            sum += alu.examen;
            fread(&alu, sizeof(alumno), 1, carreras[i]); // Lectura del siguiente registro
        }

        // Cálculo del promedio para la carrera actual
        if (ftell(carreras[i]) > 0) // Verificación de registros en el archivo
        {
            cal[i] = sum / ftell(carreras[i]);
        }
    }

    // Impresión de los promedios por carrera
    for (i = 0; i < 5; i++)
    {
        printf("\nPromedio carrera %d: %.2f", i + 1, cal[i]);
    }
}
