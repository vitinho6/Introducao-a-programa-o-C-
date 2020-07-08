#include <stdio.h>
#include <locale.h>
 
int main(){
	setlocale(LC_ALL, "Portuguese");
	float salariomin, rendamensal, imposto1, imposto2, imposto3, imposto4;
	int dependentes;
	salariomin=954;
	printf("Ol�, este � um programa de c�lculo do imposto de renda.\nInsira abaixo sua renda mensal:\n");
	scanf("%f", &rendamensal);
	printf("Agora, digite o n�mero de depentes:\n");
	scanf("%d", &dependentes);
	imposto1=0.05*rendamensal-0.05*salariomin*dependentes;
	imposto2=0.1*rendamensal-0.05*salariomin*dependentes;
	imposto3=0.15*rendamensal-0.05*salariomin*dependentes;
	imposto4=0.2*rendamensal-0.05*salariomin*dependentes;
	if ((imposto1<0||imposto2<0||imposto3<0||imposto4<0)||(rendamensal<=2*salariomin))//Condi��es de isen��o: baixa renda ou desconto superior ao imposto
		printf("Voc� est� isento do imposto de renda");
	else if (rendamensal<=3*salariomin)//Condi��o correspondente ao renda na faixa de 2 a 3 sal�rios m�nimos
		printf("O seu imposto de renda �: %.3f", imposto1);
	else if (rendamensal<=5*salariomin)//Condi��o correspondente ao renda na faixa de 3 a 5 sal�rios m�nimos
		printf("O seu imposto de renda �: %.3f", imposto2);
	else if (rendamensal <=7*salariomin)//Condi��o correspondente a renda na faixa de 5 a 7 sal�rios m�nimos
		printf("O seu imposto de renda �: %.3f", imposto3);
	else//Caso n�o corresponda as condi��es, a renda � superior a 7 sal�rios m�nimos. Portanto � calculada em imposto4(linha 16)
		printf("O seu imposto de renda �: %.3f", imposto4);
 
	return 0;
 
}
 
//Esse � o exerc�cio referente ao item 12 da lista 01. 
//Meu nome � Jo�o Vitor Moura, sou aluno da turma 01 de introdu��o � programa��o. Estou cursando Engenharia El�trica.
//OBS: Pelo fato de o programa estar em portugues(Linha 5), o ideal � usar a v�rigula para separar os decimais e n�o o ponto como de costume