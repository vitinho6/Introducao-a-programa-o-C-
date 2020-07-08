/*João Vitor Moura
Int. à programação, turma 01
Item 11  Lista 9 */

#include <stdio.h>
#include <stdlib.h>
#define tam 100

int copiar(int[], int[], int);

int main(){
	
	system("Color 5F");
	int vetor_A[tam], vetor_B[tam], i, n, nro_pos_b;
	
	printf("Ola, este programa imprime um novo vetor, retirando os elementos nulos e negativos do vetor digitado.\nDigite o numero de posiçoes do vetor que voce vai digitar:\n");//O usuário informa o tamano do vetor desejado
	scanf("%d", &n);
	
	printf("Agora, digite os elementos do vetor:\n");//O usuário preenche o vetor
	for(i=0; i<n; i++)
		scanf("%d", &vetor_A[i]);
	
	nro_pos_b=copiar(vetor_A, vetor_B, n);//Chamada da função, seu retorno determina o numero de posições do novo vetor
	
	if(nro_pos_b>0){//Aqui há um if-else para impressão, pois, se o usuário digitar todos os elementos nulos ou negativos, não há novo vetor
		
		printf("O novo vetor eh:\n");//impressão do vetor
		for(i=0; i<nro_pos_b; i++){
			printf("%d", vetor_B[i]);
			printf("\t");
		}
	}
	
	else//Impressão da mensagem, caso todos os elementos sejam nulos ou negativos
		printf("O vetor digitado eh, exclusivamente, de zeros e negativos.");
	
	return 0;
} 

int copiar(int vetA[], int vetB[], int N){
	
	int j, n_p_b=0;
	
	for(j=0; j<N; j++){//Usamos o for para analisar todos os elementos digitados, mas só copiamos no novo vetor se forem maiores que zero
	
		if(vetA[j]>0){
			vetB[n_p_b]=vetA[j]; 
			n_p_b++;
		}
	}
	
	return n_p_b;
}