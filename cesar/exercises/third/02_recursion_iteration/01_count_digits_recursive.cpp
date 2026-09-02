#include <iostream>

using namespace std;

int contarDigitos(int n) {
    if (n < 10)
        return 1;
    return 1 + contarDigitos(n / 10);
}

int main() {
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    cout << "Quantidade de digitos: " << contarDigitos(numero) << "\n";

    return 0;
}
