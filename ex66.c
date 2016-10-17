/*Calculo de potencia com N testes (eu conheco N)*/
#include<stdio.h>
#include "minhalib.h"

int main(){
    int base, expo;
    
    while(scanf("%d", &base) != EOF && scanf("%d", &expo) != EOF){
        printf("%d^%d=%d\n", base, expo, potencia(base, expo));
    }

    return 0;/*Informa ao sistema que o programa encerrou normalmente.*/
}
