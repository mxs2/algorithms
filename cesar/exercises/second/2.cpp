#include <cstdlib>
#include <iostream>

using namespace std;

int mdcRecursivo(int primeiro, int segundo) {
  if (segundo == 0) {
    return primeiro;
  }
  return mdcRecursivo(segundo, primeiro % segundo);
}

int mdcIterativo(int primeiro, int segundo) {
  while (segundo != 0) {
    int resto = primeiro % segundo;
    primeiro = segundo;
    segundo = resto;
  }
  return primeiro;
}

int main() {
  int primeiro;
  int segundo;

  cout << "Digite o primeiro numero: ";
  cin >> primeiro;
  cout << "Digite o segundo numero: ";
  cin >> segundo;

  primeiro = abs(primeiro);
  segundo = abs(segundo);

  cout << "MDC (recursivo): " << mdcRecursivo(primeiro, segundo) << "\n";
  cout << "MDC (iterativo): " << mdcIterativo(primeiro, segundo) << "\n";

  return 0;
}
