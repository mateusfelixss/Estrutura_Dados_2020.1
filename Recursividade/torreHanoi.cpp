#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void hanoi(int n, char ini, char fim, char aux){
    if(n > 0){
        hanoi(n - 1, ini, aux, fim);
        cout << ini << " -> " << fim << endl;
        hanoi (n -1 , aux , fim, ini);
    }
}

int main(){
    int n;
    char a;
    char b;
    char c;

    cin >> n;

    hanoi(n, 'a', 'c', 'b');
}   