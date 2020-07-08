#include <stdio.h>
#include <locale.h>
 
int main(){
	setlocale(LC_ALL, "Portuguese");
	float salariomin, rendamensal, imposto1, imposto2, imposto3, imposto4;
	int dependentes;
	salariomin=954;
	printf("Olá, este é um programa de cálculo do imposto de renda.\nInsira abaixo sua renda mensal:\n");
	scanf("%f", &rendamensal);
	printf("Agora, digite o número de depentes:\n");
	scanf("%d", &dependentes);
	imposto1=0.05*rendamensal-0.05*salariomin*dependentes;
	imposto2=0.1*rendamensal-0.05*salariomin*dependentes;
	imposto3=0.15*rendamensal-0.05*salariomin*dependentes;
	imposto4=0.2*rendamensal-0.05*salariomin*dependentes;
	if ((imposto1<0||imposto2<0||imposto3<0||imposto4<0)||(rendamensal<=2*salariomin))//Condições de isenção: baixa renda ou desconto superior ao imposto
		printf("Você está isento do imposto de renda");
	else if (rendamensal<=3*salariomin)//Condição correspondente ao renda na faixa de 2 a 3 salários mínimos
		printf("O seu imposto de renda é: %.3f", imposto1);
	else if (rendamensal<=5*salariomin)//Condição correspondente ao renda na faixa de 3 a 5 salários mínimos
		printf("O seu imposto de renda é: %.3f", imposto2);
	else if (rendamensal <=7*salariomin)//Condição correspondente a renda na faixa de 5 a 7 salários mínimos
		printf("O seu imposto de renda é: %.3f", imposto3);
	else//Caso não corresponda as condições, a renda é superior a 7 salários mínimos. Portanto é calculada em imposto4(linha 16)
		printf("O seu imposto de renda é: %.3f", imposto4);
 
	return 0;
 
}
 
//Esse é o exercício referente ao item 12 da lista 01. 
//Meu nome é João Vitor Moura, sou aluno da turma 01 de introdução à programação. Estou cursando Engenharia Elétrica.
//OBS: Pelo fato de o programa estar em portugues(Linha 5), o ideal é usar a vírigula para separar os decimais e não o ponto como de costume