#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Ol�, este programa classifica n�meros inteiros.\nDigite um numero inteiro qualquer:\n");
	scanf("%d", &numero);
	//Abaixo, os testes quanto ao n�mero ser positivo, negativo ou zero.
	if (numero>0)
		printf("O n�mero digitado � positivo.\n");
	else if (numero<0)
		printf("O n�mero digitado � negativo.\n");
	else
		printf("O n�mero digitado � zero.\n");
	
	if (numero%2==0)//Testa se o n�mero � �mpar ou par
		printf("O n�mero digitado �, tamb�m, par.");
	else
		printf("O n�mero digitado �, tamb�m, �mpar.");	
	
	return 0;
	
}

//Me chamo Jo�o Vitor Moura, sou aluno da turma 1 de introdu��o a programa��o. Esse exerc�cio corresponde ao item 2 da lista 01.