#include <iostream>

using namespace std;

typedef struct {
    char nome[50];
    int idade;
    char diagnostico[100];
} Paciente;

void exibirIdosos(Paciente pacientes[], int quantidade) {
    cout << "\nPacientes acima de 60 anos:\n";
    for (int i = 0; i < quantidade; i++) {
        if (pacientes[i].idade > 60) {
            cout << pacientes[i].nome << " (" << pacientes[i].idade << ") - "
                << pacientes[i].diagnostico << "\n";
        }
    }
}

int main() {
    Paciente pacientes[3];

    for (int i = 0; i < 3; i++) {
        cout << "\nPaciente " << (i + 1) << "\n";
        cout << "Nome: ";
        cin >> pacientes[i].nome;
        cout << "Idade: ";
        cin >> pacientes[i].idade;
        cout << "Diagnostico: ";
        cin >> pacientes[i].diagnostico;
    }

    exibirIdosos(pacientes, 3);

    return 0;
}
