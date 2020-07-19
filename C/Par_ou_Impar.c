#include <stdio.h>

int main(){
 	int x;

 	printf("\nDigite o Número desejado:\n");
  	scanf("%d",&x);
  	//Compara se o número digitado é par
   	if (x%2 == 0){		 
    		printf("\n O Número digitado é par\n");
    	}
    	//Compara se o número digitado é ímpar
   	else if (x%2 != 0){
    		printf("\n O Número digitado é ímpar\n");
    	}
    	return 0;
} 
