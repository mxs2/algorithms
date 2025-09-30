#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

typedef struct No {
    char dado;
    struct No* prox;
} No;

No* empilhar(No* topo, char valor) {
    No* novo = new No; // No* novo = (No*)malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = topo;
    return novo;
}

No* desempilhar(No* topo, char* valor) {
    if (!topo) 
        return NULL;
    No* temp = topo;
    *valor = topo->dado;
    topo = topo->prox;
    delete temp; // free(temp);
    return topo;
}

void inverterPalavra(char palavra[]) {
    No* pilha = NULL;
    for (int i = 0; palavra[i] != '\0'; i++)
        pilha = empilhar(pilha, palavra[i]);

    cout<<"Palavra invertida: ";
    char c;
    while (pilha)
    {
        pilha = desempilhar(pilha, &c); 
        cout << c;
    }        
    cout << "\n";
}

int main() {
    char palavra[100];
    cout << "Digite uma palavra: ";
    cin >> palavra;
    inverterPalavra(palavra);
    
    return 0;
}
