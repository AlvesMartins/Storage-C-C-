/*
Exibe todos os naturais de 1 a 100
*/

#include<stdio.h>

int main(){
    int num;
    
    num = 1;
    while(num <= 100){
        printf("%d\n", num);
        num = num + 1;
    }
    
    return 0;
}
