#include <iostream>

using namespace std;

bool primo(int n){
	if(n == 1)
		return false;
	
	else if(n == 2)
		return true;
	//tem alguma coisa aqui	
	for(int i = 1; i <= n; i++){
		if(n % i == 0)
			return false;
		else
			return true;
	}	
}

int main(){
	int ini(0);
	int fim(0);
	cout << "Digite o primeiro numero: ";
	cin >> ini;
	cout << "Digite um numero maior ou igual ao primeiro numero: ";
	cin >> fim;
	
	for(int i = ini; i <= fim; i++){
		if(primo(i))
			cout << i << endl;
	}
}
