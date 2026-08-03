#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct No {
    int dados;
    struct No* proximo;
} No;

// Inserir no final da lista
No* inserir(No* lista, int valor) {
    No* novo = new No;
    novo->dados = valor;
    novo->proximo = NULL;
    if (!lista) 
        return novo;
    
    No* temp = lista;
    while (temp->proximo) 
        temp = temp->proximo;
    temp->proximo = novo;
    return lista;
}

// Inserir no início da lista
No* inserirInicio(No* lista, int valor) {
    No* novo = new No;
    novo->dados = valor;
    novo->proximo = lista;
    return novo;
}

// Exibir a lista
void exibir(No* lista) {
    No* temp = lista;
    while (temp) {
        cout << temp->dados << " ";
        temp = temp->proximo;
    }
    cout << endl;
}

// Contar pares recursivamente
int contarParesRecursivo(No* no) {
    if (!no) return 0;
    return (no->dados % 2 == 0 ? 1 : 0) + contarParesRecursivo(no->proximo);
}

// Contar pares
int contarPares(No* lista) {
    return contarParesRecursivo(lista);
}

// Remover ímpares
No* removerImpares(No* lista) {
    // Remove ímpares do início
    while (lista && lista->dados % 2 != 0) {
        No* temp = lista;
        lista = lista->proximo;
        delete temp;
    }
    
    // Remove ímpares do meio e fim
    No* atual = lista;
    while (atual && atual->proximo) {
        if (atual->proximo->dados % 2 != 0) {
            No* temp = atual->proximo;
            atual->proximo = atual->proximo->proximo;
            delete temp;
        } else {
            atual = atual->proximo;
        }
    }
    return lista;
}

// Soma recursiva
int somaRecursiva(No* no) {
    if (!no) return 0;
    return no->dados + somaRecursiva(no->proximo);
}

// Soma
int soma(No* lista) {
    return somaRecursiva(lista);
}

int main() {
    No* lista1 = NULL;
    int valores1[] = {10, 3, 7, 8, 12, 15, 20};
    for (int val : valores1) {
        lista1 = inserir(lista1, val);
    }

    cout << "Lista Original: ";
    exibir(lista1);

    int quantidadePares = contarPares(lista1);
    cout << "Quantidade de Números Pares: " << quantidadePares << endl;

    lista1 = removerImpares(lista1);
    cout << "Lista após remoção dos ímpares: ";
    exibir(lista1);

    No* lista2 = NULL;
    int valores2[] = {10, 5, 8, 20, 15};
    for (int val : valores2) {
        lista2 = inserirInicio(lista2, val);
    }

    cout << "Lista 2 Original: ";
    exibir(lista2);

    int somaTotal = soma(lista2);
    cout << "Soma de todos os elementos: " << somaTotal << endl;

    return 0;
}