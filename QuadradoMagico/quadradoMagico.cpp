#include <iostream>
using namespace std;

void quadradoMagico (int vet[3][3]){
	int somaColuna01 = 0;
	int somaColuna02 = 0;
	int somaColuna03 = 0;
	int somaLinha01	= 0;
	int somaLinha02	= 0;
	int somaLinha03	= 0;
	int diagonalPri = 0;
	int diagonalSec = 0;
	
	for(int linha = 0; linha < 3; linha++){
		for(int coluna = 0; coluna < 3; coluna++){
			if(vet[0][coluna])										//soma elementos da linha 01
				somaLinha01 += vet[0][coluna];
				
			if(vet[1][coluna])										//soma elementos da linha 02
				somaLinha02 += vet[1][coluna];	
				
			if(vet[2][coluna])										//soma elementos da linha 03
				somaLinha03 += vet[2][coluna];	
				
				
				
						
			if((vet[linha][coluna]) == (vet[linha][coluna]))			//soma elementos da diagonal principal
				diagonalPri += vet[linha][coluna];
				
			if((vet[1][1]) || (vet[0][2]) || (vet[2][0]))			//soma elementos da diagonal secundaria	
				diagonalSec += vet[linha][coluna];
				
				
				
				
			if(vet[linha][0])										//soma elementos da coluna 01
				somaColuna01 += vet[linha][0];
				
			if(vet[linha][1])										//soma elementos da coluna 02
				somaColuna02 += vet[linha][1];
				
			if(vet[linha][2])										//soma elementos da coluna 03
				somaColuna03 += vet[linha][2];
		}
	}
	
	int totalLinhas = 0;
	int totalColunas = 0;
	int totalDiagonais = 0;
	
	totalLinhas = somaLinha01 + somaLinha02 + somaLinha03;
	totalColunas = somaColuna01 + somaColuna02 + somaColuna03;
	totalDiagonais = diagonalPri + diagonalSec;
	
	cout << "Total Linhas: " << totalLinhas << endl;
	cout << "Total Colunas: " << totalColunas << endl;
	cout << "Total Diagonais: " << totalDiagonais << endl;
	cout << "Total Diagonal Principal: " << diagonalPri << endl;
	cout << "Total Diagonal Secundaria: " << diagonalSec << endl;
	cout << "Total Linha 01: " << somaLinha01 << endl;
	cout << "Total Linha 02: " << somaLinha02 << endl;
	cout << "Total Linha 03: " << somaLinha03 << endl;
	cout << "Total Coluna 01: " << somaColuna01 << endl;
	cout << "Total Coluna 02: " << somaColuna02 << endl;
	cout << "Total Coluna 03: " << somaColuna03 << endl;
	
	if((totalLinhas == totalColunas) == totalDiagonais)
		cout << "SIM";
	else
		cout << "NAO";
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
	quadradoMagico(vet);
}
