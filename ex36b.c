/*valida preco
Nao aceita preco zero ou menos
*/
#include<stdio.h>

#define TRUE 1

int main(){
    double preco;

    while (TRUE){
        printf("Digite o valor do produto: ");
        scanf("%lf", &preco);
        if (preco <= 0.0){
            printf("Valor invalido!\n");
        } else {
            break;
        }        
    }

    printf("\nPreco informado: %.2f\n\n", preco);

    return 0;
}











