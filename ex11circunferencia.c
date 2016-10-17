/*
Criar um programa para calcular a área da circunferência
*/

#include<stdio.h>

int main(){

    double raio, area;
    double const PI = 3.14159;

    scanf("%lf", &raio);

    area = PI * raio * raio;

    printf("A=%.4f\n", area);

    return 0;
}
