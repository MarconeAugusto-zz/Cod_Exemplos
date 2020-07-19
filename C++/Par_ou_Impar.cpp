#include <iostream>

using namespace std;

int main(){
	int x;
	
	cout << "Digite o numero desejado: \n" << endl;
	cin >> x;
	
	//Compara se o número digitado é par
   	if (x%2 == 0){
   		cout << "\nO Número digitado é par\n" << endl;	 
    	}
    	//Compara se o número digitado é ímpar
   	else if (x%2 != 0){
   		cout << "\nO Número digitado é ímpar\n" << endl;
    	}
    	return 0;
	
}
