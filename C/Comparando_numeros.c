#include <stdio.h>

int main(){
	int x, y, med;

 	printf("\nDigite o primeiro número:\n");
  	scanf("%d",& x);
 	printf("\nDigite o segundo número:\n");
  	scanf("%d",& y);
 	if ( x==y ){
  		printf("\nOs números são iguais!\n");
  	}else if ( x != y ){
  		med = (x+y)/2;
  		printf("\nA média dos números é: %d\n",med);
 	}
 	return 0;
}
