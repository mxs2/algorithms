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

No* inserirFim(No* lista, int valor) {
    No* novo = new No;
    novo->dado = valor;
    novo->prox = NULL;
    if (!lista)
        return novo;

    No* temp = lista;
    while (temp->prox)
        temp = temp->prox;
    temp->prox = novo;
    return lista;
}

No* remover(No* lista, int valor) {
    if (!lista)
        return NULL;

    if (lista->dado == valor) {
        No* temp = lista;
        lista = lista->prox;
        delete temp;
        return lista;
    }

    No* atual = lista;
    while (atual->prox && atual->prox->dado != valor)
        atual = atual->prox;

    if (atual->prox) {
        No* temp = atual->prox;
        atual->prox = atual->prox->prox;
        delete temp;
    }
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

    lista = inserirInicio(lista, 20);
    lista = inserirInicio(lista, 10);
    lista = inserirFim(lista, 30);
    lista = inserirFim(lista, 40);
    exibir(lista);

    lista = remover(lista, 30);
    exibir(lista);

    return 0;
}
