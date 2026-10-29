/*Cristian Ariel López Santiago
A continuación, se muestra el código de un programa que genera un arreglo
unidimensional de 5 elementos y que para poder acceder, recorrer y mostrar cada
elemento del arreglo se usa la variable indice desde 0 hasta 4 haciendo uso de un ciclo
while. */

#include <stdio.h>
int main ()
{
  int lista[5] = {10, 8, 5, 8, 7}; // Se declara e inicializa el arreglo unidimensional
  int indice = 0;
  printf("\tLista\n");
  while (indice < 5 ) // Acceso a cada elemento del arreglo unidimensional usando while
    {
      printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
      indice += 1; // Sentencia análoga a indice = indice + 1;
    }
  printf("\n");
  return 0;
}
