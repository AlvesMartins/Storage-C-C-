/*
Crie um programa para converter uma letra minúscula para maiúscula.
*/

#include<stdio.h>

int main(){

    char letra, letraMaiuscula;

    letra = 'p';
    letraMaiuscula = letra - 32;

    printf("Letra: %c\nLetra maiúscula: %c\n", letra, letraMaiuscula);

    return 0;
}
