#include <iostream>

using namespace std;

int somaDigitos(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    cout << "Soma dos digitos: " << somaDigitos(numero) << "\n";

    return 0;
}
