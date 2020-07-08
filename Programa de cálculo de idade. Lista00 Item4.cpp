#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int data, nascimento, aux1, aux2;
	printf("Olá, este programa calcula a idade baseado na data atual e na data de nascimento do usuário.\nEscreva abaixo a data de hoje como um único número inteiro de oito dígitos:\n");
	scanf("%d", &data);
	printf("\nEscreva, agora, da mesma forma, a data de seu nascimento:\n");
	scanf("%d", &nascimento);
	aux1=data/10000;
	aux2=nascimento/10000;
	if (aux1/100 >= aux2/100 && aux1%100 >= aux2%100)//Essa condição é necessária para idenficar se o usuário completou ou não aniversário até a data atual.
	printf("A sua idade é: %d", data%10000 - nascimento%10000);	
	else if(aux1 % 100 > aux2 % 100)//Essa condição é necessária, pois a condição anterior não inclui casos em que o dia de nascimento é maior, mas o mês de nasciemento é menor.
	printf("A sua idade é: %d", data%10000 - nascimento%10000);	
	else printf("A sua idade é: %d", data%10000 - nascimento%10000 - 1);
	return 0;
 
}
 
//Esse é o exercício referente ao item 4 da lista 00. 
//Meu nome é João Vitor Moura, sou aluno da turma 01 de introdução à programação. Estou cursando Engenharia Elétrica.