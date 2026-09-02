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

int verTopo(Pilha* p) {
    return p->dados[p->topo];
}

int estaVazia(Pilha* p) {
    return p->topo == -1;
}

int main() {
    Pilha pilha;
    pilha.topo = -1;

    cout << "Pilha vazia? " << estaVazia(&pilha) << "\n";

    empilhar(&pilha, 10);
    empilhar(&pilha, 20);
    empilhar(&pilha, 30);

    cout << "Topo: " << verTopo(&pilha) << "\n";
    cout << "Removido: " << desempilhar(&pilha) << "\n";
    cout << "Topo: " << verTopo(&pilha) << "\n";
    cout << "Pilha vazia? " << estaVazia(&pilha) << "\n";

    return 0;
}
