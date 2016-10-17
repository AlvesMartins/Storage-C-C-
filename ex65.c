/*Calculo de potencia com N testes (eu conheco N)*/
#include<stdio.h>
#include "minhalib.h"

int main(){
    int n, i, base, expo;

    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%d", &base);
        scanf("%d", &expo);
        printf("%d^%d=%d\n", base, expo, potencia(base, expo));
    }

    return 0;/*Informa ao sistema que o programa encerrou normalmente.*/
}
