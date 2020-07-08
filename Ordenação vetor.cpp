#include <stdio.h>
#include <string.h>
#define TAM 50
#define LETRAS 15

void ordem(char[][LETRAS], int );
int main(){
	
	int N, i;
	char NOMES[TAM][LETRAS];
	printf("Digite a quantidade de nomes que deseja inserir:\n");
	scanf("%d", &N);
	printf("Agora, digite os nomes:\n");
	for(i=0;i<N;i++){
		scanf("%s", NOMES[i]);
		fflush(stdin);}
				
	ordem(NOMES, N);
	for(i=0;i<N;i++)
		printf("\n%s", NOMES[i]);
	
	return 0;	
}
void ordem(char nomes[], int n){
	int cont, j;
	char aux[1][LETRAS];
	for(cont=1;cont<n;cont++){
		for(j=0;j<n-1;j++){
			if(strcmp(nomes[cont],nomes[cont+1])==1){
				strcpy(aux[1],nomes[cont]);
				strcpy(nomes[cont],nomes[cont+1]);
				strcpy(nomes[cont+1], aux[1]);
				}
		}
	}
}
