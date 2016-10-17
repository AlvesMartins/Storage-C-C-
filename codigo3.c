#include<stdio.h>

int main(){
	double nota1, nota2, media;
	double const NOTA_MINIMA = 7.0;
	
	printf("Digite a nota do primeiro semestre: ");
	scanf("%lf", &nota1);
	
	printf("Digite a nota do segundo semestre: ");
	scanf("%lf", &nota2);
	
	media = (nota1 + nota2) / 2.0;
	
	printf("\n\nSua Media foi= %.2f\n\n", media);
	
	if (media >= NOTA_MINIMA){
	    printf("Voce foi APROVADO! \n");
	} else {
		printf("REPROVADO \n");
	}
	return 0; 
	
	
}