#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

typedef struct No {
    char nome[50];
    struct No* prox;
} No;

typedef struct {
    No* frente;
    No* atras;
} Fila;

Fila* criarFila() {
    Fila* f = new Fila; // Fila* f = (Fila*)malloc(sizeof(Fila));
    f->frente = f->atras = NULL;
    return f;
}

void enfileirar(Fila* f, const char nome[]) {
    No* novo = new No; // No* novo = (No*)malloc(sizeof(No));
    strcpy(novo->nome, nome);
    novo->prox = NULL;
    if (!f->atras) {
        f->frente = f->atras = novo;
        return;
    }
    f->atras->prox = novo;
    f->atras = novo;
}

void desenfileirar(Fila* f) {
    if (!f->frente) 
        return;
    No* temp = f->frente;
    f->frente = f->frente->prox;
    if (!f->frente) 
        f->atras = NULL;
    delete temp; // free(temp);
}

void imprimirFila(Fila* f) {
    No* temp = f->frente;
    while (temp) {
        cout << temp->nome << " <- ";
        temp = temp->prox;
    }
    cout << "NULL \n";
}

int main() {
    Fila* fila = criarFila();
    enfileirar(fila, "Ana");
    enfileirar(fila, "Bruno");
    enfileirar(fila, "Carlos");
    imprimirFila(fila);

    desenfileirar(fila);
    imprimirFila(fila);

    return 0;
    system("PAUSE");
}
