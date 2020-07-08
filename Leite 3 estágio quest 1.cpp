#include <stdio.h>

int main()
{

	int matriz[4][4], vet[4]={0}, i, j;
	puts("Preencha a matriz:\n");
	for(i = 0; i < 4; i++)
		for(j = 0; j < 4; j++)
			scanf("%d", &matriz[i][j]);
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%d", matriz[i][j]);
			printf("\t");
		}
		printf("\n");
	}

	for(j = 0; j < 4; j++)
		for(i = 0; i < 4; i++)
			vet[j] += matriz[i][j];

	for(i = 0; i < 4; i++)
		printf("\n%d", vet[i]);
	return 0;
}
