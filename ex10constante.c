/*
Criar programa para converter de polegadas (") para cm.
*/

#include<stdio.h>

int main(){
    float polegadas, cm;
    float const cmPorPol = 2.54;

    polegadas = 40.55;

    cm = polegadas * cmPorPol;

    printf("%.2f polegadas = %.2e cm.\n", polegadas, cm); 

    return 0;
}
