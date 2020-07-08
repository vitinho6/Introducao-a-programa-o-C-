/*João Vitor Moura
Int. à programação, turma 01
Item 02  Lista 15 */
#include <stdio.h>
#include <string.h>
#define TAM 100
#define NOME 15

void ordem(char[][NOME], int[],int);
int main(){
		
	int N, j, matricula[TAM];
	char vetor[TAM][NOME];
	
	printf("Ola este programa ordena nomes e matriculas. Digite a quantidade de dados que vai inserir:\n");//Interação com o usuário
	scanf("%d", &N);//Leitura da quantidade de nomes
	
	printf("Insira os nomes:\n");//Interação com o usuário
	for(j=0; j<N; j++)
		scanf("%s", vetor[j]);//Leitura dos nomes
	
	printf("Insira as matriculas, de acordo com a ordem dos nomes:\n");//Interação com o usuário
	for(j=0; j<N; j++)//Leitura das matriculas vinculadas aos nomes
		scanf("%d", &matricula[j]);

	ordem(vetor, matricula, N);
	
	for(j=0; j<N; j++){//Impressão dos vetores na tela
		printf("\n%s", vetor[j]);
		printf("\t%d", matricula[j]);
	}

	return 0;
}

void ordem(char nomes[][NOME], int matric[], int n){
	
	int i, cont, mat_aux;
	char aux[NOME];
	
	for(i=0; i<n; i++){
		for(cont=0; cont<n-1; cont++){
			 	if(strcmp(nomes[cont],nomes[cont+1])==1){//Comparação da ordem alfabetica dos nomes
					strcpy(aux,nomes[cont]);//Auxiliar recebe o primeiro nome da comparação
					mat_aux = matric[cont];//Ocorrem os mesmos procedimentos de trocas com as matriculas, pois elas devem acompanhar os nomes
					strcpy(nomes[cont],nomes[cont+1]);//A primeira posição da comparação recebe os dados da segunda
					matric[cont] = matric[cont+1]; 
					strcpy(nomes[cont+1], aux);//A segunda posção recebe os dados que eram da primeira, guardados na variàvel auxiliar
					matric[cont+1] = mat_aux;
				}
		}
	}
}
