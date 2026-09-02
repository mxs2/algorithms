#include <iostream>

using namespace std;

typedef struct {
    int dados[100];
    int frente;
    int atras;
} Fila;

typedef struct {
    int dados[100];
    int topo;
} Pilha;

void enfileirar(Fila* f, int valor) {
    f->dados[f->atras] = valor;
    f->atras++;
}

int desenfileirar(Fila* f) {
    int valor = f->dados[f->frente];
    f->frente++;
    return valor;
}

int filaVazia(Fila* f) {
    return f->frente == f->atras;
}

void empilhar(Pilha* p, int valor) {
    p->topo++;
    p->dados[p->topo] = valor;
}

int desempilhar(Pilha* p) {
    int valor = p->dados[p->topo];
    p->topo--;
    return valor;
}

int pilhaVazia(Pilha* p) {
    return p->topo == -1;
}

void inverterFila(Fila* f) {
    Pilha pilha;
    pilha.topo = -1;

    while (!filaVazia(f))
        empilhar(&pilha, desenfileirar(f));

    while (!pilhaVazia(&pilha))
        enfileirar(f, desempilhar(&pilha));
}

void exibir(Fila* f) {
    for (int i = f->frente; i < f->atras; i++)
        cout << f->dados[i] << " <- ";
    cout << "NULL \n";
}

int main() {
    Fila fila;
    fila.frente = 0;
    fila.atras = 0;

    enfileirar(&fila, 10);
    enfileirar(&fila, 20);
    enfileirar(&fila, 30);
    exibir(&fila);

    inverterFila(&fila);
    exibir(&fila);

    return 0;
}
