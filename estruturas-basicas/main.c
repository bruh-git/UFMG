#include <stdio.h>
#include <math.h>

int main() {
  /* Ex1 --> Escreva um programa em C++ que resolva as seguintes expressões: */
	printf("1-a)%d\n", 3+4);
	printf("1-b)%d\n", 7%4);
	printf("1-c)%f\n", pow(3,2));
	printf("1-d)%f\n", 5.3 * 2.1);
	printf("1-e)%d\n", (2*5)-2);
	printf("1-f)%d\n", 2+(2*5));
	printf("1-g)%d\n", (2+5)*3);
	printf("1-h)%f\n", sin(3.141502));
	printf("1-i)%f\n", sqrt(5));
	printf("1-j)%d\n", 1+2+3);
	printf("1-k)%d\n", 1*2*3);
	printf("1-l)%f\n", (1+2+3)/3.0);
	printf("1-m)%d\n", (2+4)*(3-1));
	printf("1-n)%d\n", (9/3)+(3*2));
	printf("1-0)%f\n", sin(4.5)+cos(3.7));
	printf("1-p)%f\n", log(2.3)-log(3.1));
  printf("1-q)%f\n", log(7)+(log(7)*log(7)-cos(log(7))));
  printf("1-r)%f\n", (10.3 + 8.4)/50.3 - (10.3 + 8.4));
  printf("1-s)%f\n", (cos(0.8)+sin(0.8))*(cos(0.8)-sin(0.8)));
 /*----------------------------------------------------------------------------------------------------------*/ 
	float a;
	float b;
  float c;
  float d;
  float delta;
  float sqrtdelta;
  float raiz1;
  float raiz2;
	scanf("%f", &a);
	scanf("%f", &b);
  scanf("%f", &c);
  scanf("%f", &d);
/* Ex2 --> Escreva um programa em C++ que lê quatro números reais do teclado (a, b, c e
d) e exibe o resultado das seguintes expressões: */
	printf("2-a)%f\n", a+b);
  printf("2-b)%f\n", a/c);
  printf("2-c)%f\n", pow(a,2));
  printf("2-d)%f\n", b*c);
  printf("2-e)%f\n", (a*b)-c);
  printf("2-f)%f\n", a+(b*c));
  printf("2-g)%f\n", (a+b)*c);
  printf("2-h)%f\n", sin(a));
  printf("2-i)%f\n", sqrt(b));
  printf("2-j)%f\n", a+b+c);
  printf("2-k)%f\n", a*b*c);
  printf("2-l)%f\n", (a+b+c)/d);
  printf("2-m)%f\n", (a+b)*(a-d));
  printf("2-n)%f\n", (b/c)+(a*d));
  printf("2-o)%f\n", sin(b)+cos(c));
  printf("2-p)%f\n", log(a)-log(c));
  printf("2-q)%f\n", log(a)+(log(b)*log(d)-cos(log(c))));
  printf("2-r)%f\n", (b + a)/c - (d + a));
  printf("2-s)%f\n", (cos(d)+sin(c))*(cos(b)-sin(a)));
/*----------------------------------------------------------------------------------------------------------*/
/* Ex3 --> Escreva um programa em C++ que lê três números reais do teclado (a, b e c) e
exibe o resultado das seguintes expressões: */

  /* a) --> Média: média de a, b e c: */
  printf("3-a)%f\n", (a+b+c)/3);
/*----------------------------------------------------------------------------------------------------------*/
  /* b) --> Média ponderada: média ponderada de a, b e c onde a tem peso 3, b 4 e c 5: */
  printf("3-b)%f\n", ((a*3)+(b*4)+(c*5))/(3+4+5));
/*----------------------------------------------------------------------------------------------------------*/
  /* c) --> Perímetro: perímetro de um círculo de raio a: */
  printf("3-c)%f\n", 2*3.141502*a);
/*----------------------------------------------------------------------------------------------------------*/
  /* d) --> Área do círculo: área de um círculo de raio a: */
  printf("3-d)%f\n", 3.141502*pow(a,2));
/*----------------------------------------------------------------------------------------------------------*/
  /* e) --> Área do triângulo: área de um triângulo de base b e altura c: */
  printf("3-e)%f\n", (b*c)/2);
/*----------------------------------------------------------------------------------------------------------*/
  /* f) --> Hipotenusa: hipotenusa de um triângulo retângulo, cujos lados conhecidos são b e c: */
  printf("3-f)%f\n", pow(b,2)+pow(c,2));
/*----------------------------------------------------------------------------------------------------------*/
  /* g) --> Raízes: raízes da equação do segundo grau definida por a.x2 + b.x + c: */
  if(a !=0) {
      delta = (b*b)-(4*a*c);
      sqrtdelta = sqrt(delta);
  }
  if(delta >= 0) {
      raiz1 = (-b + sqrtdelta)/(2*a);
      raiz2 = (-b - sqrtdelta)/(2*a);
      printf("3-g)%2f e %.2f\n", raiz1, raiz2);
  }
  else {
    printf("coeficiente 'a' é inválido, só é válida se 'a' for diferente de 0.Não é uma equação de 2° grau");
  }