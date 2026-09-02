#include <iostream>
#include <string.h>

using namespace std;

typedef struct {
    char nome[50];
    char telefone[15];
} Contato;

void buscarContato(Contato contatos[], int quantidade, const char nome[]) {
    for (int i = 0; i < quantidade; i++) {
        if (strcmp(contatos[i].nome, nome) == 0) {
            cout << "\n" << contatos[i].nome << ": " << contatos[i].telefone << "\n";
            return;
        }
    }
    cout << "\nContato nao encontrado.\n";
}

int main() {
    Contato contatos[3];
    char nome[50];

    for (int i = 0; i < 3; i++) {
        cout << "\nContato " << (i + 1) << "\n";
        cout << "Nome: ";
        cin >> contatos[i].nome;
        cout << "Telefone: ";
        cin >> contatos[i].telefone;
    }

    cout << "\nBuscar nome: ";
    cin >> nome;

    buscarContato(contatos, 3, nome);

    return 0;
}
