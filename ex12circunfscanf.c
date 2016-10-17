/*
Criar um programa para calcular a área da circunferência
*/

#include<stdio.h>

int main(){

    double raio, area;
    double const PI = 3.1415;

    printf("Digite o valor do raio da circunferência: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;

    printf("A area da circunferencia de raio %.2f eh igual a %.2f.\n\n", raio, area);

    return 0;
}
