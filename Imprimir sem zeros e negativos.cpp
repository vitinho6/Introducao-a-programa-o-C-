#include <stdio.h>

int main(){
	
	int vet[20], vet2[20], i;
	printf("Digite os valores do vetor:\n");
	for(i=0;i<20;i++)
		scanf("%d", &vet[i]);

	printf("O vetor sem zeros e negativos eh:\n");
	for(i=0;i<20;i++){
		if(vet[i]>0){
			vet2[i]=vet[i];
			printf("\t%d", vet2[i]);}
	}
	return 0;
}