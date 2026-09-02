#include <iostream>

using namespace std;

int somaDigitos(int n) {
    int soma = 0;
    while (n > 0) {
        soma = soma + (n % 10);
        n = n / 10;
    }
    return soma;
}

int main() {
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    cout << "Soma dos digitos: " << somaDigitos(numero) << "\n";

    return 0;
}
