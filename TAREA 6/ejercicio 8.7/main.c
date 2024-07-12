#include <stdio.h>
#include <string.h>

typedef struct {
    char mat[20]; // Materia
    int pro;      // Promedio
} matpro;

typedef struct {
    int matri;        // Matrícula
    char nom[20];     // Nombre del alumno
    matpro cal[5];    // Calificaciones de hasta 5 materias
} alumno;

// Prototipos de funciones
void Lectura(alumno A[], int T);
void F1(alumno A[], int T);
void F2(alumno A[], int T);
void F3(alumno A[], int T);

void main(void)
{
    alumno ALU[50]; // Arreglo de alumnos
    int TAM;

    // Solicitar tamaño del arreglo y validar
    do {
        printf("Ingrese el tamaño del arreglo (máximo 50): ");
        scanf("%d", &TAM);
    } while (TAM > 50 || TAM < 1);

    // Llamadas a funciones
    Lectura(ALU, TAM);
    F1(ALU, TAM);
    F2(ALU, TAM);
    F3(ALU, TAM);
}

void Lectura(alumno A[], int T)
{
    int I, J;
    for (I = 0; I < T; I++) {
        // Ingreso de datos para cada alumno
        printf("\nIngrese los datos del alumno %d\n", I + 1);
        printf("Ingrese la matrícula del alumno: ");
        scanf("%d", &A[I].matri);
        fflush(stdin);
        printf("Ingrese el nombre del alumno: ");
        gets(A[I].nom);

        // Ingreso de calificaciones para cada materia
        for (J = 0; J < 5; J++) {
            printf("\tMateria %d: ", J + 1);
            fflush(stdin);
            gets(A[I].cal[J].mat);
            printf("\tPromedio %d: ", J + 1);
            scanf("%d", &A[I].cal[J].pro);
        }
    }
}

void F1(alumno A[], int T)
{
    int I, J;
    float SUM;
    for (I = 0; I < T; I++) {
        // Calcular promedio general de cada alumno
        printf("\nMatrícula del alumno: %d", A[I].matri);
        SUM = 0.0;
        for (J = 0; J < 5; J++)
            SUM += A[I].cal[J].pro;
        SUM /= 5;
        printf("\tPromedio: %.2f", SUM);
    }
}

void F2(alumno A[], int T)
{
    int I;
    // Mostrar matrículas de alumnos con calificación mayor a 9 en la tercera materia
    printf("\nAlumnos con calificación mayor a 9 en la tercera materia:\n");
    for (I = 0; I < T; I++) {
        if (A[I].cal[2].pro > 9)
            printf("Matrícula del alumno: %d\n", A[I].matri);
    }
}

void F3(alumno A[], int T)
{
    int I;
    float SUM = 0.0;
    // Calcular promedio general de la cuarta materia entre todos los alumnos
    for (I = 0; I < T; I++)
        SUM += A[I].cal[3].pro;
    SUM /= T;
    printf("\nPromedio de la cuarta materia: %.2f\n", SUM);
}

