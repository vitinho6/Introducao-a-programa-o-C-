#include<stdio.h>
int main(){//Este programa calcula uma aproxima��o para Pi.
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
//Me chamo Jo�o Vitor Moura, sou aluno da turma 01 de introdu��o � programa��o. Esse exerc�cio � referente ao item 3 da lsita 04.