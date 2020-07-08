#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void contagem(char nome[][25], int letras[][2], int n);
int main()
{

	system("Color 6f");
	int n, letras[50][2], i;
	char nomes[50][25];

	puts("Insira a quantidade de nomes que vai digitar:(max.:50)\n");
	scanf("%d", &n);
	contagem(nomes, letras, n);

	puts("Os nomes, a quantidade de vogais e a de consoantes\n sao respectivamente:\n");
	for(i = 0; i < n; i++)
	{
		printf("%02d - %s/vogais: %d/consoantes: %d\n", (i + 1), nomes[i], letras[i][0], letras[i][1]);
	}
}

void contagem(char nome[][25], int letras[][2], int n)
{

	int i, j, q, w = 0;

	puts("Digite os nomes:\n");
	for(i = 0; i < n; i++)
	{
		fflush(stdin);
		gets(nome[i]);
	}
	system("cls");
	for(i = 0; i < n; i++)
	{	
		letras[w][0] = 0;
		letras[w][1] = 0;
		q=strlen(nome[i]);
		for(j = 0; j < q; j++)
		{	
			if(nome[i][j] == 'a' || nome[i][j] == 'A' || nome[i][j] == 'e' || nome[i][j] == 'E' || nome[i][j] == 'i' || nome[i][j] == 'I' || nome[i][j] == 'o' || nome[i][j] == 'O' || nome[i][j] == 'u' || nome[i][j] == 'U')
			{
				letras[w][0] += 1;
			}
			else if(nome[i][j]!=' ')
			{
				letras[w][1] += 1;
			}
		}
		w++;
	}

}
