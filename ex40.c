/*
Conjectura de Collatz
*/

#include<stdio.h>

int main(){

    int num, n;

    printf("Digite o primeiro termo: ");
    scanf("%d", &num);

    printf("\n\nSEQUENCIA DE TERMOS:\n");
    n = num;
    while(n != 1){
        if (n % 2 == 0){
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        printf("%d\n", n);
    }

    return 0;
}
