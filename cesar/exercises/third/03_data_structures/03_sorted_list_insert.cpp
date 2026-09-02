#include <iostream>

using namespace std;

typedef struct No {
    int dado;
    struct No* prox;
} No;

No* inserirOrdenado(No* lista, int valor) {
    No* novo = new No;
    novo->dado = valor;
    novo->prox = NULL;

    if (!lista || valor < lista->dado) {
        novo->prox = lista;
        return novo;
    }

    No* temp = lista;
    while (temp->prox && temp->prox->dado < valor)
        temp = temp->prox;

    novo->prox = temp->prox;
    temp->prox = novo;
    return lista;
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

    lista = inserirOrdenado(lista, 30);
    lista = inserirOrdenado(lista, 10);
    lista = inserirOrdenado(lista, 50);
    lista = inserirOrdenado(lista, 20);
    exibir(lista);

    return 0;
}
