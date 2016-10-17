#include <stdio.h>

int main () {
    int qtdePopulacao = 369807;

    printf("Com 8 colunas............: %8d\n", qtdePopulacao);
    printf("Com 9 colunas............: %9d\n", qtdePopulacao);
    printf("Com 8 colunas e zeros....: %08d\n", qtdePopulacao);
    printf("Com 12 colunas e zeros...: %012d\n", qtdePopulacao);
   return 0;
}

