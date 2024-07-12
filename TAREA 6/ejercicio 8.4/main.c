#include <stdio.h>
#include <string.h>

// Declaraci�n de la estructura alumno utilizando typedef
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
    alumno ARRE[50]; // Declaraci�n de un arreglo unidimensional de tipo alumno
    int TAM;

    // Solicitar al usuario el tama�o del arreglo, asegurando que est� entre 1 y 50
    do {
        printf("Ingrese el tama�o del arreglo (entre 1 y 50): ");
        scanf("%d", &TAM);
    } while (TAM > 50 || TAM < 1);

    // Llamadas a las funciones
    Lectura(ARRE, TAM); // Lectura de datos de los alumnos
    F1(ARRE, TAM);      // Funci�n F1: obtener matr�cula y promedio de cada alumno
    F2(ARRE, TAM);      // Funci�n F2: obtener matr�culas de alumnos con calif. > 9 en la tercera materia
    F3(ARRE, TAM);      // Funci�n F3: obtener promedio general del grupo en la materia 4
}

// Funci�n para leer datos de los alumnos
void Lectura(alumno A[], int T)
{
    int I, J;
    for (I = 0; I < T; I++) {
        printf("\nIngrese los datos del alumno %d", I + 1);
        printf("\nIngrese la matr�cula del alumno: ");
        scanf("%d", &A[I].matricula);
        fflush(stdin);
        printf("Ingrese el nombre del alumno: ");
        gets(A[I].nombre);
        for (J = 0; J < 5; J++) {
            printf("\tIngrese la calificaci�n %d del alumno %d: ", J + 1, I + 1);
            scanf("%f", &A[I].cal[J]);
        }
    }
}

// Funci�n para obtener matr�cula y promedio de cada alumno
void F1(alumno A[], int T)
{
    int I, J;
    float SUM, PRO;
    printf("\n\nMatr�cula y promedio de cada alumno:");
    for (I = 0; I < T; I++) {
        printf("\nMatr�cula del alumno: %d", A[I].matricula);
        SUM = 0.0;
        for (J = 0; J < 5; J++)
            SUM += A[I].cal[J];
        PRO = SUM / 5;
        printf("\t\tPromedio: %.2f", PRO);
    }
}

// Funci�n para obtener las matr�culas de los alumnos con calificaci�n > 9 en la tercera materia
void F2(alumno A[], int T)
{
    int I;
    printf("\n\nAlumnos con calificaci�n en la tercera materia > 9:");
    for (I = 0; I < T; I++) {
        if (A[I].cal[2] > 9) {
            printf("\nMatr�cula del alumno: %d", A[I].matricula);
        }
    }
}

// Funci�n para obtener el promedio general del grupo en la materia 4
void F3(alumno A[], int T)
{
    int I;
    float PRO, SUM = 0.0;
    for (I = 0; I < T; I++)
        SUM += A[I].cal[3];
    PRO = SUM / T;
    printf("\n\nPromedio de la materia 4: %.2f", PRO);
}
