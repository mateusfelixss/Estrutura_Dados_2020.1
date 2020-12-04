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
    //  student.disciplina = "ed";
    //  student.nome = "mateus";
    //  student.nota = 5;
    //  student.matricula = 987;

//     cout << "Digite nome do aluno: ";
//     cin >> student.nome;
//   //  std::cin.ignore(256, '\n');
//     cout << "Digite matricula do aluno: ";
//     cin >> student.matricula;
//   //  std::cin.ignore(256, '\n');
//     cout << "Digite disciplina do aluno: ";
//     cin >> student.disciplina;
//  //   std::cin.ignore(256, '\n');
//     cout << "Digite nota do aluno: ";
//     cin >> student.nota;
//   //  std::cin.ignore(256, '\n');

    registro(student);
    cout << student.nota << endl << student.nome << endl;
    status(student);
}
