#include <iostream>

using namespace std;

typedef struct {
    int dados[5];
    int frente;
    int total;
} Fila;

void enfileirar(Fila* f, int valor) {
    if (f->total == 5) {
        cout << "Fila cheia.\n";
        return;
    }
    f->dados[(f->frente + f->total) % 5] = valor;
    f->total++;
}

int desenfileirar(Fila* f) {
    int valor = f->dados[f->frente];
    f->frente = (f->frente + 1) % 5;
    f->total--;
    return valor;
}

void exibir(Fila* f) {
    for (int i = 0; i < f->total; i++)
        cout << f->dados[(f->frente + i) % 5] << " <- ";
    cout << "NULL \n";
}

int main() {
    Fila fila;
    fila.frente = 0;
    fila.total = 0;

    enfileirar(&fila, 10);
    enfileirar(&fila, 20);
    enfileirar(&fila, 30);
    exibir(&fila);

    cout << "Removido: " << desenfileirar(&fila) << "\n";
    cout << "Removido: " << desenfileirar(&fila) << "\n";

    enfileirar(&fila, 40);
    enfileirar(&fila, 50);
    exibir(&fila);

    return 0;
}
