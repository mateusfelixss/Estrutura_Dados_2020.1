#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cout << "Digite a qtd de dominos: ";
    cin >> n;
    
    int vet[n];
    for (int i = 0; i < n; i++){
        cout << "Digite o valor do domino: ";
        cin >> vet[i];
    }
    
    for(int i = 0; i < n - 1; i++){
        if(vet[i] > vet[i + 1]){
            cout << "precisa de ajuste";
            return 0;
        }
    }
    cout << "ok";
    return 0;
}