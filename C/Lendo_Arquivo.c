#include <stdio.h>
 
int main(){

	FILE *p_arq;
	int i,j;
	char buff[100];

	if ((p_arq=fopen("LOG.txt", "r")) == NULL) {
		printf("Problemas na abertura do arquivo, o arquivo existe?\n");
		return 0;
	}else{
		printf("Arquivo aberto com sucesso. Inicio da leitura do arquivo...\n\n");
	}

	while(1) {
		if((fscanf(p_arq,"%s %d",buff,&j))==EOF) {                               
			printf("Fim de leitura\n");
			break;
		}
		printf("%s %d\n",buff,j);
	}
	
	fclose(p_arq);
	
	return 0;
}
