/*Joao Moura
IP 01; Lista 13 Item 08*/
#include <stdio.h>
#include <stdlib.h>

void jogo_da_velha(char jogo[][3]);
int main()
{
	int L, C;
	char jogo[3][3];

	puts("Este programa simula um jogo da velha");
	jogo_da_velha(jogo);
	for(C = 0; C < 3; C++)
	{
		for(L = 0; L < 3; L++)
		{
			printf("%c", jogo[C][L]);
			printf("\t");
		}
	printf("\n");
	}
	return 0;
}

void jogo_da_velha(char jogo[][3])
{

	int i, linha, coluna;
	for(i = 0; i < 9; i++)
	{
		puts("Digite, respectivamente, a linha e a coluna em que deseja jogar:\n");
		scanf("%d %d", &linha, &coluna);
	
		if(jogo[linha][coluna] == 'X' || jogo[linha][coluna] == 'O')
		{
			puts("Linha ocupada. Tente novamente\n");
			i--;
			system("pause");
		}
		else
		{
			puts("Digite sua opção de jogada: ('X' ou 'O' maiusculos)\n");
			fflush(stdin);
			scanf("%c", &jogo[linha][coluna]);
		}
		system("cls");
	}
}
