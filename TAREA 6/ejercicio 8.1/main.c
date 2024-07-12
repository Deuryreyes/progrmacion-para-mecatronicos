#include <stdio.h>
#include <string.h>

// Declaraci�n de la estructura alumno
struct alumno {
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
};

// Funci�n principal
void main(void) {
    // Declaraci�n e inicializaci�n de variables de tipo estructura alumno
    struct alumno a1 = {120, "Mar�a", "Contabilidad", 8.9, "Quer�taro"}, a2, a3;
    char nom[20], car[20], dir[20]; // Variables temporales para entrada de datos
    int mat; // Variable temporal para matr�cula
    float pro; // Variable temporal para promedio

    // Entrada de datos para el alumno 2
    printf("\nIngrese la matr�cula del alumno 2: ");
    scanf("%d", &a2.matricula); // Se lee la matr�cula
    fflush(stdin); // Se limpia el buffer de entrada
    printf("Ingrese el nombre del alumno 2: ");
    gets(a2.nombre); // Se lee el nombre
    printf("Ingrese la carrera del alumno 2: ");
    gets(a2.carrera); // Se lee la carrera
    printf("Ingrese el promedio del alumno 2: ");
    scanf("%f", &a2.promedio); // Se lee el promedio
    fflush(stdin); // Se limpia el buffer de entrada
    printf("Ingrese la direcci�n del alumno 2: ");
    gets(a2.direccion); // Se lee la direcci�n

    // Entrada de datos para el alumno 3
    printf("\nIngrese la matr�cula del alumno 3: ");
    scanf("%d", &mat); // Se lee la matr�cula en una variable temporal
    a3.matricula = mat; // Se asigna a la estructura del alumno 3
    fflush(stdin); // Se limpia el buffer de entrada
    printf("Ingrese el nombre del alumno 3: ");
    gets(nom); // Se lee el nombre en una variable temporal
    strcpy(a3.nombre, nom); // Se copia a la estructura del alumno 3
    printf("Ingrese la carrera del alumno 3: ");
    gets(car); // Se lee la carrera en una variable temporal
    strcpy(a3.carrera, car); // Se copia a la estructura del alumno 3
    printf("Ingrese el promedio del alumno 3: ");
    scanf("%f", &pro); // Se lee el promedio en una variable temporal
    a3.promedio = pro; // Se asigna a la estructura del alumno 3
    fflush(stdin); // Se limpia el buffer de entrada
    printf("Ingrese la direcci�n del alumno 3: ");
    gets(dir); // Se lee la direcci�n en una variable temporal
    strcpy(a3.direccion, dir); // Se copia a la estructura del alumno 3

    // Impresi�n de los datos del alumno 1
    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula); // Se imprime la matr�cula
    puts(a1.nombre); // Se imprime el nombre
    puts(a1.carrera); // Se imprime la carrera
    printf("%.2f\n", a1.promedio); // Se imprime el promedio
    puts(a1.direccion); // Se imprime la direcci�n

    // Impresi�n de los datos del alumno 2
    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula); // Se imprime la matr�cula
    puts(a2.nombre); // Se imprime el nombre
    puts(a2.carrera); // Se imprime la carrera
    printf("%.2f\n", a2.promedio); // Se imprime el promedio
    puts(a2.direccion); // Se imprime la direcci�n

    // Impresi�n de los datos del alumno 3
    printf("\nDatos del alumno 3\n");
    printf("%d \t %s \t %s \t %.2f \t %s\n", a3.matricula, a3.nombre, a3.carrera,
           a3.promedio, a3.direccion); // Se imprime la matr�cula, nombre, carrera, promedio y direcci�n
}
