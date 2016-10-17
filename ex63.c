#include<stdio.h>

#include "minhalib.h"

int main(){
    int x, y, res;

    printf("Informe a base: ");
    scanf("%d", &x);

    printf("Informe o expoente: ");
    scanf("%d", &y);

    res = potencia(x, y);

    printf("%d elevado a %d eh igual a %d\n", x, y, res);

    return 0;
}























