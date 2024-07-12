#include <stdio.h>
#include <string.h>

/* Declaración de las estructuras y uniones */
typedef struct {
    char noba[10];   // Nombre del banco
    char nucu[10];   // Número de cuenta
} banco;

typedef union {
    banco che;       // Cheque
    banco nomi;      // Nómina
    char venta;      // Ventanilla
} fpago;

typedef struct {
    char cnu[20];    // Calle y número
    char col[20];    // Colonia
    char cp[5];      // Código Postal
    char ciu[15];    // Ciudad
} domicilio;

typedef struct {
    int num;         // Número de vendedor
    char nom[20];    // Nombre del vendedor
    float ven[12];   // Ventas del año (12 meses)
    domicilio domi;  // Domicilio del vendedor
    float sal;       // Salario mensual
    fpago pago;      // Forma de pago (cheque, nómina o ventanilla)
    int cla;         // Clave forma de pago (1: banco, 2: nómina, 3: ventanilla)
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

    /* Solicitar número de vendedores y validar */
    do {
        printf("Ingrese el número de vendedores (máximo 100): ");
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
        printf("Número de vendedor: ");
        scanf("%d", &A[I].num);
        printf("Nombre del vendedor: ");
        fflush(stdin);
        gets(A[I].nom);
        printf("Ventas del año:\n");
        for (J = 0; J < 12; J++) {
            printf("\tMes %d: ", J + 1);
            scanf("%f", &A[I].ven[J]);
        }
        printf("Domicilio del vendedor:\n");
        printf("\tCalle y número: ");
        fflush(stdin);
        gets(A[I].domi.cnu);
        printf("\tColonia: ");
        fflush(stdin);
        gets(A[I].domi.col);
        printf("\tCódigo Postal: ");
        fflush(stdin);
        gets(A[I].domi.cp);
        printf("\tCiudad: ");
        fflush(stdin);
        gets(A[I].domi.ciu);
        printf("Salario del vendedor: ");
        scanf("%f", &A[I].sal);
        printf("Forma de Pago (Banco-1 Nómina-2 Ventanilla-3): ");
        scanf("%d", &A[I].cla);
        switch (A[I].cla) {
            case 1:
                printf("\tNombre del banco: ");
                fflush(stdin);
                gets(A[I].pago.che.noba);
                printf("\tNúmero de cuenta: ");
                fflush(stdin);
                gets(A[I].pago.che.nucu);
                break;
            case 2:
                printf("\tNombre del banco: ");
                fflush(stdin);
                gets(A[I].pago.nomi.noba);
                printf("\tNúmero de cuenta: ");
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
            printf("Número de empleado: %d\n", A[I].num);
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
            printf("Número de empleado: %d\n", A[I].num);
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
            printf("Número de vendedor: %d\n", A[I].num);
            printf("Banco: %s\n", A[I].pago.che.noba);
            printf("Cuenta: %s\n", A[I].pago.che.nucu);
        }
    }
}
