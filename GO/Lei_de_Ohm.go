package main

import "fmt"

func PdadoVI(V float32, I float32) float32{
	return V*I;
}

func IdadoVR(V float32, R float32) float32{
	return V/R;
}

func RdadoVI(V float32, I float32) float32{
	return V/I;
}

func RdadoVP(V float32, P float32) float32{
	return (V*V)/P;
}

func main(){
	var(
		opcao		int
		V, I, P, R	float32
	)
	
	for{
		fmt.Println("\n1- Digite 1 para calcular P dados V e I")
		fmt.Println("2- Digite 2 para calcular I dados V e R")
		fmt.Println("3- Digite 3 para calcular R dados P e V")
		fmt.Println("4- Digite 4 para calcular R dados V e I")
		fmt.Println("5- Digite 5 para SAIR\n")
		fmt.Scanf("%d", &opcao)
			
		switch opcao{
			case 1:
				fmt.Print("\nDigite V: ")
				fmt.Scanf("%f", &V)
				fmt.Print("Digite I: ")
				fmt.Scanf("%f", &I)
				P = PdadoVI(V, I)
				fmt.Println("\nO valor de P é: ", P)
				break
	
			case 2:
				fmt.Print("\nDigite V: ")
				fmt.Scanf("%f", &V)
				fmt.Print("Digite R: ")
				fmt.Scanf("%f", &R)
				I = IdadoVR(V, R)
				fmt.Println("\nO valor de I é: ", I)
				break
			
			case 3:
				fmt.Print("\nDigite V: ")
				fmt.Scanf("%f", &V)
				fmt.Print("Digite P: ")
				fmt.Scanf("%f", &P)
				R = RdadoVP(V, P)
				fmt.Println("\nO valor de R é: ", R)
				break
			
			case 4:
				fmt.Print("\nDigite V: ")
				fmt.Scanf("%f", &V)
				fmt.Print("Digite I: ")
				fmt.Scanf("%f", &I)
				R = RdadoVI(V, I)
				fmt.Println("\nO valor de R é: ", R)
				break
			
			case 5:
				fmt.Println("\nEncerrando a aplicação...")
				return
			
			default:
				fmt.Println("\nOpção inválida! \n")
					
		}
	}
}
