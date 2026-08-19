#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

struct Aluno {
  string nome;
  double matematica;
  double fisica;
  double media;
};

int main() {
  const int quantidadeAlunos = 3;
  Aluno alunos[quantidadeAlunos];

  for (int i = 0; i < quantidadeAlunos; ++i) {
    cout << "\nAluno " << i + 1 << "\n";
    cout << "Nome: ";
    getline(cin >> ws, alunos[i].nome);
    cout << "Nota de matematica: ";
    cin >> alunos[i].matematica;
    cout << "Nota de fisica: ";
    cin >> alunos[i].fisica;
    alunos[i].media = (alunos[i].matematica + alunos[i].fisica) / 2.0;
  }

  cout << fixed << setprecision(2);
  cout << "\nMedias dos alunos\n";
  for (const Aluno& aluno : alunos) {
    cout << aluno.nome << ": " << aluno.media << "\n";
  }

  return 0;
}