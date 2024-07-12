#include <stdio.h>
#include <string.h>

// Declaración de la estructura alumno utilizando typedef
typedef struct {
    int matricula;
    char nombre[30];
    float cal[5]; // Arreglo unidimensional para las calificaciones
} alumno;

// Prototipos de funciones
void Lectura(alumno[], int);
void F1(alumno[], int);
void F2(alumno[], int);
void F3(alumno[], int);

void main(void)
{
    alumno ARRE[50]; // Declaración de un arreglo unidimensional de tipo alumno
    int TAM;

    // Solicitar al usuario el tamaño del arreglo, asegurando que esté entre 1 y 50
    do {
        printf("Ingrese el tamaño del arreglo (entre 1 y 50): ");
        scanf("%d", &TAM);
    } while (TAM > 50 || TAM < 1);

    // Llamadas a las funciones
    Lectura(ARRE, TAM); // Lectura de datos de los alumnos
    F1(ARRE, TAM);      // Función F1: obtener matrícula y promedio de cada alumno
    F2(ARRE, TAM);      // Función F2: obtener matrículas de alumnos con calif. > 9 en la tercera materia
    F3(ARRE, TAM);      // Función F3: obtener promedio general del grupo en la materia 4
}

// Función para leer datos de los alumnos
void Lectura(alumno A[], int T)
{
    int I, J;
    for (I = 0; I < T; I++) {
        printf("\nIngrese los datos del alumno %d", I + 1);
        printf("\nIngrese la matrícula del alumno: ");
        scanf("%d", &A[I].matricula);
        fflush(stdin);
        printf("Ingrese el nombre del alumno: ");
        gets(A[I].nombre);
        for (J = 0; J < 5; J++) {
            printf("\tIngrese la calificación %d del alumno %d: ", J + 1, I + 1);
            scanf("%f", &A[I].cal[J]);
        }
    }
}

// Función para obtener matrícula y promedio de cada alumno
void F1(alumno A[], int T)
{
    int I, J;
    float SUM, PRO;
    printf("\n\nMatrícula y promedio de cada alumno:");
    for (I = 0; I < T; I++) {
        printf("\nMatrícula del alumno: %d", A[I].matricula);
        SUM = 0.0;
        for (J = 0; J < 5; J++)
            SUM += A[I].cal[J];
        PRO = SUM / 5;
        printf("\t\tPromedio: %.2f", PRO);
    }
}

// Función para obtener las matrículas de los alumnos con calificación > 9 en la tercera materia
void F2(alumno A[], int T)
{
    int I;
    printf("\n\nAlumnos con calificación en la tercera materia > 9:");
    for (I = 0; I < T; I++) {
        if (A[I].cal[2] > 9) {
            printf("\nMatrícula del alumno: %d", A[I].matricula);
        }
    }
}

// Función para obtener el promedio general del grupo en la materia 4
void F3(alumno A[], int T)
{
    int I;
    float PRO, SUM = 0.0;
    for (I = 0; I < T; I++)
        SUM += A[I].cal[3];
    PRO = SUM / T;
    printf("\n\nPromedio de la materia 4: %.2f", PRO);
}
