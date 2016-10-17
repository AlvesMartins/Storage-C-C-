/*
Verificar se um numero e par
*/

#include<stdio.h>

int main(){

    int num;

    printf("Digite um numero para verificar se eh par: ");
    scanf("%d", &num);

    printf("O numero é %s\n", (num % 2 == 0 ? "par" : "impar"));

    return 0;
}
