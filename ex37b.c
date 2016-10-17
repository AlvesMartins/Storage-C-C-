#include<stdio.h>

#define TRUE 1

int main(){
    int i, num, tri;

    printf("Digite um numero para verificar se eh triangular: ");
    scanf("%d", &num);

    for (i=1; tri = i * (i + 1) * (i + 2), tri < num; i = i + 1);

    if (tri == num){
        printf("Eh triangular (%d, %d, %d)!\n", i, i + 1, i + 2);
    } else {
        if (tri > num){
            printf("Nao eh triangular!\n");
        } 
    }
    
    return 0;
}










