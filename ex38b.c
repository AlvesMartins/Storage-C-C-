/*
incremento com ++
*/

#include<stdio.h>

int main(){
    int x, aux;
    
    x = 25;
    
    printf("Aqui x vale %d.\n", x);

    aux = x++;

    printf("Agora x vale %d.\n", x);

    printf("Aux vale %d.\n", aux);

    return 0;
}
