#include <stdio.h>
#include <string.h>

// Declaración de la unión datos
union datos {
    char celular[15];
    char correo[20];
};

// Declaración de la estructura alumno utilizando typedef
typedef struct {
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    union datos personales; // Uno de los campos es una unión
} alumno;

// Prototipo de función para lectura de alumno por referencia
void Lectura(alumno *a);

void main(void)
{
    alumno a1 = {120, "María", "Contabilidad", 8.9, {"5-158-40-50"}}, a2, a3; // Inicialización de a1

    // Lectura de datos para el alumno a2 desde el usuario
    printf("Alumno 2\n");
    printf("Ingrese la matrícula: ");
    scanf("%d", &a2.matricula);
    fflush(stdin); // Limpia el buffer de entrada
    printf("Ingrese el nombre: ");
    gets(a2.nombre);
    fflush(stdin);
    printf("Ingrese la carrera: ");
    gets(a2.carrera);
    printf("Ingrese el promedio: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);
    printf("Ingrese el correo electrónico: ");
    gets(a2.personales.correo); // Asignación de valor al campo correo de la unión

    // Llamada a función para leer datos del alumno a3
    printf("Alumno 3\n");
    Lectura(&a3);

    // Impresión de resultados
    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.personales.celular); // Acceso al campo celular de la unión
    // Intento de acceso al campo correo de la unión, que contiene basura
    puts(a1.personales.correo);

    // Ejemplo de asignación directa al campo correo de la unión en a1
    strcpy(a1.personales.correo, "hgimenez@hotmail.com");

    // Impresión de datos actualizados de a1
    puts(a1.personales.celular); // Acceso al campo celular de la unión
    puts(a1.personales.correo);  // Impresión del correo asignado

    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.personales.celular); // Acceso al campo celular de la unión
    puts(a2.personales.correo);  // Acceso al campo correo de la unión

    // Lectura del teléfono celular del alumno a2
    printf("Ingrese el teléfono celular del alumno 2: ");
    fflush(stdin);
    gets(a2.personales.celular); // Asignación de valor al campo celular de la unión
    puts(a2.personales.celular); // Impresión del teléfono celular ingresado
    // Intento de acceso al campo correo de la unión, que contiene basura
    puts(a2.personales.correo);

    printf("\nDatos del alumno 3\n");
    printf("%d\n", a3.matricula);
    puts(a3.nombre);
    puts(a3.carrera);
    printf("%.2f\n", a3.promedio);
    puts(a3.personales.celular); // Acceso al campo celular de la unión
    // Intento de acceso al campo correo de la unión, que contiene basura
    puts(a3.personales.correo);
}

// Definición de la función Lectura para leer datos del alumno por referencia
void Lectura(alumno *a)
{
    printf("\nIngrese la matrícula: ");
    scanf("%d", &a->matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    gets(a->nombre);
    fflush(stdin);
    printf("Ingrese la carrera: ");
    gets(a->carrera);
    printf("Ingrese el promedio: ");
    scanf("%f", &a->promedio);
    fflush(stdin);
    printf("Ingrese el teléfono celular: ");
    gets(a->personales.celular); // Asignación de valor al campo celular de la unión
}
