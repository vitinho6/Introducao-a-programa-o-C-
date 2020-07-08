#include <stdio.h>

int mdc(int, int);
int main(){
	
	int a,b;
	printf("Digite os valores a e de b\n");
	scanf("%d %d", &a, &b);
	printf("O mdc eh: %d\n", mdc(a, b));
	printf("O mmc eh: %d", a*b/mdc(a, b));
}

int mdc(int A, int B){
	
	int menor, aux=1, MDC, maior;
	if(A<B){
		menor=A;
		maior=B;}
	else{
		menor=B;
		maior=A;}
	while(aux!=0)
	{	aux=maior%menor;
	   	MDC=menor;   	
		maior=menor;
		menor=aux;
	}
	return MDC;
	
}