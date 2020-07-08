#include <stdio.h>
int main(){
	float custo, lucro, venda;
	printf("Digite o custo do produto:\n");
	scanf("%f", &custo);
	(custo<20)?lucro=0.45*custo:lucro=0.30*custo;
	venda=custo+lucro;
	printf("O preco de venda eh: %.2f", venda);
	return 0;
}