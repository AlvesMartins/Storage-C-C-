/*
Textos (strings) em ANSI C
*/

#include<stdio.h>

int main(){
    char nome[100] = "Augusto dos Santos";

    printf("Seu nome eh: %s\n", nome);

    nome[0] = '@';

    printf("Nome atualizado: %s\n\n", nome);

    printf("A primeira letra do nome eh: %c\n\n", nome[0]);

    printf("A variavel nome ocupa %ld bytes.\n", sizeof (nome));

    return 0;
}
