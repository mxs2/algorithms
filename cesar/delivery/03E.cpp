#include <iostream>

#include <cstring>

using namespace std;

typedef struct {
    char nome[30];
    int codigo;
    float preco;
} Produto;

void exibirProduto(const Produto &p) {
    cout << p.nome << endl;
    cout << p.codigo << endl;
    cout << p.preco << endl;
}

int main() {
    Produto prod;

    cin >> prod.nome;
    cin >> prod.codigo;
    cin >> prod.preco;

    exibirProduto(prod);

    return 0;
}