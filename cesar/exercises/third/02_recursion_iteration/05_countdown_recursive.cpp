#include <iostream>

using namespace std;

void contagemRegressiva(int n) {
    cout << n << " ";
    if (n == 0)
        return;
    contagemRegressiva(n - 1);
}

int main() {
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    contagemRegressiva(numero);
    cout << "\n";

    return 0;
}
