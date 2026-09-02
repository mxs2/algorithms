#include <iostream>

using namespace std;

int maiorElemento(int vetor[], int n) {
    if (n == 1)
        return vetor[0];

    int maior = maiorElemento(vetor, n - 1);
    if (vetor[n - 1] > maior)
        return vetor[n - 1];
    return maior;
}

int main() {
    int vetor[5] = {10, 45, 7, 33, 21};

    cout << "Maior elemento: " << maiorElemento(vetor, 5) << "\n";

    return 0;
}
