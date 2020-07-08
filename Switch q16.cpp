#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	float soma, produto, diferenca, quociente, numero1, numero2;
	printf("Olá, este programa realiza operações matemáticas. Digite sua opção:\n1-Multiplicar\n2-Somar\n3-Subtrair\n4-Dividir\n");//Imprime as opções que o usuário tem
	scanf("%d",&opcao);
	printf("Agora, digite os numeros, separando-os por espaço:\n");//Abre a entrada para os números que o usuário quer utilizar na operação escolhida
	scanf("%f %f", &numero1, &numero2);
	soma= (numero1+numero2);//Realiza a soma dos números, que só será impressa caso o usuário tenha escolhido a opção "somar". O mesmo é válido para as operações nas 3 próximas linhas.
	quociente= (numero1/numero2);
	produto= (numero1*numero2);
	diferenca= (numero1-numero2);
	switch(opcao)//Analisa a opção escolhida
	{
	case 1://Opção 1, multiplicar
		printf("O produto entre os números é: %.3f", produto);
		break;
	case 2://Opção 2, somar
		printf("A soma entre os números: %.3f", soma);
		break;
	case 3://Opção 3, subtrair
		printf("A diferença entre os números é: %.3f", diferenca);
		break;
	default:// Caso o usiuário não tenha escolhido uma das anteriores, ele deve ter escolhido a opção 4, dividir
		printf("O quociente entre os números é: %.3f", quociente);
	}
	return 0;
}
//Me chamo João Vitor Moura, sou aluno da turma 01 de introdução à programação. Esse exercício é referente ao item 16 da lista 01.
//OBS: Como o programa está em português(linha 4), o ideal é usar a vírgula para separar decimais e não o ponto, como de costume.