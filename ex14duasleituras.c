/*Calcula a area de um retangulo*/
#include <stdio.h>

int main () {
  double a, b, area;
  
  printf("Digite a medida dos lados a e b: ");
  scanf("%lf%lf", &a, &b);
  
  area = a * b;
  
  printf("A area do retangulo de lados %.3f e %.3f = %.3f.\n", a, b, area);

  return 0;
}
