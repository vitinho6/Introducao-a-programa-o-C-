#include <stdio.h>

int main(){
	
	int numero, cont, verificador;
	printf("Ola, este eh um programa de teste de numeros primos. Digite o numero que deseja testar:\n");
	scanf("%d", &numero);
	verificador=0;
	for(cont=((0-1)*numero);cont<=numero;cont++){ //Controla a divis�o, para que seja feita sempre por n�meros menores ou iguais ao digitado
		
		if(numero%cont==0)
			verificador++;//Verifica quando h� divisor do numero inserido
		
	}
	if(verificador==4)//Se o numero de divisores � maior que dois, o numero tem divisores al�m dele mesmo e de um
		printf("O numero eh primo");
	else
		printf("O numero nao eh primo");
	return 0;
}

//Me chamo Jo�o Vitor Moura, sou aluno da turma 1 de introdu��o a programa��o. Esse exerc�cio corresponde ao item 8 da lista 03.