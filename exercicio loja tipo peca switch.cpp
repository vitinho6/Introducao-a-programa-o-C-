#include <stdio.h>

int main(){
	int qtd, tipo;
	float preco, desconto;
	printf("Qual o tipo de peca? 1, 2 ou 3:\n");
	scanf("%d", &tipo);
	printf("Qual a quantidade?\n");
	scanf("%d", &qtd);
	switch(tipo)
	{
	case 1: 
		preco=1.5;
		desconto=preco*0.2;
		printf("Voce comprou parafusos. A quantidade foi %d, o desconto foi %.2f e o preco total a pagar foi %.2f", qtd, qtd*desconto, qtd*(preco-desconto));
		break;
	case 2:
		preco=2.0;
		desconto=0.1*preco;
		printf("Voce comprou porcas. A quantidade foi %d, o desconto %.2f e o preco total a pagar %.2f", qtd, qtd*desconto, qtd*(preco-desconto));
		break;
	default:
		preco=1.0;
		desconto=0.3*preco;
		printf("Voce comprou arruelas. A quantidade foi %d, o desconto %.2f e o preco total a pagar %.2f", qtd, qtd*desconto, qtd*(preco-desconto));

		break;
	}
	return 0;
}
