/*João Vitor Moura
Int. à programação, turma 01
Item 01  Lista 15 */
#include <stdio.h>
#include <string.h>
#define TAM 50
#define NOME 15

void ordem(char[][NOME],int);
int main(){
		
	int N, j;
	char vetor[TAM][NOME];
	
	printf("Ola este programa ordena nomes. Digite a quantidade de nomes que vai inserir:\n");//Interação com o usuário
	scanf("%d", &N);//Leitura da quantidade de nomes
	
	printf("Insira os nomes:\n");//Interação com o usuário
	
	for(j=0; j<N; j++)
		scanf("%s", vetor[j]);//Leitura dos nomes
	
	ordem(vetor, N);//Aplicação da função no vetor
	for(j=0; j<N; j++)//Impressão do vetor na tela
		printf("\n%s", vetor[j]);
	
	return 0;
}
void ordem(char nomes[][NOME], int n){
	
	int i, cont;
	char aux[NOME];
	
	for(i=0; i<n; i++){
		for(cont=0; cont<n-1; cont++){
			 	if(strcmp(nomes[cont],nomes[cont+1])==1){//Comparação da ordem alfabetica dos nomes
					strcpy(aux,nomes[cont]);//Auxiliar recebe o primeiro nome da comparação
					strcpy(nomes[cont],nomes[cont+1]);//A primeira posição da comparação recebe os dados da segunda 
					strcpy(nomes[cont+1], aux);//A segunda posção recebe os dados que eram da primeira, guardados na variàvel auxiliar
				}
		}
	}
	
}