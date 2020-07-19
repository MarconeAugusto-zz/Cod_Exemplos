package main

import "fmt"

func main(){
	var x int = 0
	fmt.Print("\nDigite o número desejado: ")
	fmt.Scanf("%d", &x);
	
	if x%2 == 0{		 
    		fmt.Println("\nO Número digitado é par\n");
    	}else{
    		fmt.Println("\nO Número digitado é ímpar\n");
    	}		
}
