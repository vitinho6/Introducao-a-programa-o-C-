#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	float salario, prestacao, taxalimite;
	printf("Olá, este prgrama testará se seu salário é compatível com o valor da prestação da nova linha de crédito do banco.\nPor favor digite seu salário:\n");
	scanf("%f", &salario);
	printf("Agora, digite o valor da prestação que você irá pagar pelo seu empréstimo:\n");
	scanf("%f", &prestacao);
	taxalimite=salario*0.3;//Indica o limite máximo de valor da prestação.
	if (prestacao<=taxalimite)//Nesse caso, o valor máximo da prestação equivale a 30% do salário.
		printf("Salário compatível, o empréstimo pode ser concedido.");
	else
		printf("Salário imcompatível, o empréstimo não pode ser concedido.");	
	
	return 0;
}

//Me chamo João Vitor Moura, sou aluno da turma 1 de introdução a programação. Esse exercício corresponde ao item 3 da lista 01.