/*Cristian Ariel López Santiago
ejercicio 5 
Calculadora*/

#include <stdio.h>

float suma(float num1, float num2);
float resta(float num1, float num2);
float mult(float num1, float num2);
float div(float num12, float num2);

int main()
{
    int elec = 0;
    float n1,n2; res;

    do
    {
      printf("Elije una operación: \n");
      printf("1  - Suma\n");
      printf("2  - Resta\n");
      printf("3  - Multiplicación\n");
      printf("4  - División\n");
      printf("Elije:  ");
      sanf("%f" , &elec);
    } while (elec < 1|| elec>4);
      printf("Dame la primera cifra: ")
        scanf("%f" , &n2);

    switch (elec)
        {
          case 1: 
              res = suma(n1, n2);
          break;
          case 2 :
              res= resta(n1, n2);
          case 3 :
              res = mult(n1, n2);
          case 4: 
              res = div(n1, n2);
          default:
              break;
        }
      printf("El resultado es:  %f", res);
}
float suma(float num1, float num2);
{
    float res;
    res = num1 + num2;
    return res;
}
float resta(float num1, float num2);
{
    float res;
    res = num1 - num2;
    return res;
}
 float mult(float num1, float num2);
{
    float res;
    res = num1 * num2;
    return res;
} 
float div(float num1, float num2);
{
    float res;
    res = num1 / num2;
    return res;
}
 
