/*
Ler varios textos
*/
#include<stdio.h>

#define MAX_STR 100
#define N_TXT   5

int main(){
    char texto[N_TXT][MAX_STR];
    int i;

    for(i = 0; i < N_TXT; i++){
        printf("Qual o texto %d? ", i + 1);
        /*fgets(texto[i], MAX_STR, stdin);*/
        fgets(&texto[i][0], MAX_STR, stdin);
    }
    
    printf("\n\nTEXTO INFORMADO:\n");
    for(i = 0; i < N_TXT; i++){
        printf("%s", texto[i]);
    }

    return 0;
}
