#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	float salario, prestacao, taxalimite;
	printf("Ol�, este prgrama testar� se seu sal�rio � compat�vel com o valor da presta��o da nova linha de cr�dito do banco.\nPor favor digite seu sal�rio:\n");
	scanf("%f", &salario);
	printf("Agora, digite o valor da presta��o que voc� ir� pagar pelo seu empr�stimo:\n");
	scanf("%f", &prestacao);
	taxalimite=salario*0.3;//Indica o limite m�ximo de valor da presta��o.
	if (prestacao<=taxalimite)//Nesse caso, o valor m�ximo da presta��o equivale a 30% do sal�rio.
		printf("Sal�rio compat�vel, o empr�stimo pode ser concedido.");
	else
		printf("Sal�rio imcompat�vel, o empr�stimo n�o pode ser concedido.");	
	
	return 0;
}

//Me chamo Jo�o Vitor Moura, sou aluno da turma 1 de introdu��o a programa��o. Esse exerc�cio corresponde ao item 3 da lista 01.