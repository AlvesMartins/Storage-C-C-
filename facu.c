/*
Tabuada 

*/
#include<stdio.h>

int main()
{
    int n, i, d = 11, RES;

    printf("Informe o numero: ");
    scanf("%d", &n);

    for (i = 0; i < d; i++)
    {
      RES = i * n;
    
	
	printf("%d x %d = %d\n", n, i, RES);
	
	}

    return 0;
}













