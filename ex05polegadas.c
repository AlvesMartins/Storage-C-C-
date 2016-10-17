/*
Criar programa para converter de polegadas (") para cm.
*/

#include<stdio.h>

int main(){
    float polegadas, cm;

    polegadas = 40.55;

    cm = polegadas * 2.54;

    printf("%.2f polegadas = %.2e cm.\n", polegadas, cm); 

    return 0;
}
