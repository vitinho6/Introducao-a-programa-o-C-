#include <stdio.h>
#include <stdlib.h>
void lerMat(int [][10], int, int);
void somaMat(int [][10], int [][10], int [][10], int, int);
void escreverMat(int [][10], int, int);
int main()
{

	int matrizA[10][10], matrizB[10][10], matrizC[10][10], soma1[10][10], linha, coluna;
	puts("Escreva, respectivamente, o numero de linhas e o de colunas - Máx: 10\n");
	scanf("%d %d", &linha, &coluna);
	puts("Preencha a matriz A:\n");
	lerMat(matrizA, linha, coluna);
	system("pause");
	system("cls");
	puts("Preencha a matriz B:\n");
	lerMat(matrizB, linha, coluna);
	system("pause");
	system("cls");
	puts("Preencha a matriz C:\n");
	lerMat(matrizC, linha, coluna);
	system("pause");
	system("cls");
	somaMat(matrizA, matrizB, soma1, linha, coluna);
	somaMat(soma1, matrizC, soma1, linha, coluna);
	puts("Matriz A:\n");
	escreverMat(matrizA, linha, coluna);
	puts("Matriz B:\n");
	escreverMat(matrizB, linha, coluna);
	puts("Matriz C:\n");
	escreverMat(matrizC, linha, coluna);
	puts("Matriz soma:\n");
	escreverMat(soma1, linha, coluna);

	return 0;
}

void lerMat(int matriz[][10], int l, int c)
{

	int i, j;
	for(i = 0; i < l; i++)
		for(j = 0; j < c; j++)
			scanf("%d", &matriz[i][j]);

}

void somaMat(int matriz1[][10], int matriz2[][10], int soma[][10], int l, int c)
{

	int i, j;
	for(i = 0; i < l; i++)
		for(j = 0; j < c; j++)
		{
			soma[i][j] = matriz1[i][j] + matriz2[i][j];
		}
}

void escreverMat(int matriz[][10], int l, int c)
{
	int i, j;
	for(i = 0; i < l; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("%d", matriz[i][j]);
			printf("\t");
		}
		printf("\n");	
	}
}









