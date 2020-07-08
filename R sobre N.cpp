#include <stdio.h>

void FUNCAO(int, int);
int main(){
	
	int R, N;
	FUNCAO(R, N);
	return 0;
	
}

void FUNCAO(int r, int n){
	float divisao;
	printf("Digite valores para R e para N:\n");
	scanf("%d %d", &r, &n);
	while(r>0&&n>0)
	{
		divisao=(float)r/n;
	   	printf("\nA divisao entre os numeros eh: %.2f\n", divisao);
		printf("Digite valores para R e para N:\n");
		scanf("%d %d", &r, &n);
	}
}