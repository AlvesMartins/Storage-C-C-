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
        if (texto[i] >= 97 && texto[i] <= 122){
            texto[i] = texto[i] - 32;
        }
    }

    printf("Texto informado: %s\n", texto);

    return 0;
}
