/*
Textos (strings) em ANSI C
*/

#include<stdio.h>

int main(){
    char nome[10];

    printf("Informe seu nome: ");
    gets(nome);

    printf("O nome informado foi: %s\n", nome);

    return 0;
}
