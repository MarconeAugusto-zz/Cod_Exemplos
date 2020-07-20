import java.util.Scanner;

public class Lei_de_Ohm {

	public static void main(String[] args) {
		int opcao = 0;
		float V = 0, I = 0, R = 0, P = 0;
		
		Scanner ler = new Scanner(System.in);

		while(true){
			
			System.out.println("\n1- Digite 1 para calcular P dados V e I");
			System.out.println("2- Digite 2 para calcular I dados V e R");
			System.out.println("3- Digite 3 para calcular R dados P e V");
			System.out.println("4- Digite 4 para calcular R dados V e I");
			System.out.println("5- Digite 5 para SAIR\n\n");
			opcao = ler.nextInt();
			
			switch(opcao){
				case 1:
					System.out.print("\nDigite V: ");
					V = ler.nextFloat();
					System.out.print("Digite I: ");
					I = ler.nextFloat();
					P = PdadoVI(V, I);
					System.out.print("O valor de P é: " + P +"\n");
					break;
					
				case 2:
					System.out.print("\nDigite V: ");
					V = ler.nextFloat();
					System.out.print("Digite R: ");
					R = ler.nextFloat();
					I = IdadoVR(V, R);
					System.out.print("O valor de I é: " + I +"\n");
					break;
					
				case 3:
					System.out.print("\nDigite V: ");
					V = ler.nextFloat();
					System.out.print("Digite P: ");
					P = ler.nextFloat();
					R = RdadoVP(V, P);
					System.out.print("O valor de R é: " + R +"\n");
					break;
					
				case 4:
					System.out.print("\nDigite V: ");
					V = ler.nextFloat();
					System.out.print("Digite I: ");
					I = ler.nextFloat();
					R = RdadoVI(V, I);
					System.out.print("O valor de R é: " + R +"\n");
					break;
				
				case 5: 
					System.out.println("\nEncerrando a aplicação...");
					return;
					
					
				default:
					System.out.print("\nOpção inválida! \n\n" );
					break;
			}
		}
	}
	
	public static float PdadoVI( float V , float I){
		return V*I;
	}
	
	public static float IdadoVR( float V , float R){
		return V/R;
	}
	
	public static float RdadoVP( float V , float P){
		return (V*V)/P;
	}
	
	public static float RdadoVI( float V , float I){
		return V/I;
	}	
}
