#include <stdio.h>

int main(void) { // Definir la función principal, que es el punto de entrada del programa.
  // Declarar e inicializar un puntero a una cadena de caracteres llamada 'cad0' y asignarle la cadena "Argentina".
  char *cad0 = "Argentina";
  // Imprimir la cadena apuntada por 'cad0' en la consola usando la función 'puts()'.
  puts(cad0);

  // Reasignar el puntero 'cad0' para que apunte a la cadena "Brasil".
  cad0 = "Brasil";
  // Imprimir la cadena apuntada por 'cad0' en la consola usando la función 'puts()'.
  puts(cad0);

  // Declarar otro puntero a una cadena de caracteres llamado 'cad1' e inicializarlo a una cadena vacía.
  char *cad1 = "";
  // Leer una línea de entrada de la entrada estándar y almacenarla en la ubicación de memoria apuntada por 'cad1' usando la función 'gets()'.

  gets(cad1);

  // Declarar otro puntero a una cadena de caracteres llamado 'cad2' e inicializarlo a una cadena vacía.
  char *cad2 = "";
  // Leer una línea de entrada de la entrada estándar y almacenarla en la ubicación de memoria apuntada por 'cad2' usando la función 'gets()'.


  // Declarar una matriz de caracteres llamada 'cad3' con un tamaño de 20 elementos.
  char cad3[20];

  // Declarar una matriz de caracteres llamada 'cad4' con un tamaño de 20 elementos e inicializarla con la cadena "México".
  char cad4[20] = "México";
  // Imprimir la cadena almacenada en la matriz 'cad4' en la consola usando la función 'puts()'.
  puts(cad4);

  // Leer una línea de entrada de hasta un máximo de 19 caracteres (incluido el terminador nulo) de la entrada estándar en la matriz 'cad4' usando la función 'fgets()'.
  // La función 'fgets()' se considera más segura que 'gets()' ya que verifica los desbordamientos de búfer.
  fgets(cad4, sizeof(cad4), stdin);

  // Reemplazar el décimo carácter (índice 9) en la matriz 'cad4' con el carácter 'G'.
  cad4[9] = 'G';
  // Imprimir la cadena modificada almacenada en la matriz 'cad4' en la consola usando la función 'puts()'.
  puts(cad4);

  // Devolver 0 para indicar una ejecución exitosa del programa.
  return 0;
}
