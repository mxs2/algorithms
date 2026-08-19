#include <iostream>
#include <string>

using namespace std;

struct Data {
  int dia;
  string mes;
  int ano;
};

struct Funcionario {
  string nome;
  int idade;
  double salario;
  Data nascimento;
};

int main() {
  const int quantidadeFuncionarios = 3;
  Funcionario funcionarios[quantidadeFuncionarios];

  for (int i = 0; i < quantidadeFuncionarios; ++i) {
    cout << "\nFuncionario " << i + 1 << "\n";
    cout << "Nome: ";
    getline(cin >> ws, funcionarios[i].nome);
    cout << "Idade: ";
    cin >> funcionarios[i].idade;
    cout << "Salario: ";
    cin >> funcionarios[i].salario;
    cout << "Data de nascimento (dia mes ano): ";
    cin >> funcionarios[i].nascimento.dia >> funcionarios[i].nascimento.mes >>
        funcionarios[i].nascimento.ano;
  }

  cout << "\nDados dos funcionarios\n";
  for (const Funcionario &funcionario : funcionarios) {
    cout << "Nome: " << funcionario.nome << "\n"
         << "Idade: " << funcionario.idade << "\n"
         << "Salario: " << funcionario.salario << "\n"
         << "Nascimento: " << funcionario.nascimento.dia << "/"
         << funcionario.nascimento.mes << "/" << funcionario.nascimento.ano
         << "\n\n";
  }

  return 0;
}