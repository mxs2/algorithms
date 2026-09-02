#include <iostream>

using namespace std;

void contagemRegressiva(int n) {
    for (int i = n; i >= 0; i--)
        cout << i << " ";
}

int main() {
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    contagemRegressiva(numero);
    cout << "\n";

    return 0;
}
