#include <stdio.h>

typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void ordena(FILE *, FILE *); // Prototipo de función.

void main(void)
{
    FILE *ar1, *ar2;
    ar1 = fopen("ad5.dat", "rb"); // Se abre en modo lectura binaria.
    ar2 = fopen("ad6.dat", "wb"); // Se abre en modo escritura binaria.

    if (ar1 != NULL && ar2 != NULL)
    {
        ordena(ar1, ar2);
        fclose(ar1);
        fclose(ar2);
    }
    else
    {
        printf("\nEl o los archivos no se pudieron abrir\n");
    }
}

void ordena(FILE *ap1, FILE *ap2)
{
    alumno alu;
    int t, n, i;

    t = sizeof(alumno);

    fseek(ap1, 0, SEEK_END); // Nos posicionamos al final del archivo.
    n = ftell(ap1) / t; // Calculamos el número de registros.

    // Procesamos desde el último hasta el primero.
    for (i = n - 1; i >= 0; i--)
    {
        fseek(ap1, i * sizeof(alumno), SEEK_SET); // Nos posicionamos en el registro i.
        fread(&alu, sizeof(alumno), 1, ap1); // Leemos el registro.
        fwrite(&alu, sizeof(alumno), 1, ap2); // Escribimos en el archivo de salida.
    }
}
