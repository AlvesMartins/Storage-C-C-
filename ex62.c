#include<stdio.h>

int potencia(int, int);

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

int potencia(int x, int y){
    int pot = 1, i;
    for (i = 1; i <= y; i++){
        pot = pot * x;
    }
    return pot;
}























