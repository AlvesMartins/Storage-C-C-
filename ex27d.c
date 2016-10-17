/*
Exibe todos os naturais de 1 a 100
multiplos de 5
*/

#include<stdio.h>

int main(){
    int num;
    
    num = 1;
    while(num <= 100){
        if (num % 5 == 0){
            printf("%d\n", num);
        }
        num += 1;
    }
    
    return 0;
}