#include <iostream>

using namespace std;

int maiorElemento(int vetor[], int n) {
    int maior = vetor[0];
    for (int i = 1; i < n; i++) {
        if (vetor[i] > maior)
            maior = vetor[i];
    }
    return maior;
}

int main() {
    int vetor[5] = {10, 45, 7, 33, 21};

    cout << "Maior elemento: " << maiorElemento(vetor, 5) << "\n";

    return 0;
}
