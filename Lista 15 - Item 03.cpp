/*João Vitor Moura
Int. à programação, turma 01
Item 03  Lista 15 */
#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float Vet[10], Maior_Val, Menor_Val, Soma=0, Med;
	int i;

	printf("Olá, este programa calcula a media dos valores de um vetor de 10 posições e indica o maior e o menor valor.\nEntre com os 10 valores do array:\n");//Interação com o usuário e leitura de dados.

	for(i = 0; i < 10; i++)//Recebimento dos componentes do vetor
		scanf("%f", &Vet[i]);
	
	printf ("\n");
	
	Maior_Val = Vet[0];//Igualamos o maior valor à primeira posição do vetor, para podermos comparar e atribuir
	for(i = 0; i < 10; i++)
	{
		if(Vet[i] >= Maior_Val)
			Maior_Val = Vet[i];
	}	
	
	
	Menor_Val=Vet[0];//Similarmente ao que fizemos anteriormente, igualamos o menor valor à primeira posição do vetor, para podermos comparar e atribuir
	for(i = 1; i < 10; i++)
	{
		if(Vet[i]<Menor_Val)
			Menor_Val=Vet[i];
		
	}	
	
	for(i = 0; i < 10; i ++)//Calculamos o somatório e, em seguida, a média.
		Soma+= Vet[i];
	
	Med = (float)Soma / 10;
	
	printf("O valor da média dos valores do vetor é de %.2f\n", Med);
	
	printf("\nO maior valor é %.2f e o menor valor do vetor é %.2f\n", Maior_Val, Menor_Val);
				
	return 0;
}