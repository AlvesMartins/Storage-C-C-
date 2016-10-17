/*
Ler numero. Se for negativo, converter para positivo.
*/

#include<stdio.h>

int main(){

    int num;
    
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    if (num < 0){
         num = num * -1;
    }

    printf("\nO valor digitado em modulo eh: %d\n\n", num);

    return 0;
}
