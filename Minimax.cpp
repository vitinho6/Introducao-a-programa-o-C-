/*Joao Vitor Moura
IP 01; Lista 13 Item 03*/

#include <stdio.h>

int minimax(int Matriz[][10], int *linha, int *coluna);
int main()
{

	int Matriz[10][10], i , j, Minimax, linha=0, coluna=0;
	puts("Digite os elementos da matriz\n");
	
	for(i = 0; i < 10; i++)
		for(j = 0; j < 10; j++)
		{
			scanf("%d", &Matriz[i][j]);
		}
	puts("A matriz eh:\n");
	
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			printf("%d", Matriz[i][j]);
			printf("\t");
		}
		printf("\n");

	}

	Minimax = minimax(Matriz, &linha, &coluna);

	printf("O elemento minimax eh: %d, localizado na linha %d\ne na coluna %d da matriz preenchida.\n", Minimax, linha, coluna);
	
	return 0;
}

int minimax(int Matriz[][10], int *linha, int *coluna)
{

	int maior = Matriz[0][0], i, j, linha_maior=0, mini;

	for(i = 0; i < 10; i++)
		for(j = 0; j < 10; j++)
		{
			if(Matriz[i][j] > maior)
			{
				maior = Matriz[i][j];
				linha_maior = i;
			}
		}
	mini = Matriz[linha_maior][0];

	(*linha)=linha_maior;
	
	for(j = 0; j < 10; j++)
	{
		if(Matriz[linha_maior][j] < mini)
		{
			mini = Matriz[linha_maior][j];
			(*coluna) = j;
		}
	}
	return mini;
	
}
