#include <stdio.h>
#include <math.h>
int main(){
	int i, n;
	float soma=0;
	printf("Ola, este programa calcula o somatorio de um numero. Digite o numero cujo somatorio deseja calcular:\n");
	scanf("%d",&n);
	for(i=1;i<=n-1;i++){//Condi��o do somat�rio
		soma+=(pow(n,i)/(n-i));//Opera��o determinada pela f�rmula do somat�rio dada na questao.
	}
	printf("O somatorio eh: %f", soma);
	return 0;
}
//Me chamo Jo�o Vitor Moura, sou aluno da turma 1 de introdu��o a programa��o. Esse exerc�cio corresponde ao item 15 da lista 03.