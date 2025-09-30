#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct No {
    int dado;
    struct No* prox;
} No;

// Inserir no início da lista
No* inserirInicio(No* lista, int valor) {
    No* novo = new No; // No* novo = (No*)malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = lista;
    return novo;
}

// Inserir no final da lista
No* inserirFim(No* lista, int valor) {
    No* novo = new No; // No* novo = (No*)malloc(sizeof(No));
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

No* inserirMeio(No* lista, int valorNovo, int valorBusca) {
    No* novo = new No; // No* novo = (No*)malloc(sizeof(No));
    novo->dado = valorNovo;

    No* temp = lista;
    while (temp->prox && temp->prox->dado != valorBusca) {
        temp = temp->prox;
    }

    novo->prox = temp->prox;
    temp->prox = novo;
    return lista;
}
// Imprimir a lista
void imprimirLista(No* lista) {
    No* temp1 = lista;
    while (temp1) {
        cout << temp1->dado << " -> ";
        temp1 = temp1->prox;
    }
    cout << "NULL \n";
}

int main() {
    No* lista = NULL;
    lista = inserirInicio(lista, 10);
    lista = inserirInicio(lista, 20);
    lista = inserirInicio(lista, 30);
    lista = inserirFim(lista, 40);
    lista = inserirFim(lista, 50);
    //imprimirLista(lista);
    lista = inserirMeio(lista, 99, 10);
    //lista = inserirInicio(lista, 60);
    imprimirLista(lista);
    
    return 0;
}
