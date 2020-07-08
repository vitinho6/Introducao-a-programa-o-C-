#include <stdio.h>
#include <math.h>
//int main(){
//	int cont;
//	float raio, altura, pi=3.14;
//	for(cont=1;cont<=3;cont++){
//		printf("Digite o raio da base e a altura:\n");
//		scanf("%f %f", &raio,&altura);
//		printf("A area eh: %.3f\n", pi*raio*raio*altura);
//	}
//	return 0;
//}

//int main(){
//	int cont, n, soma=0;
//	for(cont=1;cont<=10;cont++){
//		printf("Digite um numero inteiro positivo:\n");
//		scanf("%d", &n);
//		soma+=n;
//	}
//	printf("A soma eh: %d", soma);
//	return 0;
//}

//int main(){
//	int cont, somapar=0, somaimp=0, n;
//	printf("Digite 10 inteiros positivos:\n"); 	
//	for(cont=1;cont<=10;cont++){
//		   scanf("%d", &n);	
//		   (n%2==0)?somapar+=n:somaimp+=n;	
//	}
//	printf("A soma dos pares eh %d e dos impares %d", somapar, somaimp);
//	return 0;
//}

int main(){
   int n=1, fatorial, z=0, i=1;	
	printf("Digite o numero:\n");
	scanf("%d", &n);
	while((n-z)>=1){
			fatorial*=(n-z);
			z++;
 	 }
 	 printf("O fatorial eh:%d", fatorial);
	return 0;
}