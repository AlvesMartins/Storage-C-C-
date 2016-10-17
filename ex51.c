/*
Ler e exibir precos
*/
#include<stdio.h>

#define MAX_PRECO 1000

int main(){
    double preco[MAX_PRECO];
    int i, n;

    printf("Quantos precos voce quer informar? ");
    scanf("%d", &n);

    for(i = 0; i < MAX_PRECO; i++){
        printf("Informe o preco %d: ", (i + 1));
        scanf("%lf", &preco[i]);
    }

    printf("\n\nPRECOS INFORMADOS:\n");
    for(i = 0; i < MAX_PRECO; i++){
        printf("%.2f%s", preco[i], i == MAX_PRECO - 1 ? "\n" : ", ");
    }

    return 0;
}
