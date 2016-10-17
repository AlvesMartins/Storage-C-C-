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

    for(i = 0; i < n; i++){
        printf("Informe o preco %d: ", (i + 1));
        scanf("%lf", &preco[i]);
    }

    printf("\n\nPRECOS INFORMADOS NA ORDEM INVERSA:\n");
    for(i = n - 1; i >= 0; i--){
        printf("%.2f%s", preco[i], i == 0 ? "\n" : ", ");
    }

    return 0;
}
