#include <stdio.h>
#define tam 50

int excluir(int [], int);
int main(){
	
	int vetor[tam], n, i, x;
	printf("Ola, este programa imprime o vetor excluindo suas repeti��es digite a quantidade de elementos do vetor:\n");//O usu�rio informa o numero de posi��es
	scanf("%d", &n );
	printf("Digite os elementos do vetor:\n");//Preenchimento do vetor
	for(i=0;i<n;i++)
		scanf("%d", &vetor[i]);
	x=excluir(vetor, n);//Chamada da fun��o
	printf("O novo vetor eh:\n");
	for(i=0; i<x; i++){//Impress�o do novo vetor
		printf("%d", vetor[i]);
		printf("\t");
	}
	return 0;
}

int excluir(int vet[], int N){
	
	int j, k, c, aux;
	for(k=0;k<N;k++){
		for(j=1;j<N;j++){
			if(k!=j && vet[j]==vet[k]){//Comparamos todos os elementos de uma linha, com um �nico elemento, se a posi��o for diferente
				for(c=j;c<N-1;c++){//O numero igual � enviado para o fim do vetor
					aux=vet[c];
					vet[c]=vet[c+1];
					vet[c+1]=aux;
				}
				N=N-1;//Diminuimos o vetor
			}
		}
	}
	return N;
}