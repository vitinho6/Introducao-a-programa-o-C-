#include <stdio.h>

int main(){
	char simbolo;
	float n1, n2;
	printf("Digite o simbolo da operacao desejada:\n");
	scanf("%c", &simbolo);
	printf("Agora, digite os dois numeros com os quais quer realizar a operacao:\n");
	scanf("%f %f", &n1, &n2);
	switch(simbolo){
		case '+':
			printf("Soma: %f", n1+n2);
			break;
		case '-':
			printf("Diferenca: %f", n1-n2);
			break;
		case '/':
			printf("Quociente: %f", n1/n2);
			break;
		default:
			printf("Produto: %f", n1*n2);
	}
	return 0;
}		