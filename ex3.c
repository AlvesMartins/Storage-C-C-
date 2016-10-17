#include<stdio.h>

#define MAX_STR 30

int main(){

    char txt[MAX_STR];
    int letra;
    int i, qtdeLetra;

    printf("Digite um numero:");
    fgets(txt, MAX_STR, stdin);

  printf("Digite um digito [0..9]: ");
        scanf("%d", &letra);
    for(qtdeLetra = 0, i = 0; txt[i] != '\0'; i++){
       while (letra[i] + letra[i + 1] != letra[i])
		printf("error"); 
        scanf("%d", &letra);	
	   break;
	   
    }
	

    printf("O digito %d aparece %d no numero %s\n", letra, qtdeLetra, txt);
    return 0;
}
