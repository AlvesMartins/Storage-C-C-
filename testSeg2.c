#include<stdio.h>

int main(void){
	int x;
	x=10;
	
	int *ponteiro;
	ponteiro = &x;
	
	printf("%i \n",*ponteiro);
	printf("%i \n", ponteiro);
	getchar();
	
	return 0;
}
