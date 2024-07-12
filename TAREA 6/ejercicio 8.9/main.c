#include <stdio.h>
#include <string.h>

/* Declaración de las estructuras */
typedef struct {
    char zona[20];
    char calle[20];
    char colo[20];  // Colonia
} ubicacion;

typedef struct {
    char clave[5];
    float scu;      // Superficie cubierta
    float ste;      // Superficie terreno
    char car[50];   // Características
    ubicacion ubi;  // Ubicación
    float precio;
    char dispo;     // Disponibilidad (Venta-V Renta-R)
} propiedades;

/* Prototipos de funciones */
void Lectura(propiedades A[], int T);
void F1(propiedades A[], int T);
void F2(propiedades A[], int T);

void main(void)
{
    propiedades PROPIE[100];  // Arreglo de propiedades
    int TAM;

    /* Solicitar número de propiedades y validar */
    do {
        printf("Ingrese el número de propiedades (máximo 100): ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);

    /* Llamadas a funciones */
    Lectura(PROPIE, TAM);
    F1(PROPIE, TAM);
    F2(PROPIE, TAM);
}

void Lectura(propiedades A[], int T)
{
    int I;
    for (I = 0; I < T; I++) {
        printf("\nIngrese datos de la propiedad %d\n", I + 1);
        printf("Clave: ");
        fflush(stdin);
        gets(A[I].clave);
        printf("Superficie cubierta: ");
        scanf("%f", &A[I].scu);
        printf("Superficie terreno: ");
        scanf("%f", &A[I].ste);
        fflush(stdin);
        printf("Características: ");
        gets(A[I].car);
        printf("\tZona: ");
        fflush(stdin);
        gets(A[I].ubi.zona);
        printf("\tCalle: ");
        fflush(stdin);
        gets(A[I].ubi.calle);
        printf("\tColonia: ");
        fflush(stdin);
        gets(A[I].ubi.colo);
        printf("Precio: ");
        scanf("%f", &A[I].precio);
        fflush(stdin);
        printf("Disponibilidad (Venta-V Renta-R): ");
        scanf(" %c", &A[I].dispo);  // Espacio antes de %c para evitar problemas de lectura de buffer
    }
}

void F1(propiedades A[], int T)
{
    int I;
    printf("\nListado de Propiedades para Venta en Miraflores\n");
    for (I = 0; I < T; I++) {
        if ((A[I].dispo == 'V') && (strcmp(A[I].ubi.zona, "Miraflores") == 0)) {
            if ((A[I].precio >= 450000) && (A[I].precio <= 650000)) {
                printf("\nClave de la propiedad: %s", A[I].clave);
                printf("\nSuperficie cubierta: %.2f", A[I].scu);
                printf("\nSuperficie terreno: %.2f", A[I].ste);
                printf("\nCaracterísticas: %s", A[I].car);
                printf("\nCalle: %s", A[I].ubi.calle);
                printf("\nColonia: %s", A[I].ubi.colo);
                printf("\nPrecio: %.2f\n", A[I].precio);
            }
        }
    }
}

void F2(propiedades A[], int T)
{
    float li, ls;
    char zon[20];
    int I;

    printf("\nListado de Propiedades para Renta\n");
    printf("Ingrese zona geográfica: ");
    fflush(stdin);
    gets(zon);
    printf("Ingrese el límite inferior del precio: ");
    scanf("%f", &li);
    printf("Ingrese el límite superior del precio: ");
    scanf("%f", &ls);

    for (I = 0; I < T; I++) {
        if ((A[I].dispo == 'R') && (strcmp(A[I].ubi.zona, zon) == 0)) {
            if ((A[I].precio >= li) && (A[I].precio <= ls)) {
                printf("\nClave de la propiedad: %s", A[I].clave);
                printf("\nSuperficie cubierta: %.2f", A[I].scu);
                printf("\nSuperficie terreno: %.2f", A[I].ste);
                printf("\nCaracterísticas: %s", A[I].car);
                printf("\nCalle: %s", A[I].ubi.calle);
                printf("\nColonia: %s", A[I].ubi.colo);
                printf("\nPrecio: %.2f\n", A[I].precio);
            }
        }
    }
}
