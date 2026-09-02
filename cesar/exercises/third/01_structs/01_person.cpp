#include <iostream>

using namespace std;

typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

int main() {
    Pessoa pessoa;

    cout << "Nome: ";
    cin >> pessoa.nome;
    cout << "Idade: ";
    cin >> pessoa.idade;
    cout << "Altura: ";
    cin >> pessoa.altura;

    cout << "\nNome: " << pessoa.nome << "\n";
    cout << "Idade: " << pessoa.idade << " anos\n";
    cout << "Altura: " << pessoa.altura << " m\n";

    return 0;
}
