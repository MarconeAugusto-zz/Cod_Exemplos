package main

import "fmt"

func main(){
	var x int = 0
	var y int = 0
	var med int =0
	
	fmt.Print("\nDigite o primeiro número: ")
	fmt.Scanf("%d", &x);
	fmt.Print("\nDigite o segundo número: ")
	fmt.Scanf("%d", &y);
	
	if x == y{		 
    		fmt.Println("\nOs números são iguais!\n");
    	}else{
    		med = (x+y)/2
    		fmt.Println("\nA média dos números é:", med);
    	}		
}
