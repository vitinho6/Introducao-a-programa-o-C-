#include <stdio.h>
#include <stdlib.h>
int main(){
	float preco;
	printf("Insira o valor da compra:\n");
	scanf("%f", &preco);
	printf("O valor da prestacao eh: %0.2f\n", preco/5);
	system("pause");

	int data1, mesauxiliar, mes1, dia1, ano1;
	printf("Escreva a data de hoje como um unico numero inteiro de 8 digitos:\n");
	scanf("%d", &data1);
	ano1=data1%10000;
	mesauxiliar=data1/10000;
	mes1=mesauxiliar%100;
	dia1=data1/1000000;
	printf("A data eh: %d/%d/%d\n", dia1, mes1, ano1);	
	system("pause");

	int anonasc1;
	printf("Digite o ano em que nasceste:\n");
	scanf("%d", &anonasc1);
	printf("Em 2016, fizeste: %d anos\n", 2016-anonasc1);
	system("pause");

	int nasc, data, dia, mes, ano, anonasc, mesnasc, dianasc;
	printf("Insira a data de hoje como um unico inteiro de 8 digitos:\n");
	scanf("%d", &data);
	printf("Agora, da mesma forma, insira sua data de nascimento:\n");
	scanf("%d", &nasc);
	dia=data/1000000;dianasc=nasc/1000000;
	mes=(data/10000)%100;mesnasc=(nasc/10000)%100;
	ano=data%10000;anonasc=nasc%10000;
	if ((mesnasc<=mes && dianasc<=dia)||(mesnasc<mes))
		printf("Sua idade eh: %d\n", ano-anonasc);
	else
		printf("Sua idade eh: %d\n", (ano-anonasc)-1);
	system("pause");

	float custo, impostos, precofinal;
	printf("Insira o custo de producao do carro:\n");
	scanf("%f", &custo);
	impostos=0.45*custo;
	precofinal=1.28*(impostos+custo);
	printf("O preco de venda do carro eh: %.2f.\n", precofinal);
	system("pause");
	return 0;
}
