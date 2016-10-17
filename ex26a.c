/*
Programa para verificar se ja pode votar dado a idade
*/

#include<stdio.h>

int main(){
    unsigned int idade;
    
    printf("Informe a primeira idade: ");
    scanf("%u", &idade);
    
    if (idade >= 18 && idade < 70){
        printf("Votacao obrigatoria!\n");
    } else {
        if (idade < 16) {
            printf("Nao pode votar!\n");
        } else {
            printf("Votacao opcional!\n");
        }
    }
    
    
    return 0;
}








