import java.util.Scanner;

public class Comparando_Numeros {

	public static void main(String[] args) {
	
		int x = 0, y = 0, med = 0;
		Scanner Ler = new Scanner(System.in);
		
		System.out.print("\nDigite o primeiro número: ");
		x = Ler.nextInt();
		System.out.print("\nDigite o segundo número: ");
		y = Ler.nextInt();
		
		//Compara se o número digitado é par
	   	if (x == y){
	   		System.out.println("Os números são iguais!\n");	 
	    	}else{
	    		med = (x + y)/2;
	    		System.out.println("\nA média dos números é: " + med + "\n");
	    	}
	    		
	}
}
