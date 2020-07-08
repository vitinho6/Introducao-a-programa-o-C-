#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Olá, este programa classifica números inteiros.\nDigite um numero inteiro qualquer:\n");
	scanf("%d", &numero);
	//Abaixo, os testes quanto ao número ser positivo, negativo ou zero.
	if (numero>0)
		printf("O número digitado é positivo.\n");
	else if (numero<0)
		printf("O número digitado é negativo.\n");
	else
		printf("O número digitado é zero.\n");
	
	if (numero%2==0)//Testa se o número é ímpar ou par
		printf("O número digitado é, também, par.");
	else
		printf("O número digitado é, também, ímpar.");	
	
	return 0;
	
}

//Me chamo João Vitor Moura, sou aluno da turma 1 de introdução a programação. Esse exercício corresponde ao item 2 da lista 01.