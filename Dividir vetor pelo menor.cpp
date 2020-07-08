#include <stdio.h>

void leitura(int[], int);
void divisao(int[], int, float[]);
void exibir(float[], int);
int main(){
	
	int n, vet[200];
	float vet2[200];
	printf("Digite o numero de elementos do vetor:\n");
	scanf("%d", &n);
	leitura(vet, n);	
	divisao(vet, n, vet2);
	exibir(vet2, n);
	return 0;
}

void leitura(int v[], int N){
	int i;
	printf("Digite os valores do vetor:\n");
	for(i=0;i<N;i++)
		scanf("%d", &v[i]);
}

void divisao(int v1[], int cont, float v2[]){
	int j, menor;
	for(j=0;j<cont-1;j++){
		if(v1[j]<v1[j+1]){
			menor=v1[j];
			break;}
	}
	for(j=0;j<cont;j++)
		v2[j]=(float)v1[j]/menor;
}

void exibir(float vtr2[], int k){
	int c;
	for(c=0;c<k;c++)
		printf("\n%.2f", vtr2[c]);
}