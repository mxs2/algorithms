#include <iostream>

using namespace std;

typedef struct {
    int dados[100];
    int topo;
} Pilha;

void empilhar(Pilha* p, int valor) {
    p->topo++;
    p->dados[p->topo] = valor;
}

int desempilhar(Pilha* p) {
    int valor = p->dados[p->topo];
    p->topo--;
    return valor;
}

int estaVazia(Pilha* p) {
    return p->topo == -1;
}

int main() {
    Pilha pilha;
    int numero;

    pilha.topo = -1;

    cout << "Digite um numero decimal: ";
    cin >> numero;

    while (numero > 0) {
        empilhar(&pilha, numero % 2);
        numero = numero / 2;
    }

    cout << "Binario: ";
    while (!estaVazia(&pilha))
        cout << desempilhar(&pilha);
    cout << "\n";

    return 0;
}
