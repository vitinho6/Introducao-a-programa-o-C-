#include <stdio.h>
void separar (int data, int *dia, int *mes, int *ano);
int main(){
	
	int data, dia, mes, ano;
	puts("Digite a data como um único inteiro de 8 digitos:\n");
	scanf("%d", &data);
	separar(data, &dia, &mes, &ano);
	printf("A data eh %02d/%02d/%04d\n", dia, mes, ano);
	
	return 0;
}

void separar (int data, int *dia, int *mes, int *ano){
	
	*ano=data%10000;
	*dia=data/1000000;
	*mes=(data/10000)%100;
}