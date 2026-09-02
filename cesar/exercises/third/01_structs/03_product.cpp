#include <iostream>

using namespace std;

typedef struct {
    char nome[30];
    int codigo;
    float preco;
} Produto;

void exibirProduto(Produto p) {
    cout << "\nNome: " << p.nome << "\n";
    cout << "Codigo: " << p.codigo << "\n";
    cout << "Preco: R$ " << p.preco << "\n";
}

int main() {
    Produto produto;

    cout << "Nome: ";
    cin >> produto.nome;
    cout << "Codigo: ";
    cin >> produto.codigo;
    cout << "Preco: ";
    cin >> produto.preco;

    exibirProduto(produto);

    return 0;
}
