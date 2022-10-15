#include <stdio.h>
#include <stdbool.h>

/* Ex1 --> Escreva um programa em C++ que retorna o maior dentre três números: */

int max(int a, int b, int c)
{
  if (a > b && a > c)
  {
    return a;
  }
  if (b > a && b > c)
  {
    return b;
  }
  if (c > a && c > b)
  {
    return c;
  }
  return false;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex2 --> Escreva um programa em C++ que retorna o menor dentre três números: */
int min(int a, int b, int c)
{
  if (a < b && a < c)
  {
    return a;
  }
  if (b < a && b < c)
  {
    return b;
  }
  if (c < a && c < b)
  {
    return c;
  }
  return false;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex3 --> Escreva um programa em C++ que testa se um número é par: */

int par(int x)
{
  if (x % 2 == 0)
  {
    printf("\n2-a) O numero %d é par!\n", x);
  }
  else
  {
    printf("\n2-a) O numero %d não é par!\n", x);
  }
  return x;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex4 --> Escreva um programa em C++ que testa se o número x está dentro do intervalo [y z]*/

int dentroDoIntervalo(int x, int y, int z)
{
  if (x >= y && x <= z)
  {
    printf("\n2-b) O numero digitado está dentro do intervalo!\n");
  }
  else
  {
    printf("\n2-b) O numero digitado está fora do intervalo!\n");
  }
  return x;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex5 --> Escreva um programa em C++ que testa se o número x está fora do intervalo [y z]*/

int foraDoIntervalo(int x, int y, int z)
{
  if (x < y || x > z)
  {
    printf("\n2-c) O numero digitado está fora do intervalo!\n");
  }
  else
  {
    printf("\n2-c) O numero digitado está dentro do intervalo!\n");
  }
  return x;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex6 --> Escreva um programa em C++ que defina o predicado bissexto(ano) que testa se um ano é bissexto. Considere que bissexto é aquele ano que é divisível por 400 ou é divisível por 4 e, nesse caso, não é divisível por 100*/

int bissexto(int w)
{
  if (w % 4 == 0 && (w % 100 != 0 || w % 400 == 0))
  {
    printf("\n3) O ano %d é bissexto!\n", w);
  }
  else
  {
    printf("\n3) O ano %d não é bissexto!\n", w);
  }
  return w;
}
/*----------------------------------------------------------------------------------------------------------*/
int main()
{
  int a, b, c;
  printf("\nInforme três números para a, b, c:\n");

  scanf("%d%d%d", &a, &b, &c);

  printf("\n1-a) O maior dentre três números é: %d\n", max(a, b, c));
  printf("\n1-b) O menor dentre três números é: %d\n", min(a, b, c));

  int x, y, z;
  printf("\nInforme três números para x, y, z:\n");

  scanf("%d%d%d", &x, &y, &z);

  printf("\n2-a) Verifica se o número %d é par:\n", par(x));
  printf("\n2-b) Verifica se número %d está dentro do intervalo:\n", dentroDoIntervalo(x, y, z));
  printf("\n2-c) Verifica se número %d está fora do intervalo:\n", foraDoIntervalo(x, y, z));

  int w;
  printf("\nInforme um ano\n");

  scanf("%d", &w);
}