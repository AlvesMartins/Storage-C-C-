#include<stdio.h>
#include<math.h>

#define PI 3.14159
 main ()
 {
 	float area, raio;
 	
 	do
 	{
 		printf("valor do raio\n");
 		scanf("%f", &raio);
 		 }
 		 
 		 while(raio < 0);
 		 
 		 area = PI * (raio * raio);
 		 
 		 printf("A .area e %f \n", area);
 	
 	
 return 0;	
 }
