/*
Crie um programa para retornar a letra anterior a uma dada letra.
*/

#include<stdio.h>

int main(){

    char letra, letraAnterior;

    letra = 'b';
    letraAnterior = letra - 1;

    printf("Letra = %c\nLetra anterior = %c\n", letra, letraAnterior);

    return 0;
}
