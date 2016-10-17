/*validacao com laco. Intervalo [0, 100]*/


#include<stdio.h>

int main(){
    int num;
    
    printf("Digite um valor [0, 100]: ");
    scanf("%d", &num);

    /*while(num < 0 || num > 100){*/
    while(!(num >= 0 && num <= 100)){
        printf("Valor invalido, digite novamente: ");
        scanf("%d", &num);
    }

    printf("O valor lido foi: %d\n", num);

    return 0;
}


















