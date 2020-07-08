#include <stdio.h>

int pesquisa(int[], int);
int main(){
	int vetor[20], pesquisado, i;
	printf("Digite os valores do vetor:\n");
	for(i=0;i<20;i++)
		scanf("%d", &vetor[i]);
	printf("Digite o valor a ser pesquisado:\n");
	scanf("%d", &pesquisado);
	if(pesquisa(vetor, pesquisado) != -1)
	   	printf("A posicao do numero no vetor eh: %d\n", pesquisa(vetor, pesquisado));
	else
		printf("-1");
}

int pesquisa(int v[], int pesq){
	
	int j, posicao;
	for(j=0; j<20; j++){
		if(v[j]==pesq){
			posicao=j;
			break;}
		else
			posicao=-1;
	}
	return posicao;
}