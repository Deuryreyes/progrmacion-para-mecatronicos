#include <stdio.h>


int main(void)  // Declaraci�n de la funci�n principal.
{
    int MAT, CAR, SEM;  // Variables para la matr�cula, carrera y semestre
    float PRO;  // Variable del promedio

    printf("Ingrese matr�cula: ");  // pide al usuario ingresar la matr�cula
    scanf("%d", &MAT);  // almacena la matr�cula ingresada por el usuario

    printf("Ingrese carrera (1-Industrial 2-Telem�tica 3-Computaci�n 4-Mec�nica): ");  // pide la carrera.
    scanf("%d", &CAR);  // almacena la carrera ingresada por el usuario

    printf("Ingrese semestre: ");  // pide el semestre
    scanf("%d", &SEM);  // almacena el semestre ingresado por el usuario

    printf("Ingrese promedio: ");  // pide el promedio
    scanf("%f", &PRO);  // almacena el promedio ingresado por el usuario

    switch (CAR)  // Inicia una estructura de control switch para la carrera
    {
        case 1:  // Caso para la carrera Industrial.
            if (SEM > 6 && PRO > 8.5)  // Si el semestre es mayor a 6 y el promedio es mayor a 8.5
                printf("\n%d %d %.2f", MAT, CAR, PRO);  // Muestra la informaci�n del alumno
            break;  // Termina el caso

        case 2:  // Caso para la carrera Telem�tica.
            if (SEM >= 5 && PRO >= 9.0)  // Si el semestre es mayor o igual a 5 y el promedio es mayor o igual a 9.0
                printf("\n%d %d %.2f", MAT, CAR, PRO);  // Muestra la informaci�n del alumno
            break;  // Termina el caso

        case 3:  // Caso para la carrera Computaci�n.
            if (SEM >= 6 && PRO > 8.8)  // Si el semestre es mayor o igual a 6 y el promedio es mayor a 8.8
                printf("\n%d %d %.2f", MAT, CAR, PRO);  // Muestra la informaci�n del alumno
            break;  // Termina el caso.

        case 4:  // Caso para la carrera Mec�nica.
            if (SEM > 7 && PRO >= 9.0)  // Si el semestre es mayor a 7 y el promedio es mayor o igual a 9.0
                printf("\n%d %d %.2f", MAT, CAR, PRO);  // Muestra la informaci�n del alumno
            break;  // Termina el caso.

        default:  // Caso por defecto si la carrera no es v�lida
            printf("\nError en la carrera");  // Muestra un mensaje de error
            break;  // Termina el caso por defecto
    }

    return 0;  // Retorna 0 indicando que el programa termin� correctamente
}
