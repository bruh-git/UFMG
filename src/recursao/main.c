#include <stdio.h>

/* Ex1 --> Escreva um programa em C++ que retorna fat(n): o valor do fatorial de n: */

int fat(int n) {
  if (n == 0) {
    return (1);
  } else {
    printf("%d\n", n);
    return (n * fat(n - 1));
  }
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex2 --> Escreva um programa em C++ que retorna mdc(a,b): o máximo divisor comum entre a e b: */

int mdc(int a, int b) {
  if (a % b == 0) {
    return b;
  } else {
    return mdc(b, (a % b));
  }
};
/*----------------------------------------------------------------------------------------------------------*/
/* Ex3 --> Escreva um programa em C++ que retorna mdc3(a,b,c): o máximo divisor comum entre a, b e c: */

int mdc3(int a, int b) {
  if (a % b == 0) {
    return b;
  } else {
    return mdc(b, (a % b));
  }
};
/*----------------------------------------------------------------------------------------------------------*/
/* Ex4 --> Escreva um programa em C++ que retorna fib(n): o n-ésimo termo da série de Fibonacci: */

int fib(int n) {
  if (n == 1) {
    return 1;
  }
  if (n == 0) {
    return 0;
  } else {
    printf("%d\n", n);
    return fib(n - 1) + fib(n - 2);
  }
};
/*----------------------------------------------------------------------------------------------------------*/
/* Ex5 --> Escreva um programa em C++ que retorna primo(x): predicado que testa se um número x é primo: */

int primo(int x, int n) {
  if (n == 1) {
    return 1;
  }
  if (x % n == 0) {
    return 0;
  } else {
    return (primo(x, n - 1));
  }
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex6 --> Escreva um programa em C++ que retorna decrescente(x): procedimento que escreve uma seqüência de inteiros menores que x e maiores que 0: */

int decrescente(int x) {
  if (x == -1) {
    return 0;
  } else {
    printf("%d ", x);
    return decrescente(x - 1);
  }
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex7 --> Escreva um programa em C++ que retorna res(a,b): o resto da divisão entre a e b: */

int res(int a, int b) {
  if (a % b == 0) {
    return (a % b);
  } else {
    return 0;
  }
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex8 --> Escreva um programa em C++ que retorna form(n): o valor do somatório de i*i, com i variando de 1 até n: */

int form(int n) {
  if (n == 0) {
    return 0;
  } else {
    printf("%d\n", n);
    return (n + form(n - 1));
  }
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex9 --> Escreva um programa em C++ que retorna mmc(a, b): o menor múltiplo comum de a e b: */

int mmc(int a, int b) {
  if (a % b == 0) {
    return b;
  } else {
    return ((a * b) / (mdc(a, b)));
  }
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex10 --> Escreva um programa em C++ que retorna div(a, b): o resultado da divisão inteira de a por b: */

int div(int a, int b) {
  return (a / b); 
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex11 --> Escreva um programa em C++ que retorna sqrt(n): a raiz quadrada de n (com precisão de 0.001): */

float raiz(float r, float chute) {
  if (chute * chute >= r - 0.001 && chute * chute <= r + 0.001) {
    return (chute);
  }
  if (chute * chute > r) {
    return (raiz(r, chute * 0.5));
  }
  if (chute * chute < r) {
    return (raiz(r, chute * 1.5));
  } else {
    return 0;
  }
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex12 --> Escreva um programa em C++ que retorna dig(n): a soma dos dígitos de um inteiro positivo n. A soma dos dígitos de 132, por exemplo, é 6: */

int dig(int n) {
  if (n == 0) {
    return 0;
  } else {
    return ((n % 10) + dig(n / 10));
  }
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex13 --> Escreva um programa em C++ que retorna exp(k, n): k elevado a n: */

int expo(int k, int n) {
  // todo n elevado a 0 é 1
  if (n == 0) {
    return 1;
  } else {
    return (k * expo(k, n - 1));
  }
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex14 --> Escreva um programa em C++ que retorna crescente(x): escreve em ordem crescente, todos os inteiros maiores que 0 e menores ou iguais a x: */

int crescente(int x, int n) {
  printf("%d\n", n);
  if (x > n) {
    return crescente(x, n + 1);
  } else {
    return 0;
  }
}
/*----------------------------------------------------------------------------------------------------------*/
int main() {
  int n, x, k, a, b, c, y;
  float r;
  printf("\nInforme um número para calcular seu fatorial:\n");
  scanf("%d", &n);
  printf("o fatorial de %d é: %d\n", n, fat(n));

  printf("\nInforme dois números para calcular o MDC:\n");
  scanf("%d%d", &a, &b);
  printf("O MDC entre %d e %d é: %d\n", a, b, mdc(a, b));

  printf("\nInforme três números para calcular o MDC:\n");
  scanf("%d%d%d", &a, &b, &c);
  printf("O MDC entre %d, %d e %d é: %d\n", a, b, c, mdc(c, mdc(a, b)));

  printf("\nInforme um número para calcular a sequência fibonacci:\n");
  scanf("%d", &n);
  printf("a sequência fibonacci de %d, é: %d\n", n, fib(n));

  printf("\nInforme um número para saber se é primo:\n");
  scanf("%d", &n);
  printf("%d é primo? %d\n", n, primo(n, n - 1));

  printf("\nInforme um número para a sequência decrescente:\n");
  scanf("%d", &x);
  printf("a sequência decrescente de %d, é: %d\n", x, decrescente(x));

  printf("\nInforme dois números para calcular o resto da divisão:\n");
  scanf("%d%d", &a, &b);
  printf("O resto da divisão de %d e %d é: %d\n", a, b, res(a, b));

  printf("\nInforme um número para calcular seu somatório:\n");
  scanf("%d", &n);
  printf("O somatório de 1 até %d é: %d\n", n, form(n));

  printf("\nInforme dois números para calcular o MMC:\n");
  scanf("%d%d", &a, &b);
  printf("O MMC entre %d e %d é: %d\n", a, b, mmc(a, b));

  printf("\nInforme dois números para calcular a divisão entre eles:\n");
  scanf("%d%d", &a, &b);
  printf("A divisão de %d e %d é: %d\n", a, b, div(a, b));

  printf("\nInforme um número para calcular a raiz:\n");
  scanf("%f", &r);
  printf("a raiz de %.3f é: %.3f\n", r, raiz(r, 2));

  printf("\nInforme um número para calcular a soma entre os dígitos:\n");
  scanf("%d", &n);
  printf("retorna a soma dos dígitos %d: %d\n", n, dig(n));

  printf("\nInforme dois números para calcular a potência:\n");
  scanf("%d%d", &k, &n);
  printf("O resultado de %d elevado a %d: %d\n", k, n, expo(k, n));

  printf("\nInforme um número para a sequência crescente:\n");
}