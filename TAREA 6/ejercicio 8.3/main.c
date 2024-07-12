#include <stdio.h>
#include <string.h>

// Definici�n de la estructura domicilio utilizando typedef
typedef struct {
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;

// Definici�n de la estructura empleado que contiene un campo de tipo domicilio
struct empleado {
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion; // direccion es un campo de tipo estructura domicilio
};

// Prototipo de funci�n Lectura que lee los campos de un empleado
void Lectura(struct empleado *a) {
    printf("\nIngrese el nombre del empleado: ");
    gets(a->nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(a->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    fflush(stdin);
    printf("---Ingrese la direcci�n del empleado---");
    printf("\n\tCalle: ");
    gets(a->direccion.calle);
    printf("\tN�mero: ");
    scanf("%d", &a->direccion.numero);
    printf("\tC�digo Postal: ");
    scanf("%d", &a->direccion.cp);
    fflush(stdin);
    printf("\tLocalidad: ");
    gets(a->direccion.localidad);
}

// Funci�n principal main
void main(void) {
    // Declaraci�n e inicializaci�n de variables de tipo estructura empleado
    struct empleado e0 = {"Arturo", "Compras", 15500.75, {"San Jer�nimo", 120, 3490, "Toluca"}};
    struct empleado *e1, *e2, e3, e4;

    // Asignaci�n de memoria din�mica para e1 y lectura de datos
    e1 = new (struct empleado);
    printf("\nIngrese el nombre del empleado 1: ");
    scanf("%s", &(*e1).nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(e1->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e1->sueldo);
    printf("---Ingrese la direcci�n del empleado---");
    printf("\n\tCalle: ");
    fflush(stdin);
    gets(e1->direccion.calle);
    printf("\tN�mero: ");
    scanf("%d", &e1->direccion.numero);
    printf("\tC�digo Postal: ");
    scanf("%d", &e1->direccion.cp);
    printf("\tLocalidad: ");
    fflush(stdin);
    gets(e1->direccion.localidad);

    // Lectura de datos para e3 directamente en la funci�n main
    printf("\nIngrese el nombre del empleado 3: ");
    scanf("%s", &e3.nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(e3.departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e3.sueldo);
    printf("---Ingrese la direcci�n del empleado---");
    printf("\n\tCalle: ");
    fflush(stdin);
    gets(e3.direccion.calle);
    printf("\tN�mero: ");
    scanf("%d", &e3.direccion.numero);
    printf("\tC�digo Postal: ");
    scanf("%d", &e3.direccion.cp);
    printf("\tLocalidad: ");
    fflush(stdin);
    gets(e3.direccion.localidad);

    // Asignaci�n de memoria din�mica para e2 y e4, y llamada a la funci�n Lectura
    e2 = new (struct empleado);
    Lectura(e2);
    Lectura(&e4);

    // Impresi�n de los datos de los empleados
    printf("\nDatos del empleado 1\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s", e1->nombre, e1->departamento,
           e1->sueldo, e1->direccion.calle, e1->direccion.numero,
           e1->direccion.cp, e1->direccion.localidad);
    printf("\nDatos del empleado 4\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s", e4.nombre, e4.departamento,
           e4.sueldo, e4.direccion.calle, e4.direccion.numero,
           e4.direccion.cp, e4.direccion.localidad);
}
