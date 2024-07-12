#include <stdio.h>
#include <string.h>

/* Declaraci�n de las estructuras y uniones */
typedef struct {
    char noba[10];   // Nombre del banco
    char nucu[10];   // N�mero de cuenta
} banco;

typedef union {
    banco che;       // Cheque
    banco nomi;      // N�mina
    char venta;      // Ventanilla
} fpago;

typedef struct {
    char cnu[20];    // Calle y n�mero
    char col[20];    // Colonia
    char cp[5];      // C�digo Postal
    char ciu[15];    // Ciudad
} domicilio;

typedef struct {
    int num;         // N�mero de vendedor
    char nom[20];    // Nombre del vendedor
    float ven[12];   // Ventas del a�o (12 meses)
    domicilio domi;  // Domicilio del vendedor
    float sal;       // Salario mensual
    fpago pago;      // Forma de pago (cheque, n�mina o ventanilla)
    int cla;         // Clave forma de pago (1: banco, 2: n�mina, 3: ventanilla)
} vendedor;

/* Prototipos de funciones */
void Lectura(vendedor A[], int T);
void F1(vendedor A[], int T);
void F2(vendedor A[], int T);
void F3(vendedor A[], int T);
void F4(vendedor A[], int T);

void main(void)
{
    vendedor VENDEDORES[100];  // Arreglo de vendedores
    int TAM;

    /* Solicitar n�mero de vendedores y validar */
    do {
        printf("Ingrese el n�mero de vendedores (m�ximo 100): ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);

    /* Llamadas a funciones */
    Lectura(VENDEDORES, TAM);
    F1(VENDEDORES, TAM);
    F2(VENDEDORES, TAM);
    F3(VENDEDORES, TAM);
    F4(VENDEDORES, TAM);

    printf("\n\tFIN DEL PROGRAMA\n");
}

void Lectura(vendedor A[], int T)
{
    int I, J;

    for (I = 0; I < T; I++) {
        printf("\nIngrese datos del vendedor %d\n", I + 1);
        printf("N�mero de vendedor: ");
        scanf("%d", &A[I].num);
        printf("Nombre del vendedor: ");
        fflush(stdin);
        gets(A[I].nom);
        printf("Ventas del a�o:\n");
        for (J = 0; J < 12; J++) {
            printf("\tMes %d: ", J + 1);
            scanf("%f", &A[I].ven[J]);
        }
        printf("Domicilio del vendedor:\n");
        printf("\tCalle y n�mero: ");
        fflush(stdin);
        gets(A[I].domi.cnu);
        printf("\tColonia: ");
        fflush(stdin);
        gets(A[I].domi.col);
        printf("\tC�digo Postal: ");
        fflush(stdin);
        gets(A[I].domi.cp);
        printf("\tCiudad: ");
        fflush(stdin);
        gets(A[I].domi.ciu);
        printf("Salario del vendedor: ");
        scanf("%f", &A[I].sal);
        printf("Forma de Pago (Banco-1 N�mina-2 Ventanilla-3): ");
        scanf("%d", &A[I].cla);
        switch (A[I].cla) {
            case 1:
                printf("\tNombre del banco: ");
                fflush(stdin);
                gets(A[I].pago.che.noba);
                printf("\tN�mero de cuenta: ");
                fflush(stdin);
                gets(A[I].pago.che.nucu);
                break;
            case 2:
                printf("\tNombre del banco: ");
                fflush(stdin);
                gets(A[I].pago.nomi.noba);
                printf("\tN�mero de cuenta: ");
                fflush(stdin);
                gets(A[I].pago.nomi.nucu);
                break;
            case 3:
                A[I].pago.venta = 'S';
                break;
        }
    }
}

void F1(vendedor A[], int T)
{
    int I, J;
    float SUM;

    printf("\nVentas Totales de los Vendedores\n");
    for (I = 0; I < T; I++) {
        SUM = 0.0;
        for (J = 0; J < 12; J++) {
            SUM += A[I].ven[J];
        }
        printf("Vendedor: %d\n", A[I].num);
        printf("Ventas: %.2f\n", SUM);
    }
}

void F2(vendedor A[], int T)
{
    int I, J;
    float SUM;

    printf("\nIncremento a los Vendedores con Ventas > 1,500,000$\n");
    for (I = 0; I < T; I++) {
        SUM = 0.0;
        for (J = 0; J < 12; J++) {
            SUM += A[I].ven[J];
        }
        if (SUM > 1500000.00) {
            A[I].sal *= 1.05;  // Incremento del salario en 5%
            printf("N�mero de empleado: %d\n", A[I].num);
            printf("Ventas: %.2f\n", SUM);
            printf("Nuevo salario: %.2f\n", A[I].sal);
        }
    }
}

void F3(vendedor A[], int T)
{
    int I, J;
    float SUM;

    printf("\nVendedores con Ventas < 300,000\n");
    for (I = 0; I < T; I++) {
        SUM = 0.0;
        for (J = 0; J < 12; J++) {
            SUM += A[I].ven[J];
        }
        if (SUM < 300000.00) {
            printf("N�mero de empleado: %d\n", A[I].num);
            printf("Nombre: %s\n", A[I].nom);
            printf("Ventas: %.2f\n", SUM);
        }
    }
}

void F4(vendedor A[], int T)
{
    int I;

    printf("\nVendedores con Cuenta en el Banco\n");
    for (I = 0; I < T; I++) {
        if (A[I].cla == 1) {
            printf("N�mero de vendedor: %d\n", A[I].num);
            printf("Banco: %s\n", A[I].pago.che.noba);
            printf("Cuenta: %s\n", A[I].pago.che.nucu);
        }
    }
}
