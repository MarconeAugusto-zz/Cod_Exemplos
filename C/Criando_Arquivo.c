#include <stdio.h>
 
int main(void){
  
	FILE *p_arq;
  	int i;
 
	if ((p_arq=fopen("LOG.txt", "w")) == NULL) {
		printf("Problemas na abertura do arquivo\n");
		return 0;
	}else{
		printf("Arquivo aberto com sucesso. Iniciando escrita no arquivo...\n\n\n");
	}

	for (i = 0; i<100;i++) {
		/* A funcao fprintf devolve o número de bytes gravados ou EOF se houve erro na gravação */
			if((fprintf(p_arq,"Linha %d\n",i))==EOF) {
			printf("Erro ao escrever no arquivo!\n");
			return -1;
		}
	}
	printf("Fim da escrita, observe o arquivo 'LOG.txt' criado na mesma pasta deste executável!\n");
	fclose(p_arq);
	
	return 0;
}
