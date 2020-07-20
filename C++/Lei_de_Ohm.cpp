#include <iostream>

using namespace std;

float PdadoVI(float pV, float pI){
	return pV*pI;
}

float IdadoVR(float pV, float pR){
	return pV/pR;
}

float RdadoVI(float pV, float pI){
 	return pV/pI;
}

float RdadoVP(float pV, float pP){
 	return (pV*pV)/pP;
}

int main(){
	int opcao = 0;
	float V, R, P, I;
	
	while(1){
		cout << "1- Digite 1 para calcular P dados V e I" << endl;
		cout << "2- Digite 2 para calcular I dados V e R" << endl;
		cout << "3- Digite 3 para calcular R dados P e V" << endl;
		cout << "4- Digite 4 para calcular R dados V e I" << endl;
		cout << "5- Digite 5 para SAIR\n\n" << endl;	
		cin >> opcao;
		
		switch(opcao){
			case 1:
				cout << "\nDigite V: ";
				cin >> V;
				cout << "\nDigite I: ";
				cin >> I;
				P = PdadoVI(V,I);
				cout << "\nO valor de P é: " << P << "\n" << endl;
				break;
				
			case 2:
				cout << "\nDigite V: ";
				cin >> V;
				cout << "\nDigite R: ";
				cin >> I;
				I = IdadoVR(V,R);
				cout << "\nO valor de I é: " << I << "\n" << endl;
				break;
				
			case 3:
				cout << "\nDigite V: ";
				cin >> V;
				cout << "\nDigite P: ";
				cin >> P;
				R = RdadoVP(V,P);
				cout << "\nO valor de R é: " << R << "\n" << endl;
				break;
				
			case 4:
				cout << "\nDigite V: ";
				cin >> V;
				cout << "\nDigite I: ";
				cin >> I;
				R = RdadoVI(V,I);
				cout << "\nO valor de R é: " << R << "\n" << endl;
				break;
				
			case 5:
				cout << "\nEncerrando a aplicação..." << endl;
				return -1;
				
			default:
				cout << "\nOpção inválida! \n\n" << endl;
				
		}
		
	}
	
	return 0;
}
