import java.util.Scanner;

public class Par_ou_Impar {

	public static void main(String[] args) {
	
		int x = 0;
		Scanner Ler = new Scanner(System.in);
		
		System.out.println("Digite o número desejado: \n");
		x = Ler.nextInt();
		
		//Compara se o número digitado é par
	   	if (x%2 == 0){
	   		System.out.println("O número digitado é par\n");	 
	    	}
	    	else
	    		System.out.println("O número digitado é ímpar\n");
	    		
	    	}
}
