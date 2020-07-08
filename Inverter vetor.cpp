#include <stdio.h>

void inverter(int[]);
int main(){
	
	int vetor1[20], c;
	printf("Digite os valores do vetor:\n");
	for(c=0;c<20;c++)
		scanf("%d", &vetor1[c]);
	for(c=0;c<20;c++)
	   	printf("%d\t", vetor1[c]);
	
    printf("\n");
    inverter(vetor1);
	for(c=0;c<20;c++)
		printf("%d\t", vetor1[c]);
	return 0;
}

void inverter(int vetor[]){
      int i, j=19, aux;
      for(i=0;i<10;i++){
	   	aux=vetor[i];           
       	vetor[i]=vetor[j]; 
		vetor[j]=aux;
		j--;
	  }		

}