#include <iostream>
#include <string.h>
using namespace std;

struct Aluno
{
    string nome;
    int matricula;
    string disciplina;
    double nota;
};

Aluno registro(Aluno estudante){
    
    cout << "Digite nome do aluno: ";
    cin >> estudante.nome;
    std::cin.ignore(256, '\n');
    cout << "Digite matricula do aluno: ";
    cin >> estudante.matricula;
    std::cin.ignore(256, '\n');
    cout << "Digite disciplina do aluno: ";
    cin >> estudante.disciplina;
    std::cin.ignore(256, '\n');
    cout << "Digite nota do aluno: ";
    cin >> estudante.nota;
    std::cin.ignore(256, '\n');

    return estudante;
}
void status(Aluno estud){
    if(estud.nota >= 7)
        cout << estud.nome << " aprovado (a) em " << estud.disciplina;
    else
        cout << estud.nome << " reprovado (a) em " << estud.disciplina;    
}

int main(){
    Aluno student;
    
    cin >> student.nome;
    cin >> student.matricula;
    cin >> student.disciplina;
    cin >> student.nota;
 

    //registro(student);
    status(student);
}
