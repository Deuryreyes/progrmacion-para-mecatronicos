#include <stdio.h>

void main(void)
{
    char *cad0 = "Buenos días"; // Cadena literal de caracteres
    char cad1[20] = "Hola"; // Array de caracteres con espacio para 20 caracteres
    char cad2[] = "México"; // Array de caracteres con tamaño automático
    char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'}; // Inicialización explícita con terminador nulo
    char cad4[20], cad5[20], cad6[20]; // Arrays de caracteres con espacio reservado

    printf("\nLa cadena cad0 es: ");
    puts(cad0); // Utiliza puts para imprimir cadenas de caracteres

    printf("\nLa cadena cad1 es: ");
    printf("%s", cad1); // También se puede usar printf con %s para imprimir cadenas
5
    printf("\nLa cadena cad2 es: ");
    puts(cad2);

    printf("\nLa cadena cad3 es: ");
    puts(cad3);

    printf("\nIngrese una línea de texto —se lee con gets—: \n");
    gets(cad4); // Obsoleto y potencialmente peligroso debido a vulnerabilidades de seguridad
    puts(cad4);

    fflush(stdin); // No es seguro ni estándar usarlo para limpiar buffers de entrada

    printf("\nIngrese una línea de texto —se lee con scanf—: \n");
    scanf("%19s", cad5); // Usa %19s para limitar la entrada a 19 caracteres + el terminador nulo
    printf("\nLa cadena cad5 es: ");
    printf("%s", cad5);

    char p;
    int i = 0;
    printf("\nIngrese una línea de texto —se lee cada caracter con getchar—: \n");

    while ((p = getchar()) != '\n') {
        cad6[i++] = p;
    }
    cad6[i] = '\0'; // Asegura el terminador nulo al final de la cadena

    printf("\nLa cadena cad6 es: ");
    puts(cad6);
}
