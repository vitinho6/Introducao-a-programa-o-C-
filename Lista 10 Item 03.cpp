/*Jo�o Vitor Moura
IP 01
Lista 10 Item 3*/
#include <stdio.h>

int MDC(int num1, int num2);

int main(){
	
	int num1, num2, mdc;
	
	puts("Digite os numeros de cujo MDC deseja calcular:\n");
	scanf("%d %d", &num1, &num2);
	
	mdc=MDC(num1, num2);
	printf("\nO mdc entre os numeros eh: %d", mdc);
	
	return 0;
}

int MDC(int num1, int num2){

	if(num2==0)
		return num1;//Se o segundo numero � zero, o mdc ser� o primeiro
	else
		return MDC(num2, num1%num2);//Passamos o resto da divis�o como segundo argumento a fim de realizar o processo at� que ele seja zero e a fun��o entre no primeiro if
}
