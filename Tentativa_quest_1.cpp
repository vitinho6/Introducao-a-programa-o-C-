#include <stdio.h>
#include <string.h>
#include <locale.h>
#define TAM 50
#define NOME 15

void ordem(char, int);
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N, cont;
	char nomes[TAM][NOME];
	
	printf("Olá este programa ordena nomes, digite a quantidade de nomes que vai inserir:\n");
	scanf("%d", &N);
	
	printf("Insira os nomes:\n");
	
	for(cont=0; cont<N; cont++)
		scanf("%s", nomes[cont]);
	
	ordem(nomes[N][NOME], N);
	
	return 0;
}
void ordem(char vetor[][NOME], int n){
	int i, j;
	char aux[NOME];
	
	for(i=0; i<n; i++){
		for(j=0; j<n-1; j++){
			 if ((strcmp(vetor[j],vetor[j+1]))==1) {
                strcpy(aux,vetor[j]);
                strcpy(vetor[j], aux);
		}
	}
	for(i=0; i<n; i++)
		printf("\n%s", vetor[i]);
	}
}