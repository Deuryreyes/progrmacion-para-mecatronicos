
#include <stdio.h>

int main(void)  // main es el punto de entrada de este programa y int me devolvera un valor entero //
{
    float PRO; // es el cuerpo de la funcin principal y alamacena el promedio //
    printf("Ingrese el promedio del alumno: "); // muestra el mensaje al usuario //
    scanf("%f", &PRO); // es lee el valor y lo almacena en pro //

    if (PRO >= 6)  // evalua la condicion si es verdadera //
    {
        printf("\nAprobado\n"); // si es verdadera se ejecutara el print y le diera que esta aprobado //
    }
    return 0; // este devuelve  indicando que el programa cerro correctamente //
}