#include <stdio.h>

int main(){
	int n, cont=1, termo=1;
	double soma=0;
	printf("Esse programa realiza soma a sooma dos terpos da sequencia(1, 2, 4, 8...). Quantos termos deseja somar?\n");//O programa recebe a quantidade de termos 
	scanf("%d", &n);
	while(cont<=n){//A condi��o de parada � quando a soma atingir a quantidade de termos
		soma+=termo;//o somat�rio(tambem poderia ser escrito: pow(2,n) - 1
		termo*=2;//Aplica��o da raz�o da pg
		cont++;
		
	}
	printf("A soma eh: %.lf", soma);	
	
}
//Me chamo Jo�o Vitor Moura, sou aluno da turma 01 de introdu��o � programa��o. Este exerc�cio � referente ao item 7 da lista 03.