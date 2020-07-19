#include <stdio.h>

int main(){

	int opcao = 0;
	float n1,n2,som,sub,div,mul;

	printf("Digite dois números reais:\n\n");
	scanf("%f%f",&n1,&n2);


	printf("1- Digite 1 para somar os números digitados \n");
	printf("2- Digite 2 para subtrair os números digitados \n");
	printf("3- Digite 3 para multiplicar os números digitados \n");
	printf("4- Digite 4 para dividur os números digitados \n");
	printf("5- Digite 5 para encerrar a aplicação \n");
	scanf("%d",&opcao);

	switch (opcao){
		case (1):
			som = (n1 + n2);
			printf("O resultado é: %f\n", som);
			break;
		case (2):
			sub = (n1 - n2);
			printf("O resultado é: %f\n", sub);
			break;
		case (3):
			mul = (n1 * n2);
			printf("O resultado é: %f\n", mul);
			break;
		case (4):
			div = (n1 / n2);
			printf("O resultado é: %f\n", div);
			break;
		case (5):
			printf("Saindo... \n\n\n");
			return -1;
		default:
			printf("Opção Inválida! \n");
	}
}

