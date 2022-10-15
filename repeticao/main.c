#include <stdio.h>

/* Ex1 --> Escreva um programa em C++ que retorna fat(n): o valor do fatorial de n: */

int fat(int n) {
  int fator = 1;
  for (int i = 1; i <= n; i++) {
    printf("%d\n", i);
    fator = fator * i;
  }
  return fator;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex2 --> Escreva um programa em C++ que retorna mdc(a,b): o máximo divisor comum entre a e b: */

int mdc(int a, int b) {
  // se a divisão de a e b o resto for 0, então são divisores
  int m = 1;
  int i = 1;
  do {
    if ((a % i == 0) && (b % i == 0)) {
      m = i;
    }
    i = i + 1;
  } while ((i <= a) && (i <= b));
  return m;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex3 --> Escreva um programa em C++ que retorna mdc3(a,b,c): o máximo divisor comum entre a, b e c: */

int mdc3(int a, int b, int c) {
  int m = 1;
  int i = 1;
  do {
    if ((a % i == 0) && (b % i == 0) && (c % i == 0)) {
      m = i;
    }
    i = i + 1;
  } while ((i <= a) && (i <= b) && (i <= c));
  return m;
};
/*----------------------------------------------------------------------------------------------------------*/
/* Ex4 --> Escreva um programa em C++ que retorna fib(n): o n-ésimo termo da série de Fibonacci: */

int fib(int n) {
  int i = 0;
  int j = 1;
  int k;

  for (k = 1; k < n; k++) {
    int t = i + j;
    i = j;
    j = t;
  }
  return j;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex5 --> Escreva um programa em C++ que retorna primo(x): predicado que testa se um número x é primo: */

int primo(int n) {
  int i = 2;
  if (n <= 1)
    return 0;
  while (i < n) {
    if (n % i == 0) {
      return 0;
    }
    i++;
  }
  return 1;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex6 --> Escreva um programa em C++ que retorna decrescente(x): procedimento que escreve uma seqüência de inteiros menores que x e maiores que 0: */

int decrescente(int n) {
  for (int i = n; i > 0; i--) {
    printf("%d\n", i);
  }
  return n;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex7 --> Escreva um programa em C++ que retorna res(a,b): o resto da divisão entre a e b: */

int res(int a, int b) {
  while (a % b == 0) {
    return (a % b);
  }
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex8 --> Escreva um programa em C++ que retorna form(n): o valor do somatório de i*i, com i variando de 1 até n: */

int form(int n) {
  int s = 0;
  int i = 0;
  while (i < n) {
    i = i + 1;
    s = s + i;
  }
  printf("O somatório de 1 até n é: %d\n", s);
  return 0;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex9 --> Escreva um programa em C++ que retorna mmc(a, b): o menor múltiplo comum de a e b: */

int mmc(int a, int b) {
  int mmc, aux, i;

  for (i = 2; i <= b; i++) {
    aux = a * i;
    if ((aux % b) == 0) {
      mmc = aux;
      i = b + 1;
    }
  }
  return mmc;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex10 --> Escreva um programa em C++ que retorna div(a, b): o resultado da divisão inteira de a por b: */

int div(int a, int b) {
  while ((a != 0) && (b != 0)) {
    return (a / b);
  }
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex11 --> Escreva um programa em C++ que retorna sqrt(n): a raiz quadrada de n (com precisão de 0.001): */

float raiz(float numero) {
  // Método de Newton
  float precisao = 0.001;
  float b = numero, a = 1;

  while ((b - a) >= precisao) {
    b = (a + b) / 2;
    a = numero / b;
  }
  return b;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex12 --> Escreva um programa em C++ que retorna dig(n): a soma dos dígitos de um inteiro positivo n. A soma dos dígitos de 132, por exemplo, é 6: */

int dig(int n) {
  int soma = 0, digito;

  while (n > 0) {
    digito = n % 10;
    soma = soma + digito;
    n = n / 10;
  }

  printf("\nSoma dos digitos do numero dado = %d\n", soma);
  return 0;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex13 --> Escreva um programa em C++ que retorna exp(k, n): k elevado a n: */

int expo(int k, int n) {
  int potencia = 1, contador = 0;

  while (contador != n) {
    potencia = potencia * k;
    contador = contador + 1;
  }

  printf("\nO valor de %d elevado a %d: %d\n", k, n, potencia);
  return 0;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex14 --> Escreva um programa em C++ que retorna crescente(x): escreve em ordem crescente, todos os inteiros maiores que 0 e menores ou iguais a x: */

int crescente(int n, int x) {
  printf("a serie crescente de %d é:\n", n);

  while (n >= x) {
    printf("%d\n", x);
    x = x + 1;
  }
  return 0;
}
/*----------------------------------------------------------------------------------------------------------*/
int main() {
  int n, x, k, a, b, c, y;
  float numero;
  printf("\nInforme um número para calcular seu fatorial:\n");
  scanf("%d", &n);
  printf("o fatorial de %d é: %d\n", n, fat(n));

  printf("\nInforme dois números para calcular o MDC:\n");
  scanf("%d%d", &a, &b);
  printf("O MDC entre %d e %d é: %d\n", a, b, mdc(a, b));

  printf("\nInforme três números para calcular o MDC:\n");
  scanf("%d%d%d", &a, &b, &c);
  printf("O MDC entre %d, %d e %d é: %d\n", a, b, c, mdc3(a, b, c));

  printf("\nInforme um número para calcular a sequência fibonacci:\n");
  scanf("%d", &n);
  printf("a sequência fibonacci de %d, é: %d\n", n, fib(n));

  printf("\nInforme um número para saber se é primo:\n");
  scanf("%d", &n);
  printf("%d é primo? %d\n", n, primo(n));

  printf("\nInforme um número para a sequência decrescente:\n");
  scanf("%d", &n);
  decrescente(n);

  printf("\nInforme dois números para calcular o resto da divisão:\n");
  scanf("%d%d", &a, &b);
  printf("O resto da divisão de %d e %d é: %d\n", a, b, res(a, b));

  printf("\nInforme um número para calcular seu somatório:\n");
  scanf("%d", &n);
  form(n);

  printf("\nInforme dois números para calcular o MMC:\n");
  scanf("%d%d", &a, &b);
  printf("O MMC entre %d e %d é: %d\n", a, b, mmc(a, b));

  printf("\nInforme dois números para calcular a divisão entre eles:\n");
  scanf("%d%d", &a, &b);
  printf("A divisão de %d e %d é: %d\n", a, b, div(a, b));

  printf("\nInforme um número para calcular a raiz:\n");
  scanf("%f", &numero);
  printf("a raiz de %.3f é: %.3f\n", numero, raiz(numero));

  printf("\nInforme um número para calcular a soma entre os dígitos:\n");
  scanf("%d", &n);
  dig(n);

  printf("\nInforme dois números para calcular a potência:\n");
  scanf("%d%d", &k, &n);
  expo(k, n);

  printf("\nInforme um número para a sequência crescente:\n");
  scanf("%d", &n);
  crescente(n, 0);
}