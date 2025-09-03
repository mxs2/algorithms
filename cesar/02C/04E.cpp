#include <iostream>

using namespace std;

struct No {
    int valor;
    struct No* prox;
};

No* inserirInicio(No* lista, int valor) {
    No* novo = new No;
    novo->valor = valor;
    novo->prox = lista;

    return novo;
}

No* inserirFim(No* lista, int valor) {
    No* temp = lista;
    while (temp->prox != NULL) {
        temp = temp->prox;
    }

    No* novo = new No;
    novo->valor = valor;
    novo->prox = NULL;
    temp->prox = novo;

    return lista;
}

void exibirLista(No* lista) {
    No* temp = lista;
    while (temp != NULL) {
        cout << temp->valor << " ";
        temp = temp->prox;
    }
    cout << "NULL" << endl;
}

int main() {
    No* lista = NULL;
    lista = inserirInicio(lista, 10);
    lista = inserirInicio(lista, 20);
    lista = inserirInicio(lista, 30);
    lista = inserirFim(lista, 40);
    lista = inserirFim(lista, 50);
    exibirLista(lista);

    return 0;
}