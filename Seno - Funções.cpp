#include <stdio.h>
#include <math.h>

int fatorial(int);
float seno(float);
int main(){
	
	float ang;
	int n, i=1;
	printf("Digite a quantidade de angulos que vai inserir:\n");
	scanf("%d", &n);
	while(i<=n)
	{
		printf("Digite o angulo(EM RADIANOS):\n");
		scanf("%f", &ang);
		printf("O seno de %.4f eh %.2f\n", ang, seno(ang) );
		i++;
	}
	return 0;
}

int fatorial(int exp){
	int j=1, fat=1;
	while(j<=exp)
	{
		fat*=j;
		j++;
	}
	
	return fat;
	
}

float seno(float angulo){
	
	int exp=1, sinal=1;
	float sen=0;
	while(exp<=11){
		sen+=(float)sinal*(pow(angulo, exp)/fatorial(exp));
		sinal*=-1;
		exp+=2;
	}
	return sen;
}