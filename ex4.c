#include <stdio.h>

int binario(int bin)
{
    int total  = 0;
    int potenc = 1;

    while(bin > 0) {
        total += bin % 10 * potenc;
        bin    = bin / 10;
        potenc = potenc * 2;
		}

    return total;
}

int main(void)
{
    int dec = 0;
    int bin = 0;

    printf("Digite um numero em base binario: ");
    scanf("%d", &bin);

    dec = binario(bin);

    printf("%d (base 2) = %d (base 10)\n", bin, dec);

    return 0;
}
