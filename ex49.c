/*
Remove espacos em excesso
*/

#include<stdio.h>

#define MAX_STR 100

int main(){
    char txt1[MAX_STR];
    int i, pos;

    printf("Informe o texto...: ");
    fgets(txt1, MAX_STR, stdin);

    for(i = 0; txt1[i] != '\0'; i++);

    txt1[i - 1] = '\0';

    for(pos = 0, i = 0; txt1[i] != '\0'; i++, pos++){
        while(txt1[i] == ' ' && txt1[i + 1] == ' '){
            i++;
        }
        txt1[pos] = txt1[i];
    }

    txt1[pos] = '\0';
    

    printf("\nResultado.......: %s\n", txt1);


    return 0;
}



















