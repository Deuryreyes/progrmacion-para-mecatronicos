#include <stdio.h>
#include <string.h>

typedef struct {
    char cal[20];    // Calle
    int num;         // N�mero
    char col[20];    // Colonia
    char cp[5];      // C�digo Postal
    char ciu[20];    // Ciudad
} domicilio;

typedef struct {
    char nom[20];    // Nombre y apellido
    int edad;
    char sexo;
    int con;         // Condici�n
    domicilio dom;   // Domicilio del paciente
    char tel[10];    // Tel�fono
} paciente;

// Prototipos de funciones
void Lectura(paciente A[], int T);
void F1(paciente A[], int T);
void F2(paciente A[], int T);
void F3(paciente A[], int T);

void main(void)
{
    paciente HOSPITAL[100]; // Arreglo de pacientes
    int TAM;

    // Solicitar n�mero de pacientes y validar
    do {
        printf("Ingrese el n�mero de pacientes (m�ximo 50): ");
        scanf("%d", &TAM);
    } while (TAM > 50 || TAM < 1);

    // Llamadas a funciones
    Lectura(HOSPITAL, TAM);
    F1(HOSPITAL, TAM);
    F2(HOSPITAL, TAM);
    F3(HOSPITAL, TAM);
}

void Lectura(paciente A[], int T)
{
    int I;
    for (I = 0; I < T; I++) {
        // Ingreso de datos para cada paciente
        printf("\n\t\tPaciente %d\n", I + 1);
        fflush(stdin);
        printf("Nombre: ");
        gets(A[I].nom);
        printf("Edad: ");
        scanf("%d", &A[I].edad);
        printf("Sexo (F-M): ");
        fflush(stdin);
        scanf("%c", &A[I].sexo);
        printf("Condici�n (1..5): ");
        scanf("%d", &A[I].con);
        fflush(stdin);
        printf("\tCalle: ");
        gets(A[I].dom.cal);
        printf("\tN�mero: ");
        scanf("%d", &A[I].dom.num);
        fflush(stdin);
        printf("\tColonia: ");
        gets(A[I].dom.col);
        fflush(stdin);
        printf("\tC�digo Postal: ");
        gets(A[I].dom.cp);
        fflush(stdin);
        printf("\tCiudad: ");
        gets(A[I].dom.ciu);
        fflush(stdin);
        printf("Tel�fono: ");
        gets(A[I].tel);
    }
}

void F1(paciente A[], int T)
{
    int I, FEM = 0, MAS = 0, TOT;
    for (I = 0; I < T; I++) {
        // Contar n�mero de hombres y mujeres
        switch (A[I].sexo) {
            case 'F': FEM++; break;
            case 'M': MAS++; break;
        }
    }
    TOT = FEM + MAS;
    // Calcular porcentaje de hombres y mujeres
    printf("\nPorcentaje de Hombres: %.2f%%", (float)MAS / TOT * 100);
    printf("\nPorcentaje de Mujeres: %.2f%%", (float)FEM / TOT * 100);
}

void F2(paciente A[], int T)
{
    int I, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0;
    for (I = 0; I < T; I++) {
        // Contar pacientes en cada categor�a de condici�n
        switch (A[I].con) {
            case 1: C1++; break;
            case 2: C2++; break;
            case 3: C3++; break;
            case 4: C4++; break;
            case 5: C5++; break;
        }
    }
    // Mostrar n�mero de pacientes por condici�n
    printf("\nN�mero pacientes en condici�n 1: %d", C1);
    printf("\nN�mero pacientes en condici�n 2: %d", C2);
    printf("\nN�mero pacientes en condici�n 3: %d", C3);
    printf("\nN�mero pacientes en condici�n 4: %d", C4);
    printf("\nN�mero pacientes en condici�n 5: %d", C5);
}

void F3(paciente A[], int T)
{
    int I;
    // Mostrar nombre y tel�fono de pacientes en condici�n 5 (m�xima gravedad)
    printf("\nPacientes ingresados en estado de gravedad:\n");
    for (I = 0; I < T; I++) {
        if (A[I].con == 5)
            printf("Nombre: %s\tTel�fono: %s\n", A[I].nom, A[I].tel);
    }
}
