/*João Vitor Moura
Int. à programação, turma 01
Item 06  Lista 6 */
#include <stdio.h>
#include <locale.h>
#define TAM 30

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float vetor[TAM], soma=0, media;
	int N_termos, i, cont_maior=0;

	printf("Olá, este é um contador de números de um array maiores que a média. Digite um tamanho para o array:(OBS.:Máx=30)\n");//O usuário diz o tamanho
	scanf("%d", &N_termos);

	printf("Agora, digite os números desse array:\n");//Preenchimento do Array
	for(i=0;i<N_termos;i++)
		scanf("%f", &vetor[i]);
	
	for(i=0;i<N_termos;i++)//Soma dos termos
		soma+=vetor[i];
	
	media=(float)soma/i;//Cálculo da média(Usou-se o (float) pois era uma divisão por inteiro com resultado real
	
	for(i=0;i<N_termos;i++){//Comparação dos elementos com a média
		if(vetor[i]>media)
			cont_maior++;
	}
	
	printf("Há %d numeros maiores que a média.", cont_maior);
	
	return 0;
}

/*Como o programa está em portugues, o ideal é usar vírgula para separar decimais!*/