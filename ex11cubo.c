/*
Calcula o cubo de um inteiro com entrada de dados pelo usuário
*/

#include<stdio.h>

int main(){

    int num, cubo;

    printf("Digite um inteiro para saber o seu cubo: ");

    /*Recebe algo da entrada padrão, no caso
      um inteiro do teclado.*/
    scanf("%d", &num); 

    cubo = num * num * num;

    printf("\nO cubo de %d é %d.\n\n", num, cubo);

    return 0;
}







