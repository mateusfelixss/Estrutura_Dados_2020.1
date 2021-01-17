#include <iostream>
using namespace std;

void complexidade(int n){
    double algoritmoA = 0;
    double algoritmoB = 0;

    do{
        algoritmoA = (n * n) - n + 549;
        algoritmoB = (49 * n) + 49;

        n++;
    } while (algoritmoA > algoritmoB);
    
    n = n - 1;
    cout << "Valor de algoritmoA: " << algoritmoA << endl;
    cout << "Valor de algoritmoB: " << algoritmoB << endl;
    cout << "Valor de n: " << n;
}

int main(){
    int n = 1;
    
    complexidade(n);
}