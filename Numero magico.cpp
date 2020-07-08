#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int Sou_variavel, tentativa=0, chute;
	srand(time(NULL));
	Sou_variavel=rand()%501;
	while(chute!=Sou_variavel){//O programa encerra com o acerto
		printf("Olá, este programa sorteia um número mágico. Tente adivinhá-lo:\n");
	   	scanf("%d", &chute);//Chute do usuário
		tentativa++;
		if((tentativa<=3)&&(chute==Sou_variavel))//Esse e os outros if's correspondem as classificações do usuário de acordo com o numero de tentativas
			printf("Você acertou! Sua classificação é: Muito sortudo!");
		else if((tentativa <=6)&&(chute==Sou_variavel))
			printf("Você acertou! Sua classificação é: Sortudo!");
		else if	((tentativa <=10)&&(chute==Sou_variavel))
			printf("Você acertou. Sua classificação é: Normal!");
		else if(chute==Sou_variavel)//Não há classificação após mais de 10 chutes
			printf("Você acertou.");
		else if(chute>Sou_variavel)
			printf("Tente novamente. O número é maior que o sorteado.\n");//Indica ao usuário se seu chute é maior que o número mágico
		else
			printf("Tente novamente. O número é menor que o sorteado.\n");//Se o número não é maior e ele não acertou, o número é menor.
	}
	return 0;
}
//Me chamo João Vitor Moura, sou aluno da turma 01 de introdução à programação. Este exercício é refentente ao item 18 da lista 03. 