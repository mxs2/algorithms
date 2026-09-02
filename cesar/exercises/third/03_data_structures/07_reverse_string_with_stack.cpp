#include <iostream>
#include <string.h>

using namespace std;

typedef struct {
    char dados[100];
    int topo;
} Pilha;

void empilhar(Pilha* p, char valor) {
    p->topo++;
    p->dados[p->topo] = valor;
}

char desempilhar(Pilha* p) {
    char valor = p->dados[p->topo];
    p->topo--;
    return valor;
}

int estaVazia(Pilha* p) {
    return p->topo == -1;
}

int main() {
    Pilha pilha;
    char palavra[100];

    pilha.topo = -1;

    cout << "Digite uma palavra: ";
    cin >> palavra;

    for (int i = 0; i < (int)strlen(palavra); i++)
        empilhar(&pilha, palavra[i]);

    cout << "Palavra invertida: ";
    while (!estaVazia(&pilha))
        cout << desempilhar(&pilha);
    cout << "\n";

    return 0;
}
