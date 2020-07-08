#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#define LETRAS 50

void ler(char nome[][LETRAS], int matricula[], int salario[], int *tam);
int cadastro(char nome[][LETRAS], int matricula[], int salario[], int tam);
void demissao(char aux_nome[LETRAS], char nome[][LETRAS], int matricula[], int salario[], int *tam);
int pesquisaNome(char aux_nome[LETRAS], char nome[][LETRAS], int matricula[], int salario[], int tam);
void pesquisaSalario(int aux_salario, char nome[][LETRAS], int matricula[], int salario[], int tam);
void alterar(char aux_nome[LETRAS], char nome[][LETRAS], int matricula[], int salario[], int tam);
void ordenar(char nome[][LETRAS], int matricula[], int salario[], int);
void exibir(char nome[][LETRAS], int matricula[], int salario[], int tam);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	system ("color 3F");

	int tamanho = 0, posicao, quantidade, opcao, aux = 1;
	int i;
	char usuario[LETRAS];
	char nome[tamanho][LETRAS];
	char aux_nome[LETRAS]; 
	int aux_salario;
	int matricula[tamanho];
	int salario[tamanho];
	int *TAM;
	int acao;

	TAM = &tamanho;

	printf("Ol�, bem-vindo � nossa plataforma. Qual � o seu nome?\n");
	gets(usuario);
	system("cls");

	do
	{
		printf("O que voc� deseja fazer %s?\n", usuario);

		printf("1 - Cadastrar novo(s) funcion�rio(s)\n");
		printf("2 - Excluir funcion�rio(s)\n");
		printf("3 - Pesquisar por nome\n");
		printf("4 - Pesquisar por sal�rio\n");
		printf("5 - Alterar dados  de funcion�rio(s)\n");
		printf("6 - Exibir os atuais funcion�rios\n");
		printf("7 - Sair do programa\n");

		printf("\n");

		scanf("%d", &acao);
		fflush(stdin);

		switch(acao)
		{
		case 1:
			printf("\nQuantos funion�rios ser�o cadastrados no programa?\n");
			scanf("%d", &quantidade);
			fflush(stdin);

			for(i = 1; i <= quantidade; i++){
				printf("\nInsira o nome, matr�cula e sal�rio do funcion�rio a ser cadastrado: \n");
				tamanho = cadastro(nome, matricula, salario, *TAM);
				fflush(stdin);
			}
			
			printf("\n");
			
			break;
		case 2:
			printf("\nQuantos funion�rios ser�o exclu�dos do programa?\n");
			scanf("%d", &quantidade);
			fflush(stdin);
			
			printf("\n");
			
			for(i = 1; i <= quantidade; i++, aux++){
				printf("Digite o nome do %d� funcion�rio a ser exclu�do: ", aux);
				gets(aux_nome);
				fflush(stdin);

				demissao(aux_nome, nome, matricula, salario, &tamanho);
			}
			
			printf("\nDessa forma. ");
			exibir(nome, matricula, salario, tamanho);
			
			break;
		case 3:
			printf("\nDigite o nome do funcion�rio a ser pesquisado: ");
			gets(aux_nome);
			fflush(stdin);

			posicao = pesquisaNome(aux_nome, nome, matricula, salario, tamanho);
			
			if(posicao != -1){
				printf("\nO funcion�rio encontrado foi: \n");	
				printf("%s/ %d/ %d reais;\n", nome[posicao], matricula[posicao], salario[posicao]);
				printf("\nDeseja alterar algum dado deste funcion�rio? 1- para sim, 2- para n�o.\n");
				scanf("%d", &opcao);
			
				if(opcao == 1)
					alterar(aux_nome, nome, matricula, salario, tamanho);
				else{
				   	printf("\n");
				   	break;
				}
			}
			else 
				printf("N�o foi encontrado um funcion�rio com esse nome.\n");
			
			break;
		case 4:
			printf("\nDigite o sal�rio a ser buscado: ");
			scanf("%d", &aux_salario);
			fflush(stdin);

			pesquisaSalario(aux_salario, nome, matricula, salario, tamanho);
			
			break;
		case 5:
			printf("\nInsira o nome do funcion�rio que ser� alterado: ");
			gets(aux_nome);
			fflush(stdin);

			alterar(aux_nome, nome, matricula, salario, tamanho);
			
			break;
		case 6:
			printf("\n");
			exibir(nome, matricula, salario, tamanho);
			
			break;
		case 7:
			exit(EXIT_SUCCESS);
		default:
			break;
		}

		system("pause");
		system("cls");

	}while(1);

	return 0;
}

