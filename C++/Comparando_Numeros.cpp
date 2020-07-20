#include <iostream>

using namespace std;

int main(){
	int x, y, med;
	cout << "Digite o primeiro número: ";
	cin >> x;
	cout << " \nDigite o segundo número: ";
	cin >> y;
	
 	if ( x==y ){
  		cout << "\nOs números são iguais!\n" << endl;
  	}else if ( x != y ){
  		med = (x+y)/2;
  		cout << "\nA média dos números é: " << med << endl;
 	}
 	return 0;
}
