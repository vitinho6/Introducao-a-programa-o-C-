#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, X1, X2, delta;
	int opcao=1;
	while(opcao==1)
	{	
		printf("Ol�, este programa calcula as ra�zes de equa��es do 2� grau na forma ax�+bx+c=0.  Digite os valores de a, b e c, respectivamente:\n");//Aqui o usu�rio entra com os valores de a, b e c	
		scanf("%f %f %f", &a, &b, &c);
		delta=(b*b)-(4*a*c);//c�lculo do delta
		X1= (-b+sqrtf(delta))/2*a;//c�lculo do X para + raiz quadrada de delta
		X2= (-b-sqrtf(delta))/2*a;//c�lculo do X para - raiz quadrada de delta
		if(delta<0)//Quando delta � negativo, a equa��o n�o possui ra�zes reais
			printf("A equa��o n�o possui ra�zes nos n�meros reais.\n");
		else if(delta==0)//Quando delta � 0, a raiz da equa��o � m�ltipla, ou seja, se repete
			printf("A equa��o possui ra�zes multiplas, portanto iguais. A raiz �: %f\n", X1);
		else//Quando delta � positivo a equa��o possui duas ra�zes distintas
			printf("As ra�zes da equa��o s�o: %f e %f\n", X1, X2);
		printf("Quer continuar?\n1-Sim\n2-N�o\n");
		scanf("%d", &opcao);
			
	}
	return 0;
	//Me chamo Jo�o Vitor Moura, sou aluno da turma 01 de introdu��o � programa��o. Esse exerc�cio � referente ao item 10 da lista 04.
	}