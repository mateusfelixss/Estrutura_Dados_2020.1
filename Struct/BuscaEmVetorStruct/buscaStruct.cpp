#include <iostream>
#include <iomanip>
using namespace std;

struct Aluno
{
    int matricula;
    char nome[100];
    double nota;
};


int main(){
    int n;
    int id = 0;
    cin >> n;
    Aluno alunos[n];

    for(int i = 0; i < n; i++){
       cin >>  alunos[i].matricula;
       cin.ignore();
       cin.getline(alunos[i].nome, 100);
       cin >>  alunos[i].nota;
    }
    
    cin >> id;

    for(int i = 0; i < n; i++){
        if(alunos[i].matricula == id){
            cout <<fixed <<setprecision(1) << alunos[i].nome << endl << alunos[i].nota;
            return 0;
        }
    }
    cout << "NAO ENCONTRADA";
    return 0;
}

