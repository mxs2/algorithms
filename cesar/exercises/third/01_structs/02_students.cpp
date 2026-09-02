#include <iostream>

using namespace std;

typedef struct {
    char nome[50];
    int matricula;
    float nota;
} Aluno;

int main() {
    Aluno alunos[5];
    float soma = 0;

    for (int i = 0; i < 5; i++) {
        cout << "\nAluno " << (i + 1) << "\n";
        cout << "Nome: ";
        cin >> alunos[i].nome;
        cout << "Matricula: ";
        cin >> alunos[i].matricula;
        cout << "Nota: ";
        cin >> alunos[i].nota;
        soma = soma + alunos[i].nota;
    }

    for (int i = 0; i < 5; i++) {
        cout << "\n" << alunos[i].nome << " - " << alunos[i].nota;
    }

    cout << "\n\nMedia das notas: " << soma / 5 << "\n";

    return 0;
}
