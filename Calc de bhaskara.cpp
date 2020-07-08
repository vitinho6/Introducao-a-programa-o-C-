#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, X1, X2, delta;
	int opcao=1;
	while(opcao==1)
	{	
		printf("Olá, este programa calcula as raízes de equações do 2° grau na forma ax²+bx+c=0.  Digite os valores de a, b e c, respectivamente:\n");//Aqui o usuário entra com os valores de a, b e c	
		scanf("%f %f %f", &a, &b, &c);
		delta=(b*b)-(4*a*c);//cálculo do delta
		X1= (-b+sqrtf(delta))/2*a;//cálculo do X para + raiz quadrada de delta
		X2= (-b-sqrtf(delta))/2*a;//cálculo do X para - raiz quadrada de delta
		if(delta<0)//Quando delta é negativo, a equação não possui raízes reais
			printf("A equação não possui raízes nos números reais.\n");
		else if(delta==0)//Quando delta é 0, a raiz da equação é múltipla, ou seja, se repete
			printf("A equação possui raízes multiplas, portanto iguais. A raiz é: %f\n", X1);
		else//Quando delta é positivo a equação possui duas raízes distintas
			printf("As raízes da equação são: %f e %f\n", X1, X2);
		printf("Quer continuar?\n1-Sim\n2-Não\n");
		scanf("%d", &opcao);
			
	}
	return 0;
	//Me chamo João Vitor Moura, sou aluno da turma 01 de introdução à programação. Esse exercício é referente ao item 10 da lista 04.
	}