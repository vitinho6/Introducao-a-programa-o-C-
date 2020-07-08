/* João Vitor Moura
IP 01; Lista 13 Item 04*/

#include <stdio.h>

void modifica_A(int Matriz[][10]);
void modifica_B(int Matriz[][10]);
int main(){
	
	int Matriz[10][10], i, j;
	
	printf("Dada uma matriz10x10, o programa trocara primeiramente\nlinha2 com linha 8 e, segundo\ncoluna 4 com coluna 10\nDigite os elementos da matriz:\n");
	for(i=0; i<10; i++)
		for(j=0;j<10;j++)
			scanf("%d", &Matriz[i][j]);
	for(i=0; i<10; i++){
		for(j=0;j<10;j++){
			printf("%d", Matriz[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	
	modifica_A(Matriz);
	printf("Apos a primeira modificacao:\n");

	for(i=0; i<10; i++){
		for(j=0;j<10;j++){
			printf("%d", Matriz[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	modifica_B(Matriz);
	printf("Apos a segunda modificacao:\n");	
	for(i=0; i<10; i++){
		for(j=0;j<10;j++){
			printf("%d", Matriz[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}

void modifica_A(int Matriz[][10]){
	
	int j, aux[10];
	
	for(j=0;j<10;j++){
		aux[j]=Matriz[7][j];
		Matriz[7][j]=Matriz[1][j];
		Matriz[1][j] = aux[j];
	}
}

void modifica_B(int Matriz[][10]){
	
	int i, aux[10];
	
	for(i=0; i<10; i++){
		aux[i]=Matriz[i][9];
		Matriz[i][9]=Matriz[i][3];
		Matriz[i][3] = aux[i];
	}
		
}