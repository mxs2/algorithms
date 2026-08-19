#include <iostream>
#include <string>

using namespace std;

string inverterRecursivo(const string &texto, int inicio, int fim) {
  if (inicio >= fim) {
    return texto;
  }
  string invertido = texto;
  swap(invertido[inicio], invertido[fim]);
  return inverterRecursivo(invertido, inicio + 1, fim - 1);
}

string inverterRecursivo(const string &texto) {
  if (texto.empty()) {
    return texto;
  }
  return inverterRecursivo(texto, 0, static_cast<int>(texto.size()) - 1);
}

string inverterIterativo(const string &texto) {
  string invertido = texto;
  int inicio = 0;
  int fim = static_cast<int>(invertido.size()) - 1;

  while (inicio < fim) {
    swap(invertido[inicio], invertido[fim]);
    ++inicio;
    --fim;
  }

  return invertido;
}

int main() {
  string texto;

  cout << "Digite uma string: ";
  getline(cin >> ws, texto);

  cout << "String original: " << texto << "\n";
  cout << "String invertida (recursivo): " << inverterRecursivo(texto) << "\n";
  cout << "String invertida (iterativo): " << inverterIterativo(texto) << "\n";

  return 0;
}
