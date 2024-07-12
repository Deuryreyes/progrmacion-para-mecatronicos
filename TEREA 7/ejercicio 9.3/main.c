#include <stdio.h>

void main(void)
{
    char cad[50]; // Declara un arreglo de caracteres para almacenar la cadena
    int res; // Declara una variable entera para almacenar la respuesta del usuario
    FILE *ar; // Declara un puntero de tipo FILE para manejar el archivo

    if ((ar = fopen("arc.txt", "w")) != NULL) // Abre el archivo para escritura y verifica si se pudo abrir
    {
        // Se abre el archivo para escritura. En la misma instrucción se verifica si se pudo abrir.
        printf("\n¿Desea ingresar una cadena de caracteres? Sí-1 No-0:"); // Pregunta al usuario si desea ingresar una cadena
        scanf("%d", &res); // Lee la respuesta del usuario

        while (res) // Mientras la respuesta sea positiva (1), se repite el ciclo
        {
            fflush(stdin); // Limpia el búfer de entrada
            printf("Ingrese la cadena: "); // Pide al usuario que ingrese una cadena
            gets(cad); // Lee la cadena ingresada por el usuario
            fputs(cad, ar); // Escribe la cadena en el archivo
            // Observa la forma como se escribe la cadena en el archivo.

            printf("\n¿Desea ingresar otra cadena de caracteres? Sí-1 No-0:"); // Pregunta si desea ingresar otra cadena
            scanf("%d", &res); // Lee la nueva respuesta del usuario

            if (res) // Si la respuesta es positiva (1)
                fputs("\n", ar); // Se indica un salto de línea, excepto en la última cadena.
            // Se indica un salto de línea, excepto en la última cadena. Si no se hiciera esta indicación, la función fputs pegaría las cadenas y luego tendríamos dificultades en el momento de leerlas. Por otra parte, si realizáramos este salto de línea al final de la última cadena, en la escritura se repetiría la última cadena.
        }

        fclose(ar); // Cierra el archivo
    }
    else
        printf("No se puede abrir el archivo"); // Muestra un mensaje de error si el archivo no se pudo abrir
}
