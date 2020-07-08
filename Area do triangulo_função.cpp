/*João Vitor Moura
Int. à programação, turma 01
Item 08  Lista 5 */

#include <stdio.h>
#include <math.h>

float Distancia(float, float, float, float);
int main(){
	float X_ponto1, Y_ponto1, X_ponto2, Y_ponto2, X_ponto3, Y_ponto3, Lado1, Lado2, Lado3, Semi_perimetro, Area, aux_area;
	
	printf("Ola, este programa calcula a area de um triangulo a partir de suas coordenadas num plano XY.\n");
	
	printf("Digite as coordenadas do primeiro ponto:\n");//O usuário entra com X e Y do ponto 1
	scanf("%f %f", &X_ponto1, &Y_ponto1);

	printf("Agora, digite as coordenadas do segundo ponto:\n");//O usuário entra com X e Y do ponto 2
	scanf("%f %f", &X_ponto2,&Y_ponto2);

	printf("Por ultimo, digite as coordenadas do terceiro ponto:\n");//O usuário entra com X e Y do ponto 3
	scanf("%f %f", &X_ponto3, &Y_ponto3);

	Lado1=Distancia(X_ponto1, X_ponto2, Y_ponto1, Y_ponto2);//O lado 1 é a distância entre os pontos 1 e 2
	Lado2=Distancia(X_ponto1, X_ponto3, Y_ponto1, Y_ponto3);//O lado 2 é a distância entre os pontos 1 e 3
	Lado3=Distancia(X_ponto2, X_ponto3, Y_ponto2, Y_ponto3);//O lado 3 é a distância entre os pontos 2 e 3
	Semi_perimetro=(Lado1+Lado2+Lado3)/2;//Cálculo do semi perímetro
	aux_area=(Semi_perimetro* (Semi_perimetro-Lado1) * (Semi_perimetro-Lado2) * (Semi_perimetro-Lado3));//A variavel auxiliar calcula o que estaria no interior da raiz no cálculo da área
	Area= sqrtf(aux_area);//Cálculo da área
	
	if(Area>0)
		printf("As coordenadas (X,Y) dos pontos sao: P1(%.2f,%.2f), P2(%.2f,%.2f) e P3(%.2f,%.2f) e a area eh: %.2f\n", X_ponto1, Y_ponto1, X_ponto2, Y_ponto2, X_ponto3, Y_ponto3, Area);//Imprime os pontos e as áreas
	else
		printf("Os pontos: P1(%.2f,%.2f), P2(%.2f,%.2f) e P3(%.2f,%.2f) sao colineares.", X_ponto1, Y_ponto1, X_ponto2, Y_ponto2, X_ponto3, Y_ponto3);//Se a área é nula, o triângulo não existe e os pontos são colineares
		
	return 0;
}

float Distancia(float X1, float X2, float Y1, float Y2){//Função que cálcula a distância entre 2 pontos
	float distancia;
	
	distancia= sqrt(((X2-X1)*(X2-X1))+((Y2-Y1)*(Y2-Y1)));
	
	return distancia;	
}