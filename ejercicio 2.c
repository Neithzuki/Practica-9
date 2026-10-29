/*Cristian ariel López Santiago 
ejercicio 2
  En el siguiente código se genera un arreglo unidimensional de 5 elementos y que para
poder acceder, recorrer y mostrar cada elemento del arreglo se usa la variable indice
desde 0 hasta 4 haciendo uso de un ciclo do-while*/

  #include <stdio.h>
int main ()
{
  int lista[5] = {10, 8, 5, 8, 7}; // Se declara e inicializa el arreglo unidimensional
  int indice = 0;
  printf("\tLista\n");
  do // Acceso a cada elemento del arreglo unidimensional usando do-while
  {
      printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
      indice += 1; // Sentencia análoga a indice = indice + 1;
  }
  while (indice < 5 );
  printf("\n");
  return 0;
}
