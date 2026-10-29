/*Crisian ariel López Santiago
Ejercicio 3
A continuación, se muestra el código que genera un arreglo unidimensional de 5
elementos y que para poder acceder, recorrer y mostrar cada elemento del arreglo se usa
la variable indice desde 0 hasta 4 haciendo uso de un ciclo for.*/

#include <stdio.h>
int main ()
{
  
    int lista[5] = {10, 8, 5, 8, 7}; // Se declara e inicializa el arreglo unidimensional
    int indice=0;
    printf("\tLista\n");
  
    // Acceso a cada elemento del arreglo unidimensional usando for
    for (indice = 0 ; indice < 5 ; indice++)
      
      {
        printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
      }
    printf("\n");
    return 0;
}
