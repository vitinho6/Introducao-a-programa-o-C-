/*Jo�o Vitor Moura
Int. � programa��o, turma 01
Item 06  Lista 6 */
#include <stdio.h>
#include <locale.h>
#define TAM 30

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float vetor[TAM], soma=0, media;
	int N_termos, i, cont_maior=0;

	printf("Ol�, este � um contador de n�meros de um array maiores que a m�dia. Digite um tamanho para o array:(OBS.:M�x=30)\n");//O usu�rio diz o tamanho
	scanf("%d", &N_termos);

	printf("Agora, digite os n�meros desse array:\n");//Preenchimento do Array
	for(i=0;i<N_termos;i++)
		scanf("%f", &vetor[i]);
	
	for(i=0;i<N_termos;i++)//Soma dos termos
		soma+=vetor[i];
	
	media=(float)soma/i;//C�lculo da m�dia(Usou-se o (float) pois era uma divis�o por inteiro com resultado real
	
	for(i=0;i<N_termos;i++){//Compara��o dos elementos com a m�dia
		if(vetor[i]>media)
			cont_maior++;
	}
	
	printf("H� %d numeros maiores que a m�dia.", cont_maior);
	
	return 0;
}

/*Como o programa est� em portugues, o ideal � usar v�rgula para separar decimais!*/