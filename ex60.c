/*
Criar funcao para converter polegadas para cm
*/
#include<stdio.h>

double polParaCm(double pol){
    /*double cm;
    cm = pol * 2.54;
    return cm;*/
    return pol * 2.54;
}

int main(){
    double polegadas, cm;

    printf("Digite a medida em polegadas: ");
    scanf("%lf", &polegadas);

    cm = polParaCm(polegadas);

    printf("%.2f polegadas = %.2f cm\n", polegadas, cm);

    return 0;
}



















