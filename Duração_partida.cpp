#include <stdio.h>

int converter(int, int ,int);
int main(){
	
	int HoraI, MinutoI, SegundoI, HoraF, MinutoF, SegundoF;
	printf("Digite hora, minuto e segundo de inicio da partida:\n");
	scanf("%d %d %d", &HoraI, &MinutoI, &SegundoI);
	printf("Digite hore, minuto e segundo finais:\n");
	scanf("%d %d %d", &HoraF, &MinutoF, &SegundoF);
	printf("A duração foi de: %d segundos", converter(HoraF, MinutoF, SegundoF)-converter(HoraI, MinutoI, SegundoI));
	return 0;
	
}

int converter(int h, int m, int s){
	
	int Hs, Ms, somatorio;
	Hs=h*3600;
	Ms=m*60;
	somatorio=Hs+Ms+s;
	return somatorio;
}