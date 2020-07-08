#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int dia, mes, ano;
	printf("Olá, este programa é um teste de validade de data.\nPor favor, insira abaixo o número inteiro correspondente ao dia:\n");
	scanf("%d", &dia);
	printf("Agora, escreva o número inteiro correspondente ao mês:\n");
	scanf("%d", &mes);
	printf("Por último, digite o numero inteiro correspondente ao ano:\n");
	scanf("%d", &ano);
	if (dia<=0||dia>=32||mes<=0||mes>=13||ano<=0)//Condição geral de invalidade da data
		printf("A data é inválida!");
	else if (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12 && (dia>0 && dia<=31))//Condição de validade dos meses que têm 31 dias. Não é necessária condição de invalidade para esses meses pois a condição anterior já abrange as possíveis invalidades desses meses.
		printf("A data é válida!");
	else if(mes==4||mes==6||mes==9||mes==11 && dia == 31)//Condição de invalidade do dia 31 em meses de 30 dias
		printf("A data é inválida!");
	else if (mes==4||mes==6||mes==9||mes==11 && (dia>0 && dia <=30))//Condição de validade dos meses que têm 30 dias
		printf("A data é válida!");
	else if (mes==2 && dia>29)//Condição de invalidade do mês de feveireiro, independentemente de o ano ser ou não bissexto. Não é necessário acrescentar a condição "dia<=0" pois ela já foi acrescentda aneriormente
		printf("A data é inválida!");
	else if(mes==2 && ano%4==0 && ano%100!=0 && (dia>0 && dia<=29))//Condição do mês de feveireiro para anos bissextos múltiplos de 4 e não múltiplos de 100
		printf("A data é válida!");
	else if (mes==2 && ano%400==0 && (dia>0 && dia<=29))//Condição para o mês de feveireiro em anos bissextos múltiplos de 400
		printf("A data é válida!");
	else if (mes==2 && ano%4!=0 && (dia>0 && dia<=28))//Condição de validade do mes de feveireiro para anos não-bissextos. Não é necessário incluir "ano%400!=0" pois todo ano número que não é múltiplo de 4, não é múltiplo de 400
		printf("A data é válida!");
	else
		printf("A data é inválida!");
	
	return 0;
}

//Esse é o exercício referente ao item 5 da lista 01. 
//Meu nome é João Vitor Moura, sou aluno da turma 01 de introdução à programação. Estou cursando Engenharia Elétrica.