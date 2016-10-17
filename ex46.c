/*
Contar qtde de espacos de um texto
*/

#include<stdio.h>

#define MAX_STR 30

int main(){

    char txt[MAX_STR];
    char letra;
    int i, qtdeLetra;

    printf("Informe um texto: ");
    fgets(txt, MAX_STR, stdin);

    printf("Que letra voce quer contar? ");
    scanf("%c", &letra);

    for(qtdeLetra = 0, i = 0; txt[i] != '\0'; i++){
        if (txt[i] == letra){
            qtdeLetra++;
        }
    }

    printf("Este texto possui %d simbolos de '%c'\n", qtdeLetra, letra);
    return 0;
}
