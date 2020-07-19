#include <stdio.h>

float PdadoVI(float pV, float pI){
	return pV*pI;
}

float IdadoVR(float pV, float pR){
	return pV/pR;
}

float RdadoVP(float pV, float pI){
 	return pV/pI;
}

float RdadoVR(float pV, float pP){
 	return (pV*pV)/pP;
}

int main(){
  	int opcao = 0;
  	float V,R,P,I;
  
 	while(1){
  
    		printf("1- Digite 1 para calcular P dados V e I\n");
    		printf("2- Digite 2 para calcular I dados V e R\n");
    		printf("3- Digite 3 para calcular R dados P e V\n");
    		printf("4- Digite 4 para calcular R dados V e I\n");
    		printf("5- Digite 5 para SAIR\n\n");
    		scanf("%d",&opcao);
 
  		switch (opcao){
  			case 1:
    				printf("Digite V:\n");
    				scanf("%f",&V);
    				printf("Digite I:\n");
				scanf("%f",&I);
				P = PdadoVI (V,I);
				printf("Valor de P = %f\n",P);
				break;
			case 2:
				printf("Digite V:\n");
				scanf("%f",&V);
				printf("Digite R:\n");
				scanf("%f",&R);
				I = IdadoVR (V,R);
				printf("Valor de I = %f\n",I);
				break;
			case 3:
				printf("Digite V:\n");
				scanf("%f",&V);
				printf("Digite P:\n");
				scanf("%f",&P);
				R = RdadoVP (V,P);
				printf("Valor de R = %f\n",R);
				break;
			case 4:
				printf("Digite V:\n");
				scanf("%f",&V);
				printf("Digite I:\n");
				scanf("%f",&I);
				R = RdadoVR (V,I);
				printf("Valor de R = %f\n",R);
				break;
			case 5:
				printf("Encerrando a aplicação\n");
				return -1;
			default:
				printf("Opção inválida\n\n");
			}
	}
	return 0;
}
