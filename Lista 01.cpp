#include <stdio.h>
#include <math.h>

//int main(){
//	int numero;
//	printf("Digite um numero inteiro:\n");
//	scanf("%d", &numero);
//	if (numero<0)
//		printf("O quadrado do numero eh: %d\n", numero*numero);
//	else
//		printf("A raiz eh: %.4lf\n", sqrt(numero));
//	return 0;	
//}

//int main(){
//	int num;
//	printf("Digite um numero:\n");
//	scanf("%i", &num);	
//	if (num%2==0)
//		printf("O numero eh par.\n");
//	else
//		printf("O numero eh impar.\n");	
//	if (num==0)
//		printf("O numero eh zero.");
//	else if(num>0)
//		printf ("O numero eh positivo.");
//	else
//		printf("O numero eh negativo.");
//	return 0;
//} 

//int main(){
//	float sal, prest;
//	printf("Digite seu salario:\n");
//	scanf("%f", &sal);
//	printf("Digite a prestacao:\n");
//	scanf("%f", &prest);
//	if (prest<=sal)
//		printf("Ok!");
//	else
//		printf("Nao concedido.");
//	return 0;
//}

//int main(){
//	int qtd, tipo;
//	float preco, desconto;
//	printf("Qual o tipo de peca? 1, 2 ou 3:\n");
//	scanf("%d", &tipo);
//	printf("Qual a quantidade?\n");
//	scanf("%d", &qtd);
//	if (tipo==1){
//		preco=1.5;
//		desconto=preco*0.2;
//		printf("Voce comprou parafusos. A quantidade foi %d, o desconto foi %.2f e o preco total a pagar foi %.2f", qtd, qtd*desconto, qtd*(preco-desconto));
//	}
//	else if(tipo==2){
//		preco=2.0;
//		desconto=0.1*preco;
//		printf("Voce comprou porcas. A quantidade foi %d, o desconto %.2f e o preco total a pagar %.2f", qtd, qtd*desconto, qtd*(preco-desconto));
//	}
//	else{	
//		preco=1.0;
//		desconto=0.3*preco;
//		printf("Voce comprou arruelas. A quantidade foi %d, o desconto %.2f e o preco total a pagar %.2f", qtd, qtd*desconto, qtd*(preco-desconto));
//	}
//		
//	return 0;	
//}

//int main(){
//	int dia, mes, ano;
//	printf("Digite o dia:\n");
//	scanf("%d", &dia);
//	printf("Digite o mes:\n");
//	scanf("%d", &mes);
//	printf("Digite o ano:\n");
//	scanf("%d", &ano);
//	if((ano>0)&&(mes==4||mes==6||mes==9||mes==11)&&(dia>0 && dia<=30))
//		printf("Data valida!");
//	else if((ano>0)&&(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12)&&(dia>0 && dia<=31))
//		printf("Data valida!");
//	else if((ano>0)&&((ano%4==0 && ano%100!=0)||(ano%400==0))&& (mes==2)&&(dia>0 && dia<=29))
//		printf("Data valida!");
//	else if((ano>0)&&(mes==2)&&(dia>0 && dia<=28))
//		printf("Data valida!");
//	else	
//		printf("Data invalida!");
//	return 0;
//	
//	}

//int main(){
//	float custo, lucro, venda;
//	printf("Digite o custo do produto:\n");
//	scanf("%f", &custo);
//	if (custo<20)
//		lucro=0.45*custo;
//	else
//		lucro=0.30*custo;
//	venda=custo+lucro;
//	printf("O preco de venda eh: %.2f", venda);
//	return 0;
//}

//int main(){
//	char simbolo;
//	float n1, n2;
//	printf("Digite o simbolo da operacao desejada:\n");
//	scanf("%c", &simbolo);
//	printf("Agora, digite os dois numeros com os quais quer realizar a operacao:\n");
//	scanf("%f %f", &n1, &n2);
//	if(simbolo== '+')
//		printf("%f", n1+n2);
//	else if (simbolo == '-')
//		printf("%f", n1-n2);
//	else if(simbolo == '/')
//		printf("%f", n1/n2);
//	else 
//		printf("%f", n1*n2);
//	return 0;
//}

//int main(){
//	int numerohoras;
//	float valorhoras;
//	printf("Digite o total de horas trabalhadas:\n");
//	scanf("%d", &numerohoras);
//	printf("Digite o valor de cada hora:\n");
//	scanf("%f", &valorhoras);
//	if ((numerohoras<=40)||(numerohoras>60))
//		printf("O salario eh: %.2f", numerohoras*valorhoras);
//	else
//		printf("O salario eh %.2f", valorhoras*40+(numerohoras-40)*0.5*valorhoras);
//	return 0;
//}




