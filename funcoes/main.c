#include <stdio.h>
#include <math.h>
#define PI 3.14

/* Ex1 --> Escreva um programa em C++ que resolva a Média: calcula a média de a, b e c: */

float media(float a, float b, float c) {
  int result;
  result = ((a+b+c)/3);
  return result;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex2 --> Escreva um programa em C++ que resolva a Média ponderada: calcula a média ponderada de a, b e c onde a tem peso 3, b 4 e c 5: */

float mediaPonderada(float a, float b, float c) {
  int result;
  result = ((a*3)+(b*4)+(c*5));
  return result;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex3 --> Escreva um programa em C++ que resolva o Perímetro: calcula o perímetro de um círculo de raio r.: */

float perimetro(float r ) {
  int result;
  result = (2*PI*r);
  return result;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex4 --> Escreva um programa em C++ que resolva a Área do círculo: calcula a área de um círculo de raio r: */

float areaDoCirculo(float r) {
  int result;
  result = (PI*pow(r,2));
  return result;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex5 --> Escreva um programa em C++ que resolva a Área do triângulo: calcula a área de um triângulo de base b e altura c: */

float areaDoTriangulo(float b, float h) {
  int result;
  result = ((b*h)/2);
  return result;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex6 --> Escreva um programa em C++ que resolva a Área da caixa: calcula a área de uma caixa de dimensões a, b e c: */

float areaDaCaixa(float b, float h, float c) {
  int result;
  result = 2*((b*h)+(c*h)+(b*c));
  return result;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex7 --> Escreva um programa em C++ que resolva o Volume da caixa: calcula o volume de uma caixa de dimensões a, b e c: */

float volumeDaCaixa(float c, float b, float h) {
  int result;
  result = (c*b*h);
  return result;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex8 --> Escreva um programa em C++ que resolva a Área do cilindro: calcula a área de um cilindro de raio r e altura h: */

float areaDoCilindro(float r, float h) {
  int result;
  result = ((2*PI*r*h)+(2*PI*pow(r, 2)));
  return result;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex9 --> Escreva um programa em C++ que resolva o Volume do cilindro: calcula o volume de um cilindro de raio r e altura h: */

float volumeDoCilindro(float r, float h) {
  int result;
  result = (PI*pow(r, 2)*h);
  return result;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex10 --> Escreva um programa em C++ que resolva a Hipotenusa: calcula a hipotenusa de um triângulo retângulo com lados b e c: */

float hipotenusa(float a, float b) {
  int result;
  result = (pow(a,2)+pow(b,2));
  return result;
}
/*----------------------------------------------------------------------------------------------------------*/
/* Ex11 --> Escreva um programa em C++ que resolva a Raiz positiva: calcula a raiz positiva da equação do segundo grau definida por
a.x2+b.x+c: */

float raizPositiva(float a, float b, float c) {
  // ax(2) + bx + c = 0
  // delta = (Δ = b2 - 4.a.c)
  // x1    = ( (-b + √Δ)/2a)
  // x2    = ( (-b - √Δ)/2a)
  float delta;
  float sqrtDelta;
  float x1;

  if(a !=0) {
      delta = (b*b)-(4*a*c);
      sqrtDelta = sqrt(delta);
  };
  if(delta >= 0) {
      x1 = (-b + sqrtDelta)/(2*a);
    return x1;
  }
}
/*----------------------------------------------------------------------------------------------------------*/

int main() {
float a, b, c, r, h;
	scanf("%f%f%f%f%f", &a, &b,&c, &r, &h );
  printf("1-a) A media é: %f\n", media(a, b, c));
  printf("1-b) A media ponderada é: %f\n", mediaPonderada(a, b, c));
  printf("1-c) O perimetro é: %f\n", perimetro(r));
  printf("1-d) A area do circulo é: %f\n", areaDoCirculo(r));
  printf("1-e) A area do triangulo é: %f\n", areaDoTriangulo(b, h));
  printf("1-f) A area da caixa é: %f\n", areaDaCaixa(b, c, h));
  printf("1-g) O volume da caixa é: %f\n", volumeDaCaixa(c, b, h));
  printf("1-h) A area do cilindro é: %f\n", areaDoCilindro(r, h));
  printf("1-i) O volume do cilindro é: %f\n", volumeDoCilindro(r, h));
  printf("1-j) A hipotenusa é: %f\n", hipotenusa(a, b));
  printf("1-h) A raiz positiva é: %f\n", raizPositiva(a, b, c));
}