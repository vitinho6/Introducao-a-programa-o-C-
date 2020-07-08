#include <stdio.h>
#include <stdlib.h>

int main(){
	
	system("5F");
	FILE *fp;
	char s[100];
	puts("introduza o arquivo:");
	gets(s);
	fp = fopen(s, "r");
	if(fp==NULL)
		printf("Impossivel abrir arquivo");
	else{
		printf("Arquivo %s aberto com sucesso!!!\n", s);
		fclose(fp);
	}
	return 0;
}