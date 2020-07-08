#include<stdio.h>
int main(){//Este programa calcula uma aproximação para Pi.
	float pi=0, i=1.0, sinal=1;
	while(4/i>0.0001)
	{
		pi+=sinal*4/i;
		sinal*=-1;
		i+=2;
		
	}	
	
	printf("Pi eh: %f", pi);
	return 0;	
	
}
//Me chamo João Vitor Moura, sou aluno da turma 01 de introdução à programação. Esse exercício é referente ao item 3 da lsita 04.