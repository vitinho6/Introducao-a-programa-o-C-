//Caue Renna - Ip 01

#include <stdio.h>
#define DIA_EM_MINUTOS 1440

void tempo_de_jogo(int, int, int, int, int *, int *);

int main(){
	
	int h_inicial, m_inicial, h_final, m_final, h_duracao, m_duracao;
	
	printf("Entre com a hora e o minuto em que o jogo começou\n");
	scanf("%d %d", &h_inicial, &m_inicial);
	
	puts("Entre com a hora e o minuto finais do jogo\n");
	scanf("%d %d", &h_final, &m_final);
	
	tempo_de_jogo(h_inicial, m_inicial, h_final, m_final, &h_duracao, &m_duracao);
	
	printf("\nA duracao foi de %02d h e %02d min\n", h_duracao, m_duracao );

	return 0;
}

void tempo_de_jogo(int hora_inicio, int minuto_inicio, int hora_final, int minuto_final, int *horas_de_duracao, int *minutos_de_duracao){
	
	int a_inicio, a_final;
	
	a_inicio = 60*hora_inicio+minuto_inicio;
	a_final = 60*hora_final+minuto_final;
	
	if(a_final>a_inicio){
		*horas_de_duracao = (a_final - a_inicio)/60;
		*minutos_de_duracao = (a_final - a_inicio)%60;
	}
	
	else
	{
		*horas_de_duracao = (a_final+DIA_EM_MINUTOS-a_inicio)/60;
		*minutos_de_duracao = (a_final+DIA_EM_MINUTOS-a_inicio)%60;
	}
}

//Eu transformei tudo em minutos no calculo, pra não ter condição se o minuto inicial fosse maior que o final