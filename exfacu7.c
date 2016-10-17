#include<stdio.h>

int soma(int a, int b)
{
	int c;
	c=a + b;


return(c);
}

int main(){
	
	int n1, n2, r;
	
	printf("soma:\n");
	
	scanf("%d", &n1);
	
	scanf("%d", &n2);
	
	r = soma(n1 ,n2);
	
	printf ("soma = %d\n", r);
	
	
	
}
