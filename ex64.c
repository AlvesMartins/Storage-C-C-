/*Exemplo de calculo da area de um retangulo de lados a e b*/
#include<stdio.h>

int main(){
    double a, b, area;

    scanf("%lf %lf", &a, &b);/*Le duas variaveis no mesmo scanf*/

    area = a * b;/*Calculo da area*/

    printf("A area do retangulo de lados %.2f e %.2f = %.2f.\n", a, b, area);

    return 0;/*Informa ao sistema que o programa encerrou normalmente.*/
}

