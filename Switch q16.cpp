#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	float soma, produto, diferenca, quociente, numero1, numero2;
	printf("Ol�, este programa realiza opera��es matem�ticas. Digite sua op��o:\n1-Multiplicar\n2-Somar\n3-Subtrair\n4-Dividir\n");//Imprime as op��es que o usu�rio tem
	scanf("%d",&opcao);
	printf("Agora, digite os numeros, separando-os por espa�o:\n");//Abre a entrada para os n�meros que o usu�rio quer utilizar na opera��o escolhida
	scanf("%f %f", &numero1, &numero2);
	soma= (numero1+numero2);//Realiza a soma dos n�meros, que s� ser� impressa caso o usu�rio tenha escolhido a op��o "somar". O mesmo � v�lido para as opera��es nas 3 pr�ximas linhas.
	quociente= (numero1/numero2);
	produto= (numero1*numero2);
	diferenca= (numero1-numero2);
	switch(opcao)//Analisa a op��o escolhida
	{
	case 1://Op��o 1, multiplicar
		printf("O produto entre os n�meros �: %.3f", produto);
		break;
	case 2://Op��o 2, somar
		printf("A soma entre os n�meros: %.3f", soma);
		break;
	case 3://Op��o 3, subtrair
		printf("A diferen�a entre os n�meros �: %.3f", diferenca);
		break;
	default:// Caso o usiu�rio n�o tenha escolhido uma das anteriores, ele deve ter escolhido a op��o 4, dividir
		printf("O quociente entre os n�meros �: %.3f", quociente);
	}
	return 0;
}
//Me chamo Jo�o Vitor Moura, sou aluno da turma 01 de introdu��o � programa��o. Esse exerc�cio � referente ao item 16 da lista 01.
//OBS: Como o programa est� em portugu�s(linha 4), o ideal � usar a v�rgula para separar decimais e n�o o ponto, como de costume.