#include <iostream>
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
    recebeAluno(estudanteA, estudanteB);

    if(estudanteA.nota > estudanteB.nota)
        cout << estudanteA.nome << " , " << estudanteA.nota;
    else if(estudanteB.nota > estudanteA.nota)
        cout << estudanteB.nome << " , " << estudanteB.nota;
    else
        cout << estudanteA.nome << " e " << estudanteB.nome << " , " << estudanteA.nota;
}
int main (){
Aluno studentA;
Aluno studentB;

// studentA.nome = "mateus";
// studentA.matricula = 123;
// studentA.disciplina = "ed";
// studentA.nota = 0;

// studentB.nome = "felix";
// studentB.matricula = 123;
// studentB.disciplina = "ed";
// studentB.nota = 9;

//recebeAluno(studentA, studentB);
maiorNota(studentA, studentB);
}
