#include <stdio.h>  // Se incluye la biblioteca estándar de entrada y salida



int main(void) {  // Función principal del programa con retorno int
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO;  // Declaración e inicialización de variables
    float PO1, PO2, PO3, PO4, PO5, PON;  // Declaración de variables para los porcentajes

    printf("Ingrese el primer voto: ");  // pide el primer voto
    scanf("%d", &VOT);  // Lee el voto ingresado

    while (VOT) {  // Bucle que continúa hasta que se ingrese 0
        switch(VOT) {  // Evalúa el voto ingresado
            case 1: C1++; break;  // Incrementa el contador del candidato 1
            case 2: C2++; break;  // Incrementa el contador del candidato 2
            case 3: C3++; break;  // Incrementa el contador del candidato 3
            case 4: C4++; break;  // Incrementa el contador del candidato 4
            case 5: C5++; break;  // Incrementa el contador del candidato 5
            default: NU++; break;  // Incrementa el contador de votos nulos para cualquier otro valor
        }
        printf("Ingrese el siguiente voto –0 para terminar–: ");  // pide el siguiente voto
        scanf("%d", &VOT);  // Lee el voto ingresado
    }

    SVO = C1 + C2 + C3 + C4 + C5 + NU;  // Calcula el total de votos
    PO1 = ((float) C1 / SVO) * 100;  // Calcula el porcentaje de votos del candidato 1
    PO2 = ((float) C2 / SVO) * 100;  // Calcula el porcentaje de votos del candidato 2
    PO3 = ((float) C3 / SVO) * 100;  // Calcula el porcentaje de votos del candidato 3
    PO4 = ((float) C4 / SVO) * 100;  // Calcula el porcentaje de votos del candidato 4
    PO5 = ((float) C5 / SVO) * 100;  // Calcula el porcentaje de votos del candidato 5
    PON = ((float) NU / SVO) * 100;  // Calcula el porcentaje de votos nulos

    // dice los resultados
    printf("\nTotal de votos: %d", SVO);
    printf("\n\nCandidato 1: %d votos -- Porcentaje: %5.2f", C1, PO1);
    printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f", C2, PO2);
    printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f", C3, PO3);
    printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f", C4, PO4);
    printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f", C5, PO5);
    printf("\nNulos: %d votos -- Porcentaje: %5.2f\n", NU, PON);

    return 0;  // Retorna 0 indicando que el programa finalizó correctamente
}
