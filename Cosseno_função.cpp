/*João Vitor Moura
Int. à programação, turma 01
Item 09  Lista 5 */

#include <stdio.h>
#include <math.h>

double fatorial(int);
float cosseno(float);
float Angulo_para_radiano(float);
int main(){
	
	float Angulo_x, X_em_radiano;
	
	printf("Ola, este programa calcula o cosseno de um angulo X qualquer. Digite um valor, em grau, para esse angulo:\n");//O usuário entra com o angulo de que ele quer o cosseno
	scanf("%f", &Angulo_x);
	
	X_em_radiano=Angulo_para_radiano(Angulo_x);//A função descrita após a main transforma o ângulo em radianos, pois seria complicado para o usuario saber valores correspondtes para angolos incomuns com 57°, por exemplo
	printf("O cosseno de %.2f eh: %.2lf.\n", Angulo_x, cosseno(X_em_radiano));//imprime o angulo e o cosseno dele
		
	return 0;
}

float Angulo_para_radiano(float ang){//função que transforma o angulo em radiano, admitindo pi como 3.1415

	float ang_rad, Pi=3.1415;

	ang_rad=(Pi*ang)/180;
	
	return ang_rad;	
};

double fatorial(int numero){//função que calcula o fatorial de um numero
	
	double contador, fatorial=1;
	
	for(contador=numero;contador>=1;contador--){//o contador é decrementado, de modo que o fatorial de um numero n fique n*(n-1)*(n-2)...*1
		fatorial*=contador;
	}
	
	return fatorial;
}

float cosseno(float NUMERO){//função que calcula o cosseno pela série de Taylor
	
	double cosseno=1, expoente=2.0;
	int sinal=-1;
	
	while(expoente<=38){//O expoente vai até 38, pois considerei 1 como o primeiro termo e a serie deve ir ate o vigésimo
		
		cosseno+=(sinal*pow(NUMERO, expoente))/fatorial(expoente);
		expoente+=2.0;
		sinal*=-1;
	}
	return cosseno;
}