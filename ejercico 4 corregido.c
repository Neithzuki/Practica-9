/*Cristian Ariel López Santiago
Ejercico 4
Corrección del ejercicio 4*/

#include <stdio.h>
int main ()
{
  int lista[10]; 
  int elemen = 0;

  do
    {
      printf("\nDa un número entre 1 y 10 para indicar la cantidad de elementos que tiene el arreglo\n");
      scanf("%i", &elemen);
    } 
    while (elemen < 1 || elemen > 10);
    
    for (int i= 0 ; i < elemen; i++)
      
      {
        
        printf("Dar un número entero para el elemento %i del arreglo ", i +1);
        scanf("%i",&lista[i]);
      }
    
    printf("Los valores de la lista son: ");

    for (int j = 0 ; j < elemen; j++)
      
    {
      printf("%i ", lista[j]);
    }
    printf("\n\n");
    return 0;
}
