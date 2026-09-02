#include <iostream>

using namespace std;

typedef struct No {
    int dado;
    struct No* prox;
} No;

No* inserirInicio(No* lista, int valor) {
    No* novo = new No;
    novo->dado = valor;
    novo->prox = lista;
    return novo;
}

No* reverter(No* lista) {
    No* anterior = NULL;
    No* atual = lista;

    while (atual) {
        No* prox = atual->prox;
        atual->prox = anterior;
        anterior = atual;
        atual = prox;
    }
    return anterior;
}

void exibir(No* lista) {
    No* temp = lista;
    while (temp) {
        cout << temp->dado << " -> ";
        temp = temp->prox;
    }
    cout << "NULL \n";
}

int main() {
    No* lista = NULL;

    lista = inserirInicio(lista, 40);
    lista = inserirInicio(lista, 30);
    lista = inserirInicio(lista, 20);
    lista = inserirInicio(lista, 10);
    exibir(lista);

    lista = reverter(lista);
    exibir(lista);

    return 0;
}
