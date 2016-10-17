/*
Verificar se, entre dois numeros, eles sao iguais ou qual eh maior.
*/
#include<stdio.h>

int main(){
    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
 
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("O primeiro eh maior.\n");
    } else if (num2 > num1){
        printf("O segundo eh maior.\n");
    } else {
        printf("Os valores sao iguais\n");
    }


    return 0;
}









