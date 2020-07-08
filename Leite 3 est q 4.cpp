#include <stdio.h>
void leitura(int *ptr);
void impressao(int *ptr);
int main(int argc, char** argv)
{
	int vet[10], *pointer;
	pointer=vet;
	puts("Digite 10 numeros\n");
	leitura(pointer);
	puts("os numeros sao:\n");
	impressao(pointer);
	return 0;
}

void leitura(int *ptr){
	
	int i;
	for(i=0; i<10; i++){
		scanf("%d", &*(ptr+i));
		//ptr++;	
		}
}

void impressao(int *ptr){
	
	int i;
	for(i=0; i<10; i++){
		printf("%d\n", *ptr);
		ptr++;}
	}
	