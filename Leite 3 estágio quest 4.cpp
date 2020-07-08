#include <stdio.h>
void leitura(int vet[], int *ptr);
void impressao(int *ptr);
int main(int argc, char** argv)
{
	int vet[10], *pointer;
	puts("Digite 10 numeros\n");
	leitura(vet, pointer);
	puts("os numeros sao:\n");
	impressao(pointer);
	return 0;
}

void leitura(int vet[], int *ptr){
	
	int i;
	for(i=0; i<10; i++)
		scanf("%d", &vet[i]);
	ptr=vet;
}

void impressao(int *ptr){
	
	int i;
	for(i=0; i<10; i++){
		printf("%d\n", *ptr);
		ptr++;}
	}