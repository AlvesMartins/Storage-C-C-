/*
Encontrar o maior valor entre duas variaveis
*/

#include<stdio.h>

int main(){
    int num1, num2, maior;

    printf("Digite o primeiro valor.....: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor......: ");
    scanf("%d", &num2);

    if (num1 >= num2){
        maior = num1;
    } else {
        maior = num2;
    }

    printf("O maior valor é: %d\n", maior);
    
    return 0;
}







