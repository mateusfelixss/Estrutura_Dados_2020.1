#include <iostream>
using namespace std;

int posicao(int mat[3][3]){
	int cont = 0;
	int lin = 0;
	int col = 0;
	
	for(lin = 1; lin < 3; lin++){
		for(col = 0; col < 3; col++){
			if(mat[lin - 1][col] > mat[lin][col])
				cont++;
		}
	}
	return cont;
}



int main(){
	int vet[3][3];
	int linha = 0; 
	int coluna = 0;
	int number = 0;
	
	for(linha = 0; linha < 3; linha++){
		for(coluna = 0; coluna < 3; coluna++){
			cin >> number;
			vet[linha][coluna] = number; 
		}
	}
	
	cout << posicao(vet);
}

 