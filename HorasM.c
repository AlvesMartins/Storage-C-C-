#include<stdio.h>
 
 int main (){
 	int litros, segundos, minutos, horas, sobras, dia;
 	
 	printf("Digite valor Litros:");
 	scanf("%d", &litros);
 	sobras = litros / 3;
 	segundos = sobras % 100;
 	sobras = sobras / 100;
 	minutos = sobras % 60;
 	sobras = sobras / 60;
 	horas = sobras % 24;
 	sobras = sobras / 24;
 	dia = sobras;
 	
 	printf("%d D: %d H: %d M: %d S", dia, horas, minutos, segundos);
 	
 	return 0;
 	
 }
