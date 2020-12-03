#include <iostream>
using namespace std;

struct Aluno
{
    string nome;
    int matricula;
    string disciplina;
    double nota;
};

void registro(Aluno estudante){
    
    cout << "Digite nome do aluno: ";
    cin >> estudante.nome;
    cout << "Digite matricula do aluno: ";
    cin >> estudante.matricula;
    cout << "Digite disciplina do aluno: ";
    cin >> estudante.disciplina;
    cout << "Digite nota do aluno: ";
    cin >> estudante.nota;
}
void status(Aluno estud){
    if(estud.nota >= 7)
        cout << estud.nome << " aprovado (a) em " << estud.disciplina;
    else
        cout << estud.nome << " reprovado (a) em " << estud.disciplina;    
}

int main(){
    Aluno student;
    student.disciplina = "ed";
    student.nome = "mateus";
    student.nota = 9;
    student.matricula = 987;

    //registro(student);
    status(student);
}
