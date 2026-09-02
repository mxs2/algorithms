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

int contar(No* lista) {
    int total = 0;
    No* temp = lista;
    while (temp) {
        total++;
        temp = temp->prox;
    }
    return total;
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

    lista = inserirInicio(lista, 30);
    lista = inserirInicio(lista, 20);
    lista = inserirInicio(lista, 10);
    exibir(lista);

    cout << "Quantidade de elementos: " << contar(lista) << "\n";

    return 0;
}
