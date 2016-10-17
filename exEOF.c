/*
EOF

Compile. Apos, chame na linha de comando do windows como:

exEOF.exe < entrada.txt

Ou do linux:

./exEOF < entrada.txt

Desta maneira, o arquivo entrada.txt precisa estar na mesma pasta.

*/

#include<stdio.h>

#define MAX_STR 100

int main(){
    char txt1[MAX_STR];
   
	/*Le uma string (scanf le soh uma palavra) enquanto
		nao chega ao final do arquivo*/
    while(scanf("%s", txt1) != EOF){

		/*Somente exibe a palavra lida*/
		printf("%s\n", txt1);

	}

    return 0;
}



















