#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i= 1, ns;
	
	srand(time(NULL));
	

	
	while (i < 7);
	{
	
	ns= rand() % 60;
	
	printf("numero %d:%d\n", i, ns);	
	i++;
	
		}
	
	//printf("\n\n\n");
	
	system("pause");
	
	return 0;
}
