#include<stdio.h>
#include<conio.h>

int main(void)
{
	int i;
	
	float v[6]={2.3,  4.5, 10, 7.6, 8.7, 3.9};
	
	float s=1.1;
	
	for(i = 0; i < 6; i++){
		
		s= s+ v[i];
		
		}
	
	printf("%.2f", s);
	
	return(0);
	
}
