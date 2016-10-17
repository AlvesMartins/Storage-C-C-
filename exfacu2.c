#include<stdio.h>
#include<stdlib.h>

int main()
{
	int idade;
	
	printf("Qual a sua idade?\n");
	
	scanf("%d", &idade);
	
	if(idade >= 16 && idade <= 70 ){
	
	printf("Voce deve votar");
	
	
	} else {
if (idade <= 15){
	
	printf("Nao pode votar");
} else {
	
	printf("voto facutativo");
}

printf("\n\n\n");

system("pause");



}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
