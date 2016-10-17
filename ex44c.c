/*
Converte para MAIUSCULO!
*/

#include<stdio.h>

#define MAX_TEXTO 50

int main(){
 
    char texto[MAX_TEXTO];
    int i;

    printf("Digite um texto: ");
    fgets(texto, MAX_TEXTO, stdin);

    for(i = 0; texto[i] != '\0'; i++){
        if (texto[i] >= 'a' && texto[i] <= 'z'){
            texto[i] = texto[i] - 32;
        }
    }

    printf("Texto informado: %s\n", texto);

    return 0;
}
