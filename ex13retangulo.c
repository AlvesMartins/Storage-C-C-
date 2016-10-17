/*Calcula a area de um retangulo*/
#include <stdio.h>

int main () {
  double a, b, area;
  
  printf("Digite a medida do lado a: ");
  scanf("%lf", &a);
  
  printf("Digite a medida do lado b: ");
  scanf("%lf", &b);
  
  area = a * b;
  
  printf("A area do retangulo de lados %.2f e %.2f = %.2f.\n", a, b, area);

  return 0;
}
