#include <stdio.h>
#include <locale.h>
 
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numlado;
	float tamlado;
 
	printf("Insira o número de lados do polígono:");
	scanf("%d", &numlado);
	printf("Insira o tamanho dos lados do polígono:");
	scanf("%f", &tamlado);
 
	switch(numlado)
	{
		case 3:printf("A área do polígono é %.2f", tamlado*tamlado*1.73/4);
			break;
		case 4:printf("A área do polígono é %.2f", tamlado*tamlado);
			break;
		case 6:printf("A área do polígono é %.2f", 6*tamlado*tamlado*1.73/4);
			break;
		default:printf("Não sei calcular essa área");
	}
	return 0;
}