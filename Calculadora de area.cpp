#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int lados;
	float area, medida;
	printf("Olá, este programa calcula a áre de um polígono regular. Digite o número de lados:\n");//O usuário entra com o numero de lados
	scanf("%d", &lados);
	printf("Agora, insira a medida dos lados:\n");//O usuario entra com a medida de cada lado
	scanf("%f", &medida);
	switch(lados)
	{
	case 3://Calcula a área de um triângulo
		area= medida*medida*1.73/4;
		break;
	case 4://calcula a área de um quadrilátero
		area= medida*medida;
		break;
	case 6://Calcula a área de um polígono de 6 lados
		area= 6*medida*medida*1.73/4;
		break;
	default://Caso o numero de lados não seja 3, 4 ou 6
		printf("Não sei calcular a área");
		return 0;//Encerra o programa se o switch caia no default
	}
	printf("A área do polígono é: %.3f", area);//imprime a area
	return 0;
	
}
//João Vitor Moura, IP turma 01. Exercício 13, lista 01.