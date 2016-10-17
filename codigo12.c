#include<stdio.h>

int main(){
	unsigned int idade;
	
	printf("Informe sua idade: ");

	scanf("%u", &idade);
	if (idade >= 18 && idade < 70){
		printf("Votacao obrigatoria!\n");
		
	} else {
		if (idade < 18){
			printf("Nao e obrigado vota!\n");
		} else {
			if ( idade > 70){
				printf (">:( \n");
			}
		}
	}
	
	return 0;
}