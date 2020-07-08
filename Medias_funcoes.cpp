/*João Vitor Moura
Int. à programação, turma 01
Item  07  Lista 5 */

#include <stdio.h>

float Media_aritmetica(float,float,float);
float Media_ponderada(float,float,float);
float Media_harmonica(float,float,float);
int main(){
	
	int opcao;
	float nota1, nota2, nota3, media;
	
	printf("O programa clacula 3 tipos de media: aritmetica, ponderada e harmonica.\n");
	
	printf("Digite as 3 notas cuja media deseja calcular:\n");//O usuário entra com as notas
	scanf("%f %f %f", &nota1, &nota2, &nota3);

	printf("Agora:\nDigite 1 para media aritmetica\nDigite 2 para media ponderada\nDigite 3 para media harmonica:\n");//O Usuário entra com a opção de media
	scanf("%d", &opcao);

	(opcao==1)?printf("A media aritmetica eh: %.2f\n", Media_aritmetica(nota1,nota2,nota3)):(opcao==2)?printf("A media ponderada eh: %.2f\n", Media_ponderada(nota1,nota2,nota3)):printf("A media harmonica eh: %.2f\n", Media_harmonica(nota1,nota2,nota3));//A media eh impressa de a cordo com a opção escolhida	

	return 0;
}

float Media_aritmetica(float nota, float Nota, float NOTA){//Função que calcula a média aritmética
	float media;
	media=(nota+Nota+NOTA)/3;
		
	return media;
}

float Media_ponderada(float nota, float Nota, float NOTA){//Função que calcula a média ponderada
	float media;
	media=(3*nota+3*Nota+4*NOTA)/10;
	
	return media;
}

float Media_harmonica(float nota, float Nota, float NOTA){//Função que calcula a média harmônica
	float media;
	media=3/((1/nota)+(1/Nota)+(1/NOTA));

	return media;
}