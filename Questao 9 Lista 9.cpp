/*Jo�o Vitor Moura
Int. � programa��o, turma 01
Item 09  Lista 9 */
#include <stdio.h>

int primo(int[], int[]);
int main(){
	
	int vetor_k[15], i, array_p[15], x;
	printf("Ola, este programa imprimira os numeros primos do vetor inserido. Digite os elementos do vetor, lembre-se, que devem ser numeros naturais:\n");//O usu�rio entra com os numeros do vetor
	for(i=0;i<15;i++)
		scanf("%d", &vetor_k[i]);//� feita a leitura do vetor
	x=primo(vetor_k, array_p);//Chamada da fun��o
	printf("O vetor dos primos eh:\n");
	for(i=0; i<x; i++){//impress�o do vetor dos primos
		printf("%d", array_p[i]);
		printf("\t");
	}
	
	return 0;
}

int primo(int vetk[], int vetp[]){
	
	int j, cont=0, aux, c=0;
	for(j=0;j<15;j++){
		for(aux=vetk[j];aux>=1;aux--){
			if(vetk[j]%aux==0)//Se o numero � divis�vel por outro, o contador aumenta
				cont++;
		}
		if(cont==2){//Se o contador for 2, o numero � primo, pois s� � divis�vel por 1 e por ele mesmo
			vetp[c]=vetk[j];
			c++;
		}
		cont=0;//o contador � zerado antes do rein�cio da opera��o
	}
	return c;//a fun��o retorna o numero de elementos primos,
}