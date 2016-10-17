/*
Criar funcao para somar dois valores
*/
#include<stdio.h>

int main(){
    int num1, num2, res;

    printf("Informe o numero 1: ");
    scanf("%d", &num1);

    printf("Informe o numero 2: ");
    scanf("%d", &num2);

    res = num1 + num2;

    printf("\nA soma de %d e %d eh igual a %d\n\n", num1, num2, res);

    return 0;
}
