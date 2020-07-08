#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int lados;
	float area, medida;
	printf("Ol�, este programa calcula a �re de um pol�gono regular. Digite o n�mero de lados:\n");//O usu�rio entra com o numero de lados
	scanf("%d", &lados);
	printf("Agora, insira a medida dos lados:\n");//O usuario entra com a medida de cada lado
	scanf("%f", &medida);
	switch(lados)
	{
	case 3://Calcula a �rea de um tri�ngulo
		area= medida*medida*1.73/4;
		break;
	case 4://calcula a �rea de um quadril�tero
		area= medida*medida;
		break;
	case 6://Calcula a �rea de um pol�gono de 6 lados
		area= 6*medida*medida*1.73/4;
		break;
	default://Caso o numero de lados n�o seja 3, 4 ou 6
		printf("N�o sei calcular a �rea");
		return 0;//Encerra o programa se o switch caia no default
	}
	printf("A �rea do pol�gono �: %.3f", area);//imprime a area
	return 0;
	
}
//Jo�o Vitor Moura, IP turma 01. Exerc�cio 13, lista 01.