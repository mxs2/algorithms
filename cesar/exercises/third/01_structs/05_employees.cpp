#include <iostream>

using namespace std;

typedef struct {
    char nome[50];
    char cargo[30];
    float salario;
} Funcionario;

int main() {
    int quantidade;

    cout << "Quantos funcionarios? ";
    cin >> quantidade;

    Funcionario* funcionarios = new Funcionario[quantidade];

    for (int i = 0; i < quantidade; i++) {
        cout << "\nFuncionario " << (i + 1) << "\n";
        cout << "Nome: ";
        cin >> funcionarios[i].nome;
        cout << "Cargo: ";
        cin >> funcionarios[i].cargo;
        cout << "Salario: ";
        cin >> funcionarios[i].salario;
    }

    for (int i = 0; i < quantidade; i++) {
        cout << "\n" << funcionarios[i].nome << " - " << funcionarios[i].cargo
            << " - R$ " << funcionarios[i].salario;
    }
    cout << "\n";

    delete[] funcionarios;

    return 0;
}
