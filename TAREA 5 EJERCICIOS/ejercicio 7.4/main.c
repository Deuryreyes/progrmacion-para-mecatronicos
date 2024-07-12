#include <stdio.h>

int main(void) { // Definir la funci�n principal, que es el punto de entrada del programa.
  // Declarar e inicializar un puntero a una cadena de caracteres llamada 'cad0' y asignarle la cadena "Argentina".
  char *cad0 = "Argentina";
  // Imprimir la cadena apuntada por 'cad0' en la consola usando la funci�n 'puts()'.
  puts(cad0);

  // Reasignar el puntero 'cad0' para que apunte a la cadena "Brasil".
  cad0 = "Brasil";
  // Imprimir la cadena apuntada por 'cad0' en la consola usando la funci�n 'puts()'.
  puts(cad0);

  // Declarar otro puntero a una cadena de caracteres llamado 'cad1' e inicializarlo a una cadena vac�a.
  char *cad1 = "";
  // Leer una l�nea de entrada de la entrada est�ndar y almacenarla en la ubicaci�n de memoria apuntada por 'cad1' usando la funci�n 'gets()'.

  gets(cad1);

  // Declarar otro puntero a una cadena de caracteres llamado 'cad2' e inicializarlo a una cadena vac�a.
  char *cad2 = "";
  // Leer una l�nea de entrada de la entrada est�ndar y almacenarla en la ubicaci�n de memoria apuntada por 'cad2' usando la funci�n 'gets()'.


  // Declarar una matriz de caracteres llamada 'cad3' con un tama�o de 20 elementos.
  char cad3[20];

  // Declarar una matriz de caracteres llamada 'cad4' con un tama�o de 20 elementos e inicializarla con la cadena "M�xico".
  char cad4[20] = "M�xico";
  // Imprimir la cadena almacenada en la matriz 'cad4' en la consola usando la funci�n 'puts()'.
  puts(cad4);

  // Leer una l�nea de entrada de hasta un m�ximo de 19 caracteres (incluido el terminador nulo) de la entrada est�ndar en la matriz 'cad4' usando la funci�n 'fgets()'.
  // La funci�n 'fgets()' se considera m�s segura que 'gets()' ya que verifica los desbordamientos de b�fer.
  fgets(cad4, sizeof(cad4), stdin);

  // Reemplazar el d�cimo car�cter (�ndice 9) en la matriz 'cad4' con el car�cter 'G'.
  cad4[9] = 'G';
  // Imprimir la cadena modificada almacenada en la matriz 'cad4' en la consola usando la funci�n 'puts()'.
  puts(cad4);

  // Devolver 0 para indicar una ejecuci�n exitosa del programa.
  return 0;
}
