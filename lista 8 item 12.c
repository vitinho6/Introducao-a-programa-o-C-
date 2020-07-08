//Caue Rennã - IP 01 
#include <stdio.h>

int Retangulo(float, float, float *, float *);

int main(){

	float Lado_1, Lado_2, Perimetro, Area;
	int retorno;
	
	puts("Digite os valores dos lados em centimetros:\n");
	scanf("%f %f", &Lado_1, &Lado_2);
	retorno=Retangulo(Lado_1, Lado_2, &Area, &Perimetro);
	
	if(retorno==1)
		printf("O retorno foi 1, entao a figura eh quadrada e: a area eh %.2f e o perimetro %.2f\n", Area, Perimetro);
	else
		printf("O retorno foi 0, entao a figura nao eh quadrada e: a area eh %.2f e o perimetro %.2f\n", Area, Perimetro);

	return 0;
}

int Retangulo(float Lado_1, float Lado_2, float *a, float *p){
	
	*p = 2*(Lado_1+Lado_2);
	*a = Lado_1*Lado_2;
	
	if(Lado_1==Lado_2)
		return 1;
	else
		return 0; 
}