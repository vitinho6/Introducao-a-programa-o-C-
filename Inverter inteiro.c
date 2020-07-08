#include <stdio.h>

void inverter(int *);
int main()
{

	int num;

	puts("Digite um numero inteiro, o programa ira exibi-lo de forma invertida:\n");
	scanf("%d", &num);
	puts("Invertido: ");
	inverter(&num);
	return 0;
}

void inverter(int *num)
{
	//puts("Invertido: ");
	int aux;
	aux=*num;
	while(aux!=0){
		printf("%d", aux%10);
	}
	*num= *num/10;
}
