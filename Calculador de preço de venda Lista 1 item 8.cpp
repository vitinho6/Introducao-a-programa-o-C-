#include <stdio.h>
#include <locale.h>
 
int main(){
 
	setlocale(LC_ALL, "portuguese");
	float custo;
	printf("Ol� este programa calcula o pre�o de venda de um produto, baseado em seu custo de compra. Por favor, digite o pre�o de custo do produto:\n");
	scanf("%f", &custo);
	if (custo<20)
		printf("O valor de venda �: %f", 1.45*custo);//Se o custo � menor que 20, o lucro � de 45%. Portanto o pre�o de venda � o custo+45% do custo
	else	
		printf("O valor de venda �: %f", 1.3*custo);//Se o custo n�o � menor que 20, o lucro � de 30%. Portanto o pre�o de venda � o custo+30% do custo
 
	return 0;
 
 
}

//OBS: Pelo fato de o programa estar em portugues(Linha 6), o ideal � usar a v�rigula para separar os decimais e n�o o ponto como de costume
//Esse � o exerc�cio referente ao item 8 da lista 01. 
//Meu nome � Jo�o Vitor Moura, sou aluno da turma 01 de introdu��o � programa��o. Estou cursando Engenharia El�trica.