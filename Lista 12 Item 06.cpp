/*João Vitor Moura
IP 01
Lista 12 Item 6*/
#include <stdio.h>

void inverter(int *);
int main()
{

	int num;

	puts("Digite um numero inteiro, o programa ira exibi-lo de forma invertida:\n");
	scanf("%d", &num);


	puts("Invertido: ");
	inverter(&num);
	printf("%d", num);

	return 0;
}

void inverter(int *num)
{
	int aux=*num;

	*num = 0;
	
	while(aux != 0)
	{

		*num = (*num+aux % 10) * 10;
		aux = aux / 10;
	}
	*num=*num/10;
}