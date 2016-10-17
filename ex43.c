/*
Textos (strings) em ANSI C
*/

#include<stdio.h>

int main(){
    char nome[50];

    printf("Informe seu nome: ");
    scanf("%s", &nome[0]);/*Para no separador (espaco, enter, tab, etc)*/

    printf("O nome informado foi: %s\n", nome);

    if (nome == &nome[0]){
        printf("\nEh IGUAL!!!\n");
    }
    return 0;
}
