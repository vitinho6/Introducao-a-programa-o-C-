#include <stdio.h>
#include <locale.h>
 
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numlado;
	float tamlado;
 
	printf("Insira o n�mero de lados do pol�gono:");
	scanf("%d", &numlado);
	printf("Insira o tamanho dos lados do pol�gono:");
	scanf("%f", &tamlado);
 
	switch(numlado)
	{
		case 3:printf("A �rea do pol�gono � %.2f", tamlado*tamlado*1.73/4);
			break;
		case 4:printf("A �rea do pol�gono � %.2f", tamlado*tamlado);
			break;
		case 6:printf("A �rea do pol�gono � %.2f", 6*tamlado*tamlado*1.73/4);
			break;
		default:printf("N�o sei calcular essa �rea");
	}
	return 0;
}