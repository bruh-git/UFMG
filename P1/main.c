#include <stdio.h>

/* Ex1 --> Escreva uma função “triangulo_area” que recebe dois parâmetros (height e base) e retorna a área do triângulo correspondente: */

float triangulo_area(float height, float base) {
    return ((height * base) / 2);
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex2 --> Escreva uma função “triangulo_truncado” que também leva os parâmetros (height e base) como entrada, e calcula a área de um triângulo sem a ponta. A ponta também é um triângulo, sendo que sua altura e sua base correspondem a 10% da altura e base, respectivamente, do triângulo maior. Use a função “triangulo_area” em sua solução: */

float triangulo_truncado(float height, float base) {
    float area = triangulo_area(height, base);
    float area_truncada = triangulo_area(height * 0.1, base * 0.1);
    return (area - area_truncada);
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex3 --> Implemente uma função recursiva que imprima o quadrado dos números entre a e b, que são informados como parâmetros da função: */

void quadrado(int a, int b) {
    if (a <= b) {
        printf("%d ", a * a);
        quadrado(a + 1, b);
    }
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex4 --> Desenvolva uma função recursiva que calcule o número de vezes em que um dígito d ocorre em número natural N.Exemplo: o dígito 5 ocorre 3 vezes em 165054135:*/

int ocorrencias(int N, int d) {
    if (N == 0) {
        return 0;
    } else {
        if (N % 10 == d) {
            return 1 + ocorrencias(N / 10, d);
        } else {
            return ocorrencias(N / 10, d);
        }
    }
}
/*----------------------------------------------------------------------------------------------------------*/
int main() {
  int a, b, c, N, d;
  float height, base;
  printf("\nInforme dois números para calcular a area do triangulo:\n");
  scanf("%f%f", &height, &base);
  printf("A area do triangulo é: %f\n", triangulo_area(height, base));

  printf("\nInforme dois números para calcular a area do triangulo truncado:\n");
  scanf("%f%f", &height, &base);
  printf("A area do triangulo é: %f\n", triangulo_truncado(height, base));

  printf("\nInforme dois números para calcular o quadrado:\n");
  scanf("%i%i", &a, &b);
  printf("O quadrado é:\n");
  quadrado(a, b);

  printf("\nInforme dois números para calcular o número de vezes em que um dígito d ocorre em número natural N :\n");
  scanf("%d%d", &N, &d);
  printf("A area do triangulo é: %f\n", ocorrencias(N, d));
}