/*
Exercicio 1005 URI
*/

#include <stdio.h>

int main() {

    double numero, hora1, hora2, salario;
    
    scanf("%lf", &numero);
    scanf("%lf", &hora1);
	scanf("%lf", &hora2);

    salario = hora1 * hora2;

    printf("NUMBER = %.0f\nSALARY = U$ %.2f\n", numero, salario);

    return 0; 
}
