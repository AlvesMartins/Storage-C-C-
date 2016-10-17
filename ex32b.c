/*
Encontra o maior entre n valores
*/

#include<stdio.h>

int main(){
    int n, maior = 1 << 31, num, i;
    
    printf("Quantos numeros voce quer testar? ");
    scanf("%d", &n);

    i = 1;
    while(i <= n){
        printf("Digite o valor %d: ", i);
        scanf("%d", &num);
        if (num > maior){
            maior = num;
        }
        i = i + 1;
    }

    printf("\nO maior valor informado foi: %d\n\n", maior);
    
    return 0;
}













