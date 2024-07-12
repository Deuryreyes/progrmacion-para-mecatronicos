#include <stdio.h>
#include <string.h>

typedef struct {
    int clave;
    char nombre[15];
    float precio;
    int existencia;
} producto;

void Lectura(producto A[], int T);
void Ventas(producto A[], int T);
void Reabastecimiento(producto A[], int T);
void Nuevos_Productos(producto A[], int *T);
void Inventario(producto A[], int T);

int main(void)
{
    producto INV[100];
    int TAM, OPE;

    // Se solicita al usuario ingresar el número de productos entre 1 y 100
    do {
        printf("Ingrese el número de productos (máximo 100): ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);

    // Función para leer la información de los productos
    Lectura(INV, TAM);

    // Menú de opciones para operar con los productos
    printf("\nIngrese operación a realizar:\n");
    printf("\t1 - Ventas\n");
    printf("\t2 - Reabastecimiento\n");
    printf("\t3 - Nuevos Productos\n");
    printf("\t4 - Inventario\n");
    printf("\t0 - Salir\n");

    scanf("%d", &OPE);

    while (OPE) {
        switch (OPE) {
            case 1:
                Ventas(INV, TAM);
                break;
            case 2:
                Reabastecimiento(INV, TAM);
                break;
            case 3:
                Nuevos_Productos(INV, &TAM);
                break;
            case 4:
                Inventario(INV, TAM);
                break;
        }

        // Volver a mostrar el menú después de cada operación
        printf("\nIngrese operación a realizar:\n");
        printf("\t1 - Ventas\n");
        printf("\t2 - Reabastecimiento\n");
        printf("\t3 - Nuevos Productos\n");
        printf("\t4 - Inventario\n");
        printf("\t0 - Salir\n");

        scanf("%d", &OPE);
    }

    return 0;
}

void Lectura(producto A[], int T)
{
    int I;
    for (I = 0; I < T; I++) {
        // Lectura de cada producto: clave, nombre, precio y existencia
        printf("\nIngrese información del producto %d\n", I + 1);
        printf("\tClave: ");
        scanf("%d", &A[I].clave);
        printf("\tNombre: ");
        scanf("%s", A[I].nombre); // Se asume que el nombre no tiene espacios
        printf("\tPrecio: ");
        scanf("%f", &A[I].precio);
        printf("\tExistencia: ");
        scanf("%d", &A[I].existencia);
    }
}

void Ventas(producto A[], int T)
{
    int CLA, CAN, I, RES;
    float TOT = 0.0, PAR;

    // Ingreso de clave del producto para la venta
    printf("\nIngrese clave del producto (0 para salir): ");
    scanf("%d", &CLA);

    while (CLA) {
        // Ingreso de cantidad vendida
        printf("\tCantidad: ");
        scanf("%d", &CAN);

        // Búsqueda del producto por clave
        I = 0;
        while (I < T && A[I].clave != CLA)
            I++;

        if (I == T) {
            printf("\nLa clave del producto es incorrecta\n");
        } else {
            // Verificación de existencias suficientes
            if (A[I].existencia >= CAN) {
                A[I].existencia -= CAN;
                PAR = A[I].precio * CAN;
                TOT += PAR;
            } else {
                printf("\nNo hay suficiente stock. Solo hay %d unidades.\n", A[I].existencia);
                printf("¿Lleva los disponibles? 1 - Si, 0 - No: ");
                scanf("%d", &RES);
                if (RES) {
                    PAR = A[I].precio * A[I].existencia;
                    TOT += PAR;
                    A[I].existencia = 0;
                }
            }
        }

        // Solicitud de nueva clave o salida
        printf("\nIngrese la siguiente clave del producto (0 para salir): ");
        scanf("%d", &CLA);
    }

    printf("\nTotal de la venta: %f\n", TOT);
}

void Reabastecimiento(producto A[], int T)
{
    int CLA, CAN, I;

    // Ingreso de clave del producto para reabastecer
    printf("\nIngrese clave del producto (0 para salir): ");
    scanf("%d", &CLA);

    while (CLA) {
        // Búsqueda del producto por clave
        I = 0;
        while (I < T && A[I].clave != CLA)
            I++;

        if (I == T) {
            printf("\nLa clave del producto ingresada es incorrecta\n");
        } else {
            // Ingreso de cantidad a reabastecer
            printf("\tCantidad: ");
            scanf("%d", &CAN);
            A[I].existencia += CAN;
        }

        // Solicitud de nueva clave o salida
        printf("\nIngrese otra clave del producto (0 para salir): ");
        scanf("%d", &CLA);
    }
}

void Nuevos_Productos(producto A[], int *T)
{
    int CLA, I, J;

    // Ingreso de clave del nuevo producto
    printf("\nIngrese clave del producto (0 para salir): ");
    scanf("%d", &CLA);

    while (*T < 100 && CLA) {
        // Búsqueda de la posición de inserción según clave
        I = 0;
        while (I < *T && A[I].clave < CLA)
            I++;

        if (I == *T) {
            // Inserción en la última posición
            A[I].clave = CLA;
            printf("\tNombre: ");
            scanf("%s", A[I].nombre); // Se asume que el nombre no tiene espacios
            printf("\tPrecio: ");
            scanf("%f", &A[I].precio);
            printf("\tCantidad: ");
            scanf("%d", &A[I].existencia);
            *T = *T + 1;
        } else if (A[I].clave == CLA) {
            // Producto ya existente
            printf("\nEl producto ya se encuentra en el inventario\n");
        } else {
            // Desplazamiento de elementos para insertar nuevo producto
            for (J = *T; J > I; J--) {
                A[J] = A[J - 1];
            }
            A[I].clave = CLA;
            printf("\tNombre: ");
            scanf("%s", A[I].nombre); // Se asume que el nombre no tiene espacios
            printf("\tPrecio: ");
            scanf("%f", &A[I].precio);
            printf("\tCantidad: ");
            scanf("%d", &A[I].existencia);
            *T = *T + 1;
        }

        // Solicitud de nueva clave o salida
        printf("\nIngrese otra clave de producto (0 para salir): ");
        scanf("%d", &CLA);
    }

    if (*T == 100) {
        printf("\nYa no hay espacio para incorporar nuevos productos\n");
    }
}

void Inventario(producto A[], int T)
{
    int I;

    // Impresión del inventario completo
    printf("\nInventario:\n");
    for (I = 0; I < T; I++) {
        printf("Clave: %d\tNombre: %s\tPrecio: %.2f\tExistencia: %d\n",
               A[I].clave, A[I].nombre, A[I].precio, A[I].existencia);
    }
}
