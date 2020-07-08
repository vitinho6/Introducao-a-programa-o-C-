#include <stdio.h>
#include <locale.h>
 
int main(){
 
	setlocale(LC_ALL, "portuguese");
	float custo;
	printf("Olá este programa calcula o preço de venda de um produto, baseado em seu custo de compra. Por favor, digite o preço de custo do produto:\n");
	scanf("%f", &custo);
	if (custo<20)
		printf("O valor de venda é: %f", 1.45*custo);//Se o custo é menor que 20, o lucro é de 45%. Portanto o preço de venda é o custo+45% do custo
	else	
		printf("O valor de venda é: %f", 1.3*custo);//Se o custo não é menor que 20, o lucro é de 30%. Portanto o preço de venda é o custo+30% do custo
 
	return 0;
 
 
}

//OBS: Pelo fato de o programa estar em portugues(Linha 6), o ideal é usar a vírigula para separar os decimais e não o ponto como de costume
//Esse é o exercício referente ao item 8 da lista 01. 
//Meu nome é João Vitor Moura, sou aluno da turma 01 de introdução à programação. Estou cursando Engenharia Elétrica.