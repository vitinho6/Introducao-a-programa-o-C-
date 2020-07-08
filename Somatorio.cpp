#include <stdio.h>
#include <math.h>
int main(){
	int i, n;
	float soma=0;
	printf("Ola, este programa calcula o somatorio de um numero. Digite o numero cujo somatorio deseja calcular:\n");
	scanf("%d",&n);
	for(i=1;i<=n-1;i++){//Condição do somatório
		soma+=(pow(n,i)/(n-i));//Operação determinada pela fórmula do somatório dada na questao.
	}
	printf("O somatorio eh: %f", soma);
	return 0;
}
//Me chamo João Vitor Moura, sou aluno da turma 1 de introdução a programação. Esse exercício corresponde ao item 15 da lista 03.