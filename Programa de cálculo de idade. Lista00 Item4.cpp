#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int data, nascimento, aux1, aux2;
	printf("Ol�, este programa calcula a idade baseado na data atual e na data de nascimento do usu�rio.\nEscreva abaixo a data de hoje como um �nico n�mero inteiro de oito d�gitos:\n");
	scanf("%d", &data);
	printf("\nEscreva, agora, da mesma forma, a data de seu nascimento:\n");
	scanf("%d", &nascimento);
	aux1=data/10000;
	aux2=nascimento/10000;
	if (aux1/100 >= aux2/100 && aux1%100 >= aux2%100)//Essa condi��o � necess�ria para idenficar se o usu�rio completou ou n�o anivers�rio at� a data atual.
	printf("A sua idade �: %d", data%10000 - nascimento%10000);	
	else if(aux1 % 100 > aux2 % 100)//Essa condi��o � necess�ria, pois a condi��o anterior n�o inclui casos em que o dia de nascimento � maior, mas o m�s de nasciemento � menor.
	printf("A sua idade �: %d", data%10000 - nascimento%10000);	
	else printf("A sua idade �: %d", data%10000 - nascimento%10000 - 1);
	return 0;
 
}
 
//Esse � o exerc�cio referente ao item 4 da lista 00. 
//Meu nome � Jo�o Vitor Moura, sou aluno da turma 01 de introdu��o � programa��o. Estou cursando Engenharia El�trica.