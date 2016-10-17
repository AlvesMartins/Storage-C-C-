/*
Exibe numeros de [0,100[
Exceto multiplos de 5
*/

#include<stdio.h>

#define LIMITE_MAX 20

int main(){
    int i;

    for(i = 0; i < LIMITE_MAX; i = i + 1){
        if (i == 0 || i % 5 != 0)
            printf("%d\n", i);
        /*printf("Olaaaaaaaa\n");*/
    }
    

    return 0;
}
