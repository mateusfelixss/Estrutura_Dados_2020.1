#include <iostream>
#include <iomanip>
using namespace std;

struct Aluno
{
    string nome;
    int matricula;
    string disciplina;
    double nota;
};

void recebeAluno(Aluno discenteA, Aluno discenteB){
    cout << "Aluno 01 (nome, matricula, disciplina e nota)" << endl;
    cin >> discenteA.nome;
    cin >> discenteA.matricula;
    cin >> discenteA.disciplina;
    cin >> discenteA.nota;
    
    cout << "Aluno 02 (nome, matricula, disciplina e nota)" << endl;
    cin >> discenteB.nome;
    cin >> discenteB.matricula;
    cin >> discenteB.disciplina;
    cin >> discenteB.nota;
}


void maiorNota(Aluno estudanteA, Aluno estudanteB){

    if(estudanteA.nota > estudanteB.nota)
        cout << fixed << setprecision(1) << estudanteA.nome << " , " << estudanteA.nota;
    else if(estudanteB.nota > estudanteA.nota)
        cout << fixed << setprecision(1) << estudanteB.nome << " , " << fixed << setprecision(1) << estudanteB.nota;
    else
        cout << fixed << setprecision(1) << estudanteA.nome << " e " << fixed << setprecision(1) << estudanteB.nome << " , " << estudanteA.nota;
}
int main (){
Aluno studentA;
Aluno studentB;

cin >> studentA.nome;
cin >> studentA.matricula;
cin >> studentA.disciplina;
cin >> studentA.nota;

cin >> studentB.nome;
cin >> studentB.matricula;
cin >> studentB.disciplina;
cin >> studentB.nota;

//recebeAluno(studentA, studentB);
maiorNota(studentA, studentB);
}
