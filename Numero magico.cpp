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
		printf("Ol�, este programa sorteia um n�mero m�gico. Tente adivinh�-lo:\n");
	   	scanf("%d", &chute);//Chute do usu�rio
		tentativa++;
		if((tentativa<=3)&&(chute==Sou_variavel))//Esse e os outros if's correspondem as classifica��es do usu�rio de acordo com o numero de tentativas
			printf("Voc� acertou! Sua classifica��o �: Muito sortudo!");
		else if((tentativa <=6)&&(chute==Sou_variavel))
			printf("Voc� acertou! Sua classifica��o �: Sortudo!");
		else if	((tentativa <=10)&&(chute==Sou_variavel))
			printf("Voc� acertou. Sua classifica��o �: Normal!");
		else if(chute==Sou_variavel)//N�o h� classifica��o ap�s mais de 10 chutes
			printf("Voc� acertou.");
		else if(chute>Sou_variavel)
			printf("Tente novamente. O n�mero � maior que o sorteado.\n");//Indica ao usu�rio se seu chute � maior que o n�mero m�gico
		else
			printf("Tente novamente. O n�mero � menor que o sorteado.\n");//Se o n�mero n�o � maior e ele n�o acertou, o n�mero � menor.
	}
	return 0;
}
//Me chamo Jo�o Vitor Moura, sou aluno da turma 01 de introdu��o � programa��o. Este exerc�cio � refentente ao item 18 da lista 03. 