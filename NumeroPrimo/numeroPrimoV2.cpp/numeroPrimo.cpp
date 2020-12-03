#include <iostream>

using namespace std;

bool primo(int n){
	int cont = 0;
	if(n == 1)
		return false;
	
	else if(n == 2)
		return true;
	
	//tem alguma coisa aqui	
	for(int i = 1; i <= n; i++){
		if(n % i == 0)
			cont++;
	}
	if(cont == 2)
		return true;
	else
		return false;
}

int main(){
	int ini;
	int fim;
	cout << "Digite o primeiro numero: ";
	cin >> ini;
	cout << "Digite um numero maior ou igual ao primeiro numero: ";
	cin >> fim;
	
	for(int i = ini; i <= fim; i++){
		if(primo(i))
			cout << i << endl;
	}
}
