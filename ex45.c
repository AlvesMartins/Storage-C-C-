/*
Contar qtde de espacos de um texto
*/

#include<stdio.h>

#define MAX_STR 30

int main(){

    char txt[MAX_STR];
    int i, qtdeEspacos;

    printf("Informe um texto para contar espacos: ");
    fgets(txt, MAX_STR, stdin);

    for(qtdeEspacos = 0, i = 0; txt[i] != '\0'; i++){
        if (txt[i] == ' '){
            qtdeEspacos++;
        }
    }

    printf("Este texto possui %d espacos\n", qtdeEspacos);
    return 0;
}
