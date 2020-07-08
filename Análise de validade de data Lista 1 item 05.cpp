#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int dia, mes, ano;
	printf("Ol�, este programa � um teste de validade de data.\nPor favor, insira abaixo o n�mero inteiro correspondente ao dia:\n");
	scanf("%d", &dia);
	printf("Agora, escreva o n�mero inteiro correspondente ao m�s:\n");
	scanf("%d", &mes);
	printf("Por �ltimo, digite o numero inteiro correspondente ao ano:\n");
	scanf("%d", &ano);
	if (dia<=0||dia>=32||mes<=0||mes>=13||ano<=0)//Condi��o geral de invalidade da data
		printf("A data � inv�lida!");
	else if (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12 && (dia>0 && dia<=31))//Condi��o de validade dos meses que t�m 31 dias. N�o � necess�ria condi��o de invalidade para esses meses pois a condi��o anterior j� abrange as poss�veis invalidades desses meses.
		printf("A data � v�lida!");
	else if(mes==4||mes==6||mes==9||mes==11 && dia == 31)//Condi��o de invalidade do dia 31 em meses de 30 dias
		printf("A data � inv�lida!");
	else if (mes==4||mes==6||mes==9||mes==11 && (dia>0 && dia <=30))//Condi��o de validade dos meses que t�m 30 dias
		printf("A data � v�lida!");
	else if (mes==2 && dia>29)//Condi��o de invalidade do m�s de feveireiro, independentemente de o ano ser ou n�o bissexto. N�o � necess�rio acrescentar a condi��o "dia<=0" pois ela j� foi acrescentda aneriormente
		printf("A data � inv�lida!");
	else if(mes==2 && ano%4==0 && ano%100!=0 && (dia>0 && dia<=29))//Condi��o do m�s de feveireiro para anos bissextos m�ltiplos de 4 e n�o m�ltiplos de 100
		printf("A data � v�lida!");
	else if (mes==2 && ano%400==0 && (dia>0 && dia<=29))//Condi��o para o m�s de feveireiro em anos bissextos m�ltiplos de 400
		printf("A data � v�lida!");
	else if (mes==2 && ano%4!=0 && (dia>0 && dia<=28))//Condi��o de validade do mes de feveireiro para anos n�o-bissextos. N�o � necess�rio incluir "ano%400!=0" pois todo ano n�mero que n�o � m�ltiplo de 4, n�o � m�ltiplo de 400
		printf("A data � v�lida!");
	else
		printf("A data � inv�lida!");
	
	return 0;
}

//Esse � o exerc�cio referente ao item 5 da lista 01. 
//Meu nome � Jo�o Vitor Moura, sou aluno da turma 01 de introdu��o � programa��o. Estou cursando Engenharia El�trica.