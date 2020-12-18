#include <iostream>

using namespace std;

int fat(int n){
    if (n < 0){
        cout << "numero menor que zero, nao e permitido";
        return 0;
    }
    else if(n < 2) 
        return 1;
    else
        return n * fat(n - 1);
}

int main(){
    int n;
    cin >> n;
    cout << fat(n) << endl;
}