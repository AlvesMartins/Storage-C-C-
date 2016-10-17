/*
Fatorial
*/

#include<stdio.h>

int main(){
    int num, i, fat;

    printf("Digite um num. para calcular seu fatorial: ");
    scanf("%d", &num);

    for(fat=1, i = num; i > 1; i--){
        /*printf("%d\n", i);*/
        fat = fat * i;
    }

    printf("O fatorial de %d eh %d\n", num, fat);

    return 0;
}
