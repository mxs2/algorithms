#include <iostream>
#include <string>

using namespace std;

struct Produto {
  string nome;
  double preco;
  int quantidade;
};

int main() {
  const int quantidadeProdutos = 10;
  Produto produtos[quantidadeProdutos];
  double totalVendas = 0.0;

  for (int i = 0; i < quantidadeProdutos; ++i) {
    cout << "\nProduto " << i + 1 << "\n";
    cout << "Nome: ";
    getline(cin >> ws, produtos[i].nome);
    cout << "Preco: ";
    cin >> produtos[i].preco;
    cout << "Quantidade vendida: ";
    cin >> produtos[i].quantidade;
    totalVendas += produtos[i].preco * produtos[i].quantidade;
  }

  cout << "\nResumo das vendas\n";
  for (const Produto &produto : produtos) {
    double totalProduto = produto.preco * produto.quantidade;
    cout << produto.nome << ": " << produto.quantidade << " x " << produto.preco
         << " = " << totalProduto << "\n";
  }
  cout << "Total das vendas: " << totalVendas << "\n";

  return 0;
}