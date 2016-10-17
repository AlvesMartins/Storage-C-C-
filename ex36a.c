/*valida preco
Nao aceita preco zero ou menos
*/
#include<stdio.h>

#define TRUE 1

int main(){
    double preco;

    printf("Digite o valor do produto: ");
    scanf("%lf", &preco);

    while (preco <= 0.0){
        printf("Valor invalido. Digite novamente: ");
        scanf("%lf", &preco);
    }

    printf("\nPreco informado: %.2f\n\n", preco);

    return 0;
}











