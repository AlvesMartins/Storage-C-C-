/*
Converte para MAIUSCULO!
*/

#include<stdio.h>

int main(){
 
    char texto[100];
    int i;

    printf("Digite um texto: ");
    fgets(texto, 100, stdin);

    for(i = 0; texto[i] != '\0'; i++){
        printf("Letra %d: %c\n", i + 1, texto[i]);
    }

    printf("Texto informado: %s\n", texto);

    return 0;
}
