#include <stdio.h>
 
int main(){
	int num, aux;
	
	printf("Digite um numero:");
	
	scanf("%d", &num);
	
	aux = num;
	
	while(aux !=1){
		
		if (aux % 2 == 0){
			aux =aux /2;
			
		} else {
			
			aux = 3 * aux +1;
			
		}
		printf("%d\n\a", aux);
		
		
		
	}
	
	
	
	
	return 0;
}
 