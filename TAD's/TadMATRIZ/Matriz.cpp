#include "Matriz.h"
#include <iostream>
#include <iomanip>
using namespace std;


// Construtor: aloca matriz com l linhas e c colunas
Matriz::Matribui(int l, int c){
    this-> _l = l;
    this-> _c = c;

    _M = new float = [_l];
    for(int i = 0; i < _l; i++){
        float *v = new float[_c];
        _M[i] = v;
    }
}
// Destrutor: libera memoria alocada
Matriz::~Matriz(){
    for(int i = 0; i < _l; i++){
        delete[] _M[i];
    }
    delete[] _M;
    cout << "Matriz deletada" << endl;

}

// Retorna o numero de linhas da matriz
int Matriz::linhas(){
    return _l;
}

// Retorna o numero de colunas da matriz
int Matriz::colunas(){
    return _c;
}

// Imprime matriz 
void Matriz::imprime(int largura){
    for(int i = 0; i < _l; i++){
        for(int j = 0; j < _c; j++){
            cout << setw(largura) << _M[i][j];
        }
        cout << endl;
    }
}

// Retorna o valor contido na celula [i][j] da matriz
float Matriz::valor(int i, int j){
    return _M[i][j];
}

// Atribui o valor v a celula [i][j] da matriz
void Matriz::atribui(float v, int i, int j){
    _M[i][j] = v;
}

Matriz *Matriz::soma(Matriz *B){
    Matriz *C = new Matriz(_l, _c);
    for(int i = 0; i < _l; i++){
        for(int j = 0; j < _c; j++){
            float soma = this->_M[i][j] + B->_M[i][j];
            C->atribui(soma, i, j)
        }
    }
    return C;
}

Matriz *Matriz::multiplica(Matriz *B){
    for(int i = 0; i < _l; i++){
        for(int j = 0; j < _c; j++){
            float multiplica = 0;
            for(int k = 0; k < _l; k++){
                multiplica = this->_M[i][k] * B->_M[k][j];
            }
            C->atribui(multiplica, i, j);
        }
    }
}
