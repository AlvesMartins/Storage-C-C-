/*
Calcular a média simples de quatro notas de um aluno.
*/

#include<stdio.h>

int main(){

    float n1, n2, n3, n4, media;

    n1 = 7.5;
    n2 = 9.5;
    n3 = 3.5;
    n4 = 8.0;

    media = (n1 + n2 + n3 + n4) / 4.0;

    printf("NOTAS:\n%.2f\n%.2f\n%.2f\n%.2f\n\n", n1, n2, n3, n4);

    printf("MÉDIA:\n%.2f\n\n", media);
 
    return 0;
}





