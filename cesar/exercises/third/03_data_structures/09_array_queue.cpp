#include <iostream>

using namespace std;

typedef struct {
    int dados[100];
    int frente;
    int atras;
} Fila;

void enfileirar(Fila* f, int valor) {
    f->dados[f->atras] = valor;
    f->atras++;
}

int desenfileirar(Fila* f) {
    int valor = f->dados[f->frente];
    f->frente++;
    return valor;
}

int verFrente(Fila* f) {
    return f->dados[f->frente];
}

int estaVazia(Fila* f) {
    return f->frente == f->atras;
}

int main() {
    Fila fila;
    fila.frente = 0;
    fila.atras = 0;

    cout << "Fila vazia? " << estaVazia(&fila) << "\n";

    enfileirar(&fila, 10);
    enfileirar(&fila, 20);
    enfileirar(&fila, 30);

    cout << "Primeiro: " << verFrente(&fila) << "\n";
    cout << "Removido: " << desenfileirar(&fila) << "\n";
    cout << "Primeiro: " << verFrente(&fila) << "\n";
    cout << "Fila vazia? " << estaVazia(&fila) << "\n";

    return 0;
}
