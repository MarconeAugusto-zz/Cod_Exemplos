#include <stdio.h>

struct TRegistro{
	char nome[20];
	int idade;
} Tabela[4] = {
	{"joao",18,},
	{"maria",18,},
	{"jose",19,},
	{"lara",17,},
};

struct TRegistro *p;

int main(){
	p = &Tabela[3]; /*p aponta para o registro 3 da tabela */
	printf("O nome na posição 3 é %s e idade = %d\n", p->nome,p->idade);
	
	return 0;
}