void ler(char nome[][LETRAS], int matricula[], int salario[], int *tam){
	gets(nome[*tam - 1]);
	fflush(stdin);
	
	scanf("%d", &matricula[*tam - 1]);
	scanf("%d", &salario[*tam - 1]);
}

int cadastro(char nome[][LETRAS], int matricula[], int salario[], int tam){
	tam ++;
	
	ler(nome, matricula, salario, &tam);
	ordenar(nome, matricula, salario, tam);
	
	return tam;
}

void demissao(char aux_nome[LETRAS], char nome[][LETRAS], int matricula[], int salario[], int *tam){
	int pos, j;

	pos = pesquisaNome(aux_nome, nome, matricula, salario, *tam);

	for(j = pos; j < *tam-1; j++){
		strcpy(nome[j], nome[j+1]);
		matricula[j] = matricula[j+1];
		salario[j] = salario[j+1];
	}
	
	*tam = *tam - 1;
}
		
int pesquisaNome(char aux_nome[LETRAS], char nome[][LETRAS], int matricula[], int salario[], int tam){
	int j, cont = -1;

	for(j = 0; j <= tam; j++)
		if(strcmp(aux_nome, nome[j]) == 0)
			cont = j;
	
	if(cont == -1)	
		return -1;
	else
		return cont;
}

void pesquisaSalario(int aux_salario, char nome[][LETRAS], int matricula[], int salario[], int tam){
	int j, aux = 1;

	for(j = 0; j < tam; j++)
		if(aux_salario == salario[j]){
			printf("%d - %s/ %d/ %d reais;\n",aux, nome[j], matricula[j], salario[j]);
			aux++;
		}
		
		printf("\n");
}

void alterar(char aux_nome[LETRAS], char nome[][LETRAS], int matricula[], int salario[], int tam){
	int local, opcao;
	int aux_matricula, aux_salario;

	local = pesquisaNome(aux_nome, nome, matricula, salario, tam);

	printf("\nO que ser� alterado? 1 - para nome, 2 - para matr�cula, 3 - para sal�rio.\n");
	scanf("%d", &opcao);
	fflush(stdin);

	switch(opcao)
	{
	case 1:
		printf("\nDigite o novo nome: \n");
		gets(aux_nome);
		fflush(stdin);
		
		strcpy(nome[local], aux_nome);
		
		break;
	case 2:
		printf("\nDigite o valor da nova matr�cula: \n");
		scanf("%d", &aux_matricula);
		
		matricula[local] = aux_matricula;
		
		break;
	case 3:
		printf("\nDigite o valor do novo sal�rio: \n");
		scanf("%d", &aux_salario);
		
		salario[local] = aux_salario;
		
		break;
	default:
		break;
	}
	
	printf("\nOs atuais dados deste funcion�rio s�o: \n");
	printf("%s/ %d/ %d reais;\n", nome[local], matricula[local], salario[local]);
	
	printf("\n");
}

void ordenar(char nome[][LETRAS], int matricula[], int salario[], int tam){
	int i, cont, mat_aux, sal_aux;
	char aux[LETRAS];

	for(i = 0; i < tam; i++)
		for(cont = 0; cont < tam - 1; cont++)
			if(strcmp(nome[cont], nome[cont + 1]) == 1)
			{
				strcpy(aux, nome[cont]);
				strcpy(nome[cont], nome[cont + 1]);
				strcpy(nome[cont + 1], aux);

				mat_aux = matricula[cont];
				matricula[cont] = matricula[cont + 1];
				matricula[cont + 1] = mat_aux;

				sal_aux = salario[cont];
				salario[cont] = salario[cont + 1];
				salario[cont + 1] = sal_aux;
			}
}

void exibir(char nome[][LETRAS], int matricula[], int salario[], int tam){
	int aux = 1, i;

	printf("Os nomes/ matr�culas/ sal�rios respectivamente dos atuais funcion�rios em ordem s�o: \n");

	for(i = 0; i < tam; i++, aux++)
		printf("%d - %s/ %d/ %d reais;\n", aux, nome[i], matricula[i], salario[i]);
	
	printf("\n");
}