/*
Verificar se um numero e par
*/

#include<stdio.h>

int main(){

    int num;

    printf("Digite um numero para verificar se eh par: ");
    scanf("%d", &num);

    if (num < 0){
        printf("Numero invalido!\n");
    } else if (num % 2 == 0){
        printf("Eh par!\n");
    } else {
        printf("Eh impar!\n");
    }

    return 0;
}











