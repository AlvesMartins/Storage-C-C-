/*
Exibe todos os naturais de 1 a 100
multiplos de 5
*/

#include<stdio.h>

int main(){
    int num;
    
    num = 5;
    while(num <= 100){
        printf("%d\n", num);
        num = num + 5;
    }
    
    return 0;
}